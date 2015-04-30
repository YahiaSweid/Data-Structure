#include "tree.h"

int main(){
	Tree tree;
	
	Tree::Node* root = nullptr;

	std::string item;
	while (true){
		std::cout << "Insert an item: "; std::cin >> item;
		if (item == "exit")
			break;
		else if (!tree.contains(root, item)){
			tree.insert(root, item);
			std::cout << "The tree contains: " << tree.count(root) << std::endl;
			std::cout << "Items: " << std::endl;
			tree.print(root);
		}
		else{
			std::cout << "The item is already existed in the tree" << std::endl;
		}
	}
	return 0;
}