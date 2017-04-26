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
	void preOrderSearchTree(tree*);//�������������
	void middleOrderSearchTree(tree*);//�������������
	void followOrderSearchTree(tree*);//�������������
	void count(tree *);//����������ĸ���
	void findLeaf(tree *);//���������Ҷ�ӵĸ���
};
