# WarpingSIMD

**WarpingSIMD** is an implementation of the MinWarping method and the 2D-Warping method of local visual homing based on the [**T-SIMD** library](https://github.com/ti-uni-bielefeld/T-SIMD).

MinWarping and 2D-Warping take two panoramic images captured at different positions in the plane and compute an estimate of the vector pointing from one capture point to the other (home vector) and an estimate of the azimuthal orientation difference (compass angle). These methods can be used for local visual homing of mobile robots or for trajectory SLAM. The code also contains later extensions to MinWarping like a method for tilt compensation.

For further information on **WarpingSIMD**, including related papers, videos, and image databases see https://www.ti.uni-bielefeld.de/html/people/moeller/tsimd_warpingsimd.html.

## License

This software is distributed based on a specific **license agreement**, please see the file [LICENSE.md](LICENSE.md).

## Authors and Contributors

**WarpingSIMD** was originally written by [Ralf Möller](http://www.ti.uni-bielefeld.de/html/people/moeller/) (moeller@ti.uni-bielefeld.de).

Other contributors are: Christoph Berganski, Annika Hoffmann, Benedikt Volkmer, and Jonas Keller.

Their specific contributions are mentioned in the source files. Thanks a lot to all contributors!

## Contact and Bug Reports

If you find any bugs or errors in **WarpingSIMD**, please [open an issue on GitHub](https://github.com/ti-uni-bielefeld/WarpingSIMD/issues).

Alternatively, or for other inquiries, contact [Ralf Möller](http://www.ti.uni-bielefeld.de/html/people/moeller/) (moeller@ti.uni-bielefeld.de).
