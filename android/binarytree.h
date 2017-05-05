//
// Created by n5320 on 2017/4/26.
//

#ifndef MYNDKPROJECT_BINARYTREE_H
#define MYNDKPROJECT_BINARYTREE_H

#endif //MYNDKPROJECT_BINARYTREE_H

#include<iostream>
typedef struct tree{
    int data;
    tree* leftNode;
    tree* rightNode;
};

class BinaryTree{
    static int m;
    static int n;
public:
    BinaryTree(){
        root = NULL;
    };
    tree* root;
    void create_BTree(int);
    void preOrderSearchTree(tree*);//先序遍历二叉树
    void middleOrderSearchTree(tree*);//中序遍历二叉树
    void followOrderSearchTree(tree*);//后序遍历二叉树
    int count(tree *);//计算二叉树的个数
};
