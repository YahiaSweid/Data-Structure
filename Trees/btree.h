#pragma once

#include <iostream>
#include <vector>
#include <string>

class BTree{
public:
	struct Node;
	void insert(Node*& root, std::string item);
	void print(Node* root);
	bool contains(Node* root, std::string item);
	int count(Node* root);

	void dfs(Node* root);
	void dfsStack(Node* root);
};

struct BTree::Node{
public:
	std::string item;
	Node* left;
	Node* right;
	bool seen;
	Node(std::string item){
		this->item = item;
		this->left = nullptr;
		this->right = nullptr;
		this->seen = false;
	}

};
