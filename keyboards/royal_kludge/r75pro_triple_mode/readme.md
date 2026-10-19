# R75PRO
* Keyboard Maintainer: [sdk66](https://github.com/sdk66)
* Hardware Supported: R75PRO
* Hardware Availability: [R75PRO](https://www.rkgaming.com)

Make example for this keyboard (after setting up your build environment):

    qmk compile -j 0 -kb royal_kludge/r75pro_triple_mode -km default
        
Flashing example for this keyboard:

    qmk flash -j 0 -kb royal_kludge/r75pro_triple_mode -km default

To reset the board into bootloader mode, do one of the following:

* Hold the Reset button mounted under the space bar while connecting the USB cable (you might have to pull out the dampening cushion on the left side of the key switch)
* Hold the Escape key while connecting the USB cable (also erases persistent settings)
* Fn+R_Shift+Esc will reset the board to bootloader mode if you have flashed the default QMK keymap

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
