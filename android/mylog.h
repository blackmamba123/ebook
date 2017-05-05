//
// Created by n5320 on 2017/4/25.
//

#ifndef MYNDKPROJECT_MYLOG_H
#define MYNDKPROJECT_MYLOG_H
#endif //MYNDKPROJECT_MYLOG_H

#include <android/log.h>

#define  MODULE_NAME "NATIVE_LIB"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, MODULE_NAME, __VA_ARGS__)
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, MODULE_NAME, __VA_ARGS__)