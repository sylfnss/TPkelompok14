#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct tree_node{
	tree_node* left;
	tree_node* right;
	int data;

};

tree_node* root;

bool isEm(){
	return root==NULL;
}

void insert(int d){
	tree_node* t = new tree_node;
	tree_node* parent;
	t->data = d;
	t->left = NULL;
	t->right = NULL;
	parent = NULL;
	if(isEm())root = t;
	else{
		tree_node* curr;
		curr = root;
	
	while(curr!=NULL){
		parent = curr;
	if(t->data > curr->data) 
		curr = curr->right;
	else curr = curr->left;
	}
	
	if(t->data < parent->data)
		parent->left = t;
	else
		parent->right = t;
	}
}

void inorder(tree_node* p){
	if(p!=NULL){
		if(p->left)
			inorder(p->left);
			cout<<" "<<p->data<<" ";
			if(p->right)
			inorder(p->right);
	}
	else
	
return;
}


void print_inorder(){
	inorder(root);
}

int count(tree_node* p){
	if(p==NULL)return 0;
return count(p->left) + count(p->right) + 1;
}

int height(tree_node* p){
	if(p==NULL)return 0;
		int u = height(p->left),v = height(p->right);
	if(u > v)
		return u+1;
	else
return v+1;
}

void cari_terbesar(tree_node* p){
	if(p==NULL)
		return;
	else if(p->right==NULL){
		cout<<" "<<p->data<<" ";
		return;
	}
	else{
		cari_terbesar(p->right);
	return;
	}
}
