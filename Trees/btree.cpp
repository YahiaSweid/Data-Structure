#include "btree.h"

void BTree::insert(Node*& root, std::string item){
	if (root == nullptr)
		root = new Node(item);
	else if (root->item > item)
		insert(root->left, item);
	else
		insert(root->right, item);
}

bool BTree::contains(Node* root, std::string item){
	if (root == nullptr)
		return false;
	else if (root->item == item)
		return true;
	else if (root->item > item)
		return contains(root->left, item);
	else
		return contains(root->right, item);
}

void BTree::print(Node* root){
	if (root != nullptr){
		print(root->left);
		std::cout << "     " << root->item << std::endl;
		print(root->right);
	}
}

int BTree::count(Node* root){
	if (root != nullptr)
		return count(root->left) + count(root->right) + 1;
	return 0;
}


void BTree::dfs(Node* root){
	if (root != nullptr){
		std::cout << root->item << std::endl;
		if (root->left != nullptr)
			dfs(root->left);
		if (root->right != nullptr)
			dfs(root->right);
	}
}

void BTree::dfsStack(Node* root){
	if (root != nullptr){
		std::vector<Node*> s;
		s.push_back(root);
		while (!s.empty()){
			root = s.back(); s.pop_back();
			std::cout << root->item << std::endl;
			if (!root->seen){
				root->seen = true;
				if (root->right != nullptr)
					s.push_back(root->right);
				if (root->left != nullptr)
					s.push_back(root->left);
			}
		}
	}
}

