#include <jni.h>
#include "react-native-turbo-only.h"

extern "C"
JNIEXPORT jint JNICALL
Java_com_turboonly_TurboOnlyModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return turboonly::multiply(a, b);
}
