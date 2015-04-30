#pragma once

#include <iostream>
#include <string>

class Tree{
public:
	struct Node;
	void insert(Node*& root, std::string item);
	void print(Node* root);
	bool contains(Node* root, std::string item);
	int count(Node* root);
};

struct Tree::Node{
public:
	std::string item;
	Node* left;
	Node* right;
	Node(std::string item){
		this->item = item;
		this->left = nullptr;
		this->right = nullptr;
	}

};
