//
// Created by n5320 on 2017/5/2.
//
#include "quicksort.h"
#include "mylog.h"

void logoutArray(int *array);
int arraySize = 0;

void quickSort(int *array, int start, int end) {
    if (arraySize == 0) {
        arraySize = end + 1;
    }

    if(start >= end){
        return;
    }

    LOGV("after quick sort start = %d end = %d ------------", start, end);
    logoutArray(array);
    int i = partition(array,start,end);
    quickSort(array,start, i-1);
    quickSort(array,i+1,end);
}

int partition(int * array, int start , int end){
    int i , j ,tmp;
    i = start;
    j = end;

    while(i != j){
        while(array[j] >= array[start] && i < j){
            j--;
        }

        while(array[i] <= array[start] && i < j){
            i++;
        }

        if(i < j){
            tmp = array[i];
            array[i] = array[j];
            array[j] = tmp;
        }
    }

    tmp = array[start];
    array[start] = array[i];
    array[i] = tmp;

    return i;
}

void logoutArray(int* array) {
    for (int i = 0; i < arraySize; i++) {
        LOGV(" %d = %d", i, array[i]);
    }
}



