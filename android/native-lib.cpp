#include <jni.h>
#include <string>
#include "mymath.h"
#include "binarytree.h"
#include "mylog.h"
#include "heapsort.h"
#include "quicksort.h"
#include "stdlib.h"
#include "countsort.h"
#include "bucketsort.h"

extern "C"
jstring
Java_com_netease_yuankai_myndkproject_jniiml_JniImlLevel_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C"
jint Java_com_netease_yuankai_myndkproject_jniiml_JniImlLevel_add(JNIEnv *env, jobject, jint a, jint b) {
    int result = add(a, b);
    return result;
}

//JNIEXPORT jint JNICALL
extern "C"
jint Java_com_netease_yuankai_myndkproject_jniiml_JniImlLevel_sub(JNIEnv *env, jclass type, jint a,
                                                                  jint b) {
    int result = sub(a, b);
    return result;
}

//JNIEXPORT void JNICALL
extern "C"
void
Java_com_netease_yuankai_myndkproject_jniiml_JniImlLevel_binaryTreeTest(JNIEnv *env, jclass type) {
    BinaryTree binaryTree;
   // int array[] = {1, 2, 3, 4, 5, 6, 7};
    int array[] = {7, 5, 6, 4, 1, 3, 2};
    int arraySize = sizeof(array) / sizeof(int);
    int *p = array;
    for (int i = 0; i < arraySize; i++) {
        binaryTree.create_BTree(*(p+i));
    }

    LOGV("preOrderSearchTree ------------i--");
    binaryTree.preOrderSearchTree(binaryTree.root);

    LOGV("middleOrderSearchTree --------------");
    binaryTree.middleOrderSearchTree(binaryTree.root);

    LOGV("followOrderSearchTree --------------");
    binaryTree.followOrderSearchTree(binaryTree.root);
}

extern  "C"
void Java_com_netease_yuankai_myndkproject_jniiml_JniImlLevel_heapSortTest(JNIEnv *env, jclass type) {
    int array[] = {1,2,3,4,5,6,7};
    int arraySize = sizeof(array) / sizeof(int);
    LOGV("start heapSortTest---");
    heapSortByMaxHeap(array, arraySize);
    for(int i = 0; i < arraySize; i++){
        LOGV("%d = %d",i,array[i]);
    }
}

extern  "C"
void Java_com_netease_yuankai_myndkproject_jniiml_JniImlLevel_quickSortTest(JNIEnv *env, jclass type) {

    LOGV("quickSortTest start --------------");

    srand((unsigned)time(NULL));
    int array[10];
    for(int i = 0 ; i < 10; i++){
       array[i] = rand() % 20;
    }

    int arraySize = sizeof(array) / sizeof(int);
    quickSort(array,0,arraySize -1);

    LOGV("quickSortTest after --------------");
    for(int i = 0; i < arraySize; i++){
        LOGV("%d = %d",i,array[i]);
    }
}

extern  "C"
void Java_com_netease_yuankai_myndkproject_jniiml_JniImlLevel_countSortTest(JNIEnv *env, jclass type) {
    int array[] = {1,5,5,3,5,2,7,2,2,2,3,3,6,2,3,0,5,3,1};
    int arraySize = sizeof(array) / sizeof(int);
    LOGV("start countSortTest---");
    countSort(array, arraySize,10);
    for(int i = 0; i < arraySize; i++){
        LOGV("%d = %d",i,array[i]);
    }
}

extern "C"
void Java_com_netease_yuankai_myndkproject_jniiml_JniImlLevel_radixSortTest(JNIEnv *env, jclass type) {

}

extern "C"
void Java_com_netease_yuankai_myndkproject_jniiml_JniImlLevel_bucketSortTest(JNIEnv *env, jclass type) {
    int array[] = {1,5,5,4,5,2,2,3,7};
    int arraySize = sizeof(array) / sizeof(int);
    LOGV("start bucketSortTest---");
    bucketsort(array, arraySize,10);
    for(int i = 0; i < arraySize; i++){
        LOGV("%d = %d",i,array[i]);
    }
}