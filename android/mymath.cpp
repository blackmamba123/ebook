//
// Created by n5320 on 2017/4/25.
//
#include "mymath.h"
#include "mylog.h"

int add(int a, int b) {
    LOGV("ddddddddd");
    LOGD("ddddddd_debug");
    return a + b;
}

int sub(int a, int b) {
    int result = a * b;
    LOGD("ddddddd %d * %d = %d", a, b, result);
    return result;
}

