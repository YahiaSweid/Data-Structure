#include "tree.h"

void Tree::insert(Node*& root, std::string item){
	if (root == nullptr)
		root = new Node(item);
	else if (root->item > item)
		insert(root->left, item);
	else
		insert(root->right, item);
}

bool Tree::contains(Node* root, std::string item){
	if (root == nullptr)
		return false;
	else if (root->item == item)
		return true;
	else if (root->item > item)
		return contains(root->left, item);
	else
		return contains(root->right, item);
}

void Tree::print(Node* root){
	if (root != nullptr){
		print(root->left);
		std::cout << "     " << root->item << std::endl;
		print(root->right);
	}
}

int Tree::count(Node* root){
	if (root != nullptr)
		return count(root->left) + count(root->right) + 1;
	return 0;
}