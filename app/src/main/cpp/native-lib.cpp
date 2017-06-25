#include <jni.h>
#include "test.cpp"

extern "C"
JNIEXPORT jstring JNICALL
Java_com_thefinestartist_palette_example_MainActivity_stringFromJNI(JNIEnv *env,
                                                                    jobject) {
    return env->NewStringUTF(extract_string().c_str());
}