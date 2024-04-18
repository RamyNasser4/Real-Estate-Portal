#pragma once
#include <map>
#include "Property.h"
using namespace std;
enum class Color { RED, BLACK };
class Node {
public:
	Property key;
	Color color;
	Node* left;
	Node* right;
	Node* parent;
	Node(Property key);
};
class RBT
{
public:
	RBT();
	void Insert(Property key);
	map<int, Property*> getInRange(int minPrice, int maxPrice);
private:
	Node* root;
	void InsertNode(Node* node);
	void FixInsertion(Node* node);
	void RotateLeft(Node* node);
	void RotateRight(Node* node);
	void getInRange(Node* root, int minPrice, int maxPrice,map<int, Property*> &inRange);
};

