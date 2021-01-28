#pragma once

#define AUTO_SHIFT_TIMEOUT 130

// https://beta.docs.qmk.fm/using-qmk/software-features/tap_hold#tapping-force-hold
//
// TLDR: tap force hold is good to have OFF (default) when dual-function keys are used,
// allows to still get autorepeat for letters.
// With AutoShift, it is OK to disable and it solves a problem of getting space repeated in
// situations where I don't want/expect that (because I use left space hold to get right space
// to be backpace).
//
// Problem: sometimes backspace doesn't work and while holding the left space,
// the right one still produces spaces
//
// It looks like this is a behavior controlled by the Tapping Force Hold setting
// >  By default, when holding a dual-function key shortly after tapping it,
// > the tapped key will begin repeating. This is handy for fast typists when 
// > typing words with double letters, such as "happy". If you turn this setting ON,
// > it will be counted as a held modifier instead. Note: enabling this will 
// > override any tap toggle behavior such as One Shot Tap Toggle
//
// I don't have now dual-function modifiers on any of the letters,
// so it should not affect anything (maybe only wired behaviors with modifiers
// locking when I am holding for too long, which should be what One Shot Tap Toggle does)
//
// Note: without auto-shift, the tapping force hold OFF was good,
// I remember using it on J where I can either hold to get Shift or tap+tap-and-hold
// to get J repeated. With auto-shift that doesn't work anyway,
// as holding produces capital J and holding for a longer time does nothing.
//
#define TAPPING_FORCE_HOLD
