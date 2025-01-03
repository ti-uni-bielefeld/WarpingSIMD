#!/usr/bin/env bash
# ===========================================================================
# 
# Generates a single header file from the WarpingSIMD library.
# 
# This source code file is part of the following software:
# 
#    - the low-level C++ template SIMD library
#    - the SIMD implementation of the MinWarping and the 2D-Warping methods 
#      for local visual homing.
# 
# The software is provided based on the accompanying license agreement in the
# file LICENSE.md.
# The software is provided "as is" without any warranty by the licensor and
# without any liability of the licensor, and the software may not be
# distributed by the licensee; see the license agreement for details.
# 
# (C) Jonas Keller, Ralf Möller
#     Computer Engineering
#     Faculty of Technology
#     Bielefeld University
#     www.ti.uni-bielefeld.de
# 
# ===========================================================================

# exit on error
set -e

# check if single header file name is given
if [ $# -ne 1 ]; then
    echo "Usage: $0 <single header file name>"
    exit 1
fi

# get single header file name
sh_name=$1

# check if quom is installed
if ! which quom 2> /dev/null > /dev/null; then
    echo "ERROR: quom is not installed, install with \"pip3 install --user quom\" (see https://github.com/Viatorus/quom)"
    exit 1
fi

# write header comment to single header file
cat <<EOF > $sh_name
// ===========================================================================
//
// Single header version of the WarpingSIMD library.
// Version: $(git describe --tags --always)
// GitHub repository: https://github.com/ti-uni-bielefeld/WarpingSIMD
//
// This file is part of the following software:
//
//    - the low-level C++ template SIMD library
//    - the SIMD implementation of the MinWarping and the 2D-Warping methods
//      for local visual homing.
//
// The software is provided based on the accompanying license agreement in the
// file LICENSE.md.
// The software is provided "as is" without any warranty by the licensor and
// without any liability of the licensor, and the software may not be
// distributed by the licensee; see the license agreement for details.
//
// (C) Ralf Möller
//     Computer Engineering
//     Faculty of Technology
//     Bielefeld University
//     www.ti.uni-bielefeld.de
//
// ===========================================================================
EOF

# write LICENSE.md to single header file with comment
cat <<EOF >> $sh_name

// ===========================================================================
// LICENSE.md
// ===========================================================================
/*
EOF
cat LICENSE.md >> $sh_name
cat <<EOF >> $sh_name
*/
// ===========================================================================
// end of LICENSE.md
// ===========================================================================

EOF

# generate single header file
quom src/lib/WarpingSIMD.H $sh_name.tmp
# write to single header file
cat $sh_name.tmp >> $sh_name
# remove temporary file
rm $sh_name.tmp
