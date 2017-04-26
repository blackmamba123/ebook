/*
 * binarytree.cpp
 *
 *  Created on: 2017-4-26
 *      Author: black_mammba
 */
using namespace std;
#include "..\header\binarytree.h"

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
		// cout<<"preOrderSearchTree return root == NULL"<<endl;
		 return;
	 }

     cout<<tmp->data<<" , ";
     preOrderSearchTree(tmp->leftNode);
     preOrderSearchTree(tmp->rightNode);
 }

 void BinaryTree::middleOrderSearchTree(tree* tmp){
	 if(tmp == NULL){
		 return;
	 }

	 middleOrderSearchTree(tmp->leftNode);
     cout<<tmp->data<<" , ";
     middleOrderSearchTree(tmp->rightNode);
 }

 void BinaryTree::followOrderSearchTree(tree* tmp){
	 if(tmp == NULL){
			 return;
		 }

	 followOrderSearchTree(tmp->leftNode);
	 followOrderSearchTree(tmp->rightNode);
	 cout<<tmp->data<<" , ";
 }
