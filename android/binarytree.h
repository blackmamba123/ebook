#ifndef BINARY_TREE_H
#define BINARY_TREE_H
#endif

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
	void count(tree *);//计算二叉树的个数
	void findLeaf(tree *);//计算二叉树叶子的个数
};
