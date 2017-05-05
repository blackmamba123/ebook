//
// Created by n5320 on 2017/4/26.
//
#include "binarytree.h"
#include "mylog.h"

int BinaryTree::m =0;
int BinaryTree::n =0;

void BinaryTree::create_BTree(int n){
    tree* newNode = new tree();
    newNode->data = n;
    newNode->leftNode = NULL;
    newNode->rightNode = NULL;
    if(root == NULL){
        root = newNode;
    }else{
        tree* back;
        tree* current = root;
        while(current != NULL){
            back = current;
            if(current->data > n){
                current = current->leftNode;
            }else{
                current = current->rightNode;
            }
        }

        if(back->data > n){
            back->leftNode = newNode;
        }else{
            back->rightNode = newNode;
        }
    }
}

void BinaryTree::preOrderSearchTree(tree* tmp){
    if(tmp == NULL){
        return;
    }

    LOGD("%d , ",tmp->data);
    preOrderSearchTree(tmp->leftNode);
    preOrderSearchTree(tmp->rightNode);
}

void BinaryTree::middleOrderSearchTree(tree* tmp){
    if(tmp == NULL){
        return;
    }

    middleOrderSearchTree(tmp->leftNode);
    LOGD("%d , ",tmp->data);
    middleOrderSearchTree(tmp->rightNode);
}

void BinaryTree::followOrderSearchTree(tree* tmp){
    if(tmp == NULL){
        return;
    }

    followOrderSearchTree(tmp->leftNode);
    followOrderSearchTree(tmp->rightNode);
    LOGD("%d , ",tmp->data);
}

int BinaryTree::count(tree * tmp){
    if(tmp == NULL){
        return 0;
    } else{
        return count(tmp->leftNode) + count(tmp->rightNode) + 1;
    }
}

