//
// Created by n5320 on 2017/4/28.
//
#include "heapsort.h"
#include "mylog.h"
#include <algorithm>
void printArray(int *, int);

void testHeapSort(int *array, int arraySize);


void heapSortByMaxHeap(int *unSortArray, int arraySize) {
    testHeapSort(unSortArray, arraySize);

    // buildMaxHeap(unSortArray, arraySize);
    LOGD("after buildMaxHeap ------------------------");
//    printArray(unSortArray, arraySize);
//
//    for (int i = arraySize - 1; i >= 1; i--) {
//        int max = unSortArray[0];
//        unSortArray[0] = unSortArray[i];
//        unSortArray[i] = max;
//        maxHeapify(unSortArray, 0, i - 1);
//    }

    LOGD("after heapSortByMaxHeap ------------------------");
}

void buildMaxHeap(int *unSortArray, int arraySize) {
    for (int i = arraySize / 2 - 1; i >= 0; i--) {
        maxHeapify(unSortArray, i, arraySize - 1);
        LOGD("after buildMaxHeap i = %d ------------------------", i);
        printArray(unSortArray, arraySize);
    }
}

void maxHeapify(int *unSortArray, int root, int bottom) {
    int rootValue = unSortArray[root];
    int left = root * 2 + 1;
    while (left <= bottom) {
        if (left < bottom) {
            if (unSortArray[left] < unSortArray[left + 1]) {
                left = left + 1;
            }
        }

        if (rootValue < unSortArray[left]) {
            unSortArray[root] = unSortArray[left];
            root = left;
            left = root * 2 + 1;
        } else {
            left = bottom + 1;
        }
    }

    unSortArray[root] = rootValue;
}

void printArray(int *array, int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        LOGD(" printArray--- %d = %d", i, array[i]);
    }
}

void testMaxHeapify(int *array, int root, int bottom) {
    int currentIndex = root;
    int left = root * 2 + 1;
    while (left <= bottom) {
        if (left < bottom) {
            if (array[left] < array[left + 1]) {
                left++;
            }
        }

        if (array[currentIndex] >= array[left]) {
            return;
        }

        int tmp = array[currentIndex];
        array[currentIndex] = array[left];
        array[left] = tmp;
        currentIndex = left;
        left = left * 2 + 1;
    }
}

void testBuildMaxHeap(int *array, int arraySize) {
    for (int i = arraySize / 2 - 1; i >= 0; i--) {
        testMaxHeapify(array, i, arraySize - 1);
    }
}

void testHeapSort(int *array, int arraySize) {
    testBuildMaxHeap(array, arraySize);
    LOGD("after buildMaxHeap ------------------------");
    printArray(array, arraySize);

    for (int i = arraySize - 1; i >= 0; i--) {
        int max = array[0];
        array[0] = array[i];
        array[i] = max;
        testMaxHeapify(array, 0, i - 1);
    }
}