#include <iostream>
using namespace std;
#define max 50
// ngan xep LIFO (Last In First Out)
//Nguon : https://gochocit.com/ky-thuat-lap-trinh/ngan-xep-stack-la-gi-cach-xay-dung-ngan-xep
int Stack[max];
int Top;
void StackInit(){
	Top = -1;
}

void push(int V){ // them 1 phan tu vao stack
	if(Top > max-1){
		cout<<"Stack da day";
	}else{
		Top++;
		Stack[Top] = V;
	}
}

int pop(){ // lay 1 phan tu vao stack
	if (Top == -1){
		cout<<"Stack bi rong";
		return -1;
	}else{
		int res = Stack[Top];
		Top--;
		return res;
	}
}

int empty(){ // rong
	if(Top == -1){
		return 0; // neu stack bi rong
	}
	return 1; // neu stack ko bi rong
}

int size(){ // so luong phan tu 
	return Top+1;
}

int top(){ //lay phan tu dc them vao cuoi trong stack.
	if (Top == -1){
		cout<<"Stack bi rong";
		return -1;
	}else{
		int res = Stack[Top];
		return res;
	}
}

int main(){
	StackInit();
	// them phan tu vao stack
	push(5);
	push(6);
	push(9);
	push(10);
	push(11);
	
	//so phan tu trong stack
	cout<<"So phan tu trong stack : "<<size();
	
	// lay phan tu ra stack 
	cout << pop() << endl;
	cout << pop() << endl;
	
	//so phan tu trong stack sau khi pop
	cout<< "So phan tu trong stack sau khi lay : "<<size();
}
