// template file to produce build.h header
// this is produced at build time (not Cmake time) via the special
// target defined by GenerateBuildInfo.Cmake
// this ensures the info is always up to date, which does not happen
// with a simple configure_file command
// for more info, see:
// https://stackoverflow.com/questions/31057208/force-cmake-to-generate-configure-file-target-every-build

#define JENKINS_BUILD_NUMBER 0
#define JENKINS_BUILD_ID "none"
#define REVISION "43b3ffc55bbd59b44062f738e1d045bcae46128b"




