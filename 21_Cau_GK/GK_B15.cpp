#include <iostream>
using namespace std;
//H�y khai b�o cau tr�c du lieu cua danh s�ch li�n ket k�p c�c so nguy�n
struct Node {
	int data;
	struct Node*next;
	struct Node*prev;
};

struct List {
	Node*head;
	Node*tail;
};
