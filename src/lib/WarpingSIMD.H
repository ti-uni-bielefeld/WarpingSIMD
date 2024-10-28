// ===========================================================================
//
// Main include file for the WarpingSIMD library.
//
// This source code file is part of the following software:
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

#pragma once
#ifndef WARPING_SIMD_H_
#define WARPING_SIMD_H_

#include "warpingsimd/ComplexSearch.H"                   // IWYU pragma: export
#include "warpingsimd/MinWarpingMatch.H"                 // IWYU pragma: export
#include "warpingsimd/MinWarpingSearch.H"                // IWYU pragma: export
#include "warpingsimd/MinWarpingSearchCollection.H"      // IWYU pragma: export
#include "warpingsimd/MinWarpingSearchRange.H"           // IWYU pragma: export
#include "warpingsimd/MinWarpingTemplate.H"              // IWYU pragma: export
#include "warpingsimd/OCamModel.H"                       // IWYU pragma: export
#include "warpingsimd/SIMDException.H"                   // IWYU pragma: export
#include "warpingsimd/SIMDImage.H"                       // IWYU pragma: export
#include "warpingsimd/SIMDImageFunctions.H"              // IWYU pragma: export
#include "warpingsimd/SharedSIMDPtr.H"                   // IWYU pragma: export
#include "warpingsimd/TimeMeasurement.H"                 // IWYU pragma: export
#include "warpingsimd/TransformMatrix.H"                 // IWYU pragma: export
#include "warpingsimd/WarpingBundle.H"                   // IWYU pragma: export
#include "warpingsimd/WarpingCompound.H"                 // IWYU pragma: export
#include "warpingsimd/WarpingFactories.H"                // IWYU pragma: export
#include "warpingsimd/WarpingParameter.H"                // IWYU pragma: export
#include "warpingsimd/WarpingSPS.H"                      // IWYU pragma: export
#include "warpingsimd/WarpingSPSComputation.H"           // IWYU pragma: export
#include "warpingsimd/WarpingSPSComputationCollection.H" // IWYU pragma: export
#include "warpingsimd/WarpingSPSComputationCollectionModular.H" // IWYU pragma: export
#include "warpingsimd/WarpingSearch.H"           // IWYU pragma: export
#include "warpingsimd/WarpingSearchCollection.H" // IWYU pragma: export
#include "warpingsimd/WarpingTemplate.H"         // IWYU pragma: export
#include "warpingsimd/saturate_cast.H"           // IWYU pragma: export

#endif
