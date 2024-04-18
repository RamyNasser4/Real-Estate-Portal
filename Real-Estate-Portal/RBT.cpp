#include "RBT.h"
Node::Node(Property key) {
	this->key = key;
	color = Color::RED;
	left = nullptr;
	right = nullptr;
	parent = nullptr;
}
RBT::RBT() {
	root = nullptr;
}
void RBT::Insert(Property key) {
	Node* node = new Node(key);
	InsertNode(node);
}
void RBT::InsertNode(Node* node) {
	if (root == nullptr) {
		root = node;
		root->color = Color::BLACK;
		return;
	}

	Node* parent = nullptr;
	Node* current = root;

	while (current != nullptr) {
		parent = current;
		if (node->key.GetPrice() < current->key.GetPrice()) {
			current = current->left;
		}
		else {
			current = current->right;
		}
	}

	node->parent = parent;

	if (node->key.GetPrice() < parent->key.GetPrice()) {
		parent->left = node;
	}
	else {
		parent->right = node;
	}

	FixInsertion(node);
}
void RBT::FixInsertion(Node* node) {
	while (node != root && node->parent->color == Color::RED) {
		Node* parent = node->parent;
		Node* grandparent = parent->parent;

		if (parent == grandparent->left) {
			Node* uncle = grandparent->right;

			if (uncle != nullptr && uncle->color == Color::RED) {
				parent->color = Color::BLACK;
				uncle->color = Color::BLACK;
				grandparent->color = Color::RED;
				node = grandparent;
			}
			else {
				if (node == parent->right) {
					node = parent;
					RotateLeft(node);
				}

				parent->color = Color::BLACK;
				grandparent->color = Color::RED;
				RotateRight(grandparent);
			}
		}
		else {
			Node* uncle = grandparent->left;

			if (uncle != nullptr && uncle->color == Color::RED) {
				parent->color = Color::BLACK;
				uncle->color = Color::BLACK;
				grandparent->color = Color::RED;
				node = grandparent;
			}
			else {
				if (node == parent->left) {
					node = parent;
					RotateRight(node);
				}

				parent->color = Color::BLACK;
				grandparent->color = Color::RED;
				RotateLeft(grandparent);
			}
		}
	}
	root->color = Color::BLACK;
}
void RBT::RotateLeft(Node* node) {
	Node* child = node->right;
	node->right = child->left;

	if (child->left != nullptr) {
		child->left->parent = node;
	}

	child->parent = node->parent;

	if (node->parent == nullptr) {
		root = child;
	}
	else if (node == node->parent->left) {
		node->parent->left = child;
	}
	else {
		node->parent->right = child;
	}

	child->left = node;
	node->parent = child;
}
void RBT::RotateRight(Node* node) {
	Node* child = node->left;
	node->left = child->right;

	if (child->right != nullptr) {
		child->right->parent = node;
	}

	child->parent = node->parent;

	if (node->parent == nullptr) {
		root = child;
	}
	else if (node == node->parent->right) {
		node->parent->right = child;
	}
	else {
		node->parent->left = child;
	}

	child->right = node;
	node->parent = child;
}
map<int, Property*> RBT::getInRange(int minPrice, int maxPrice) {
	map<int, Property*> propertiesInRange;
	getInRange(root, minPrice, maxPrice, propertiesInRange);
	return propertiesInRange;
}
void RBT::getInRange(Node* root, int minPrice, int maxPrice,map<int, Property*> &propertiesInRange) {
	if (root == nullptr) {
		return;
	}

	// Traverse left subtree if the current node's key is greater than minPrice
	if (root->key.GetPrice() > minPrice) {
		getInRange(root->left, minPrice, maxPrice,);
	}

	// Display the node if its key falls within the price range
	if (root->key.GetPrice() >= minPrice && root->key.GetPrice() <= maxPrice) {
		propertiesInRange[root->key.GetPrice()] = root->key;
	}

	// Traverse right subtree if the current node's key is less than maxPrice
	if (root->key.GetPrice() < maxPrice) {
		getInRange(root->right, minPrice, maxPrice);
	}
}