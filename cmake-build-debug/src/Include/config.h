

/* #undef FG_NDEBUG */

#define ENABLE_SIMD
#define ENABLE_SP_FDM
#define JSBSIM_USE_GROUNDREACTIONS

// JSBSim needs this, to switch from standalone to in-FG mode
#define FGFS

#define PU_USE_NONE // PLIB needs this to avoid linking to GLUT

#define ENABLE_PLIB_JOYSTICK

// threads are required (used to be optional)
#define ENABLE_THREADS 1

// audio support is assumed
#define ENABLE_AUDIO_SUPPORT 1

#define HAVE_SYS_TIME_H
/* #undef HAVE_WINDOWS_H */
#define HAVE_MKFIFO

#define VERSION "2018.3.2"

#define HAVE_VERSION_H 1 // version.h is assumed for CMake builds

#define ENABLE_UIUC_MODEL
#define ENABLE_LARCSIM
#define ENABLE_YASIM
#define ENABLE_JSBSIM

#define PKGLIBDIR "/usr/local/lib/FlightGear"
#define FGSRCDIR "/home/pawu/devel/ml-flightgear"
#define FGBUILDDIR "/home/pawu/devel/ml-flightgear/cmake-build-debug"
#define WEB_BROWSER "xdg-open"

// Ensure FG_HAVE_xxx always have a value
#define FG_HAVE_HLA ( + 0)
#define FG_HAVE_GPERFTOOLS ( + 0)

/* #undef SYSTEM_SQLITE */

#define ENABLE_IAX

#define HAVE_DBUS

/* #undef HAVE_CRASHRPT */

#define ENABLE_FLITE
/* #undef ENABLE_HID_INPUT */
#define ENABLE_PLIB_JOYSTICK

#define HAVE_QT

#define HAVE_SYS_TIME_H
#define HAVE_SYS_TIMEB_H
#define HAVE_TIMEGM
#define HAVE_DAYLIGHT
#define HAVE_FTIME
#define HAVE_GETTIMEOFDAY

#define FG_BUILD_TYPE "Dev"

#define HAVE_PUI

/* #undef HAVE_QRC_TRANSLATIONS */

