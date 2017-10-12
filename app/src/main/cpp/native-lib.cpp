#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_ldh_android_tinkerdemo_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++\n";
    return env->NewStringUTF(hello.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_ldh_android_tinkerdemo_MainActivity_hello(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Stay foolish,stay hungery!\n不忘初心，方得始终。";
    return env->NewStringUTF(hello.c_str());
}