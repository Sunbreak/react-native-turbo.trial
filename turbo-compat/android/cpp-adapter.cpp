#include <jni.h>
#include "react-native-turbo-compat.h"

extern "C"
JNIEXPORT jint JNICALL
Java_com_turbocompat_TurboCompatModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return turbocompat::multiply(a, b);
}
