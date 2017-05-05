//
// Created by n5320 on 2017/5/3.
//
#include "countsort.h"

/**
 *
 * @param arrayA
 * @param arraySize 数组长度
 * @param range  数组元素取值范围
 */
void countSort(int *arrayA, int arraySize, int range) {
    int arrayC[range];
    for(int i = 0 ; i< range; i++){
        arrayC[i] = 0;
    }

    for (int i = 0; i < arraySize; i++) {
        arrayC[arrayA[i]] ++;
    }

    int index = 0;
    for(int i = 0; i < range; i++){
        while (arrayC[i] -- > 0){
            arrayA[index++] = i;
        }
    }
}