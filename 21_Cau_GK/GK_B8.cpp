#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

struct Stack{
    Node *head;
};

void CreateStack(Stack &s){
    s.head = NULL;
}

Node *CreateNode(int init){
    Node *p = new Node;
    p->data = init;
    p->next = NULL;
    return p;
}

int IsEmpty(Stack s){
    if (s.head == NULL){
    	return 1;
	}
    return 0;
}

void Push(Stack &s, Node *p){
    if (IsEmpty(s)){
    	s.head = p;
	}    
    else{
        p->next = s.head;
        s.head = p;
    }
}

int Pop(Stack &s){
    if (IsEmpty(s)){
    	return 0;
	}
    Node *p = s.head;
    int data = p->data;
    s.head = p->next;
    delete p;
    return data;
}

int Top(Stack s){
    if (IsEmpty(s)){
    	return 0;
	}
    return s.head->data;
}

void PrintStack(Stack s){
    Node *p = s.head;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

int main(){
    Stack s;
    CreateStack(s);
    
    Node *p;
    p = CreateNode(41);
    Push(s, p);
   	p = CreateNode(23);
    Push(s, p);
    p = CreateNode(4);
    Push(s, p);
    p = CreateNode(14);
    Push(s, p);
    p = CreateNode(56);
    Push(s, p);
    p = CreateNode(1);
    Push(s, p);
    
    cout << "Xuat gia tri top: ";
    cout << Top(s) << endl;
    Pop(s);
    
    cout << "Cac phan tu con lai: ";
    PrintStack(s);
}
