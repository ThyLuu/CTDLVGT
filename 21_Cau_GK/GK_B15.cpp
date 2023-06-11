#include <iostream>
using namespace std;
//Hãy khai báo cau trúc du lieu cua danh sách liên ket kép các so nguyên
struct Node {
	int data;
	struct Node*next;
	struct Node*prev;
};

struct List {
	Node*head;
	Node*tail;
};
