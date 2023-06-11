#include <iostream>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};

struct Queue{
    Node *head;
    Node *tail;
};

void CreateQueue(Queue &q){
    q.head = NULL;
    q.tail = NULL;
}

Node* CreateNode(int init){
    Node *node = new Node;
    node->data = init;
    node->next = NULL;
    return node;
}

int IsEmpty(Queue q){
    if (q.head == NULL){
    	return 1;
	}
    return 0;
}

//void DestroyQueue(Queue &q){
//    Node *p = q.head;
//    while (q.head != NULL){
//        q.head = p->next;
//        delete p;
//        p = q.head;
//    }
//    q.tail = NULL;
//}

void EnQueue(Queue &q, Node *p){
    if (IsEmpty(q)){
        q.head = p;
        q.tail = p;
    }
    else{
        q.tail->next = p;
        q.tail = p;
    }
}

int DeQueue(Queue &q){
    if(IsEmpty(q)){
    	return 0;
	}
    Node *p = q.head;
    int data = p->data;
    q.head = p->next;
    delete p;
    if(q.head == NULL){
		q.tail = NULL;
	}
    return data;
}

int Front(Queue q){
    if (IsEmpty(q)){
    	return 0;
	}
    return q.head->data;
}

int Back(Queue q){
    if (IsEmpty(q)){
    	return 0;
	}
    return q.tail->data;
}

void PrintQueue(Queue q){
    Node *p = q.head;
    while (p != NULL){
        cout << p->data << " ";
        p = p->next;
    }
}

int main(){
    Queue q;
    CreateQueue(q);

    Node *p;
    p = CreateNode(41);
    EnQueue(q, p);
    p = CreateNode(23);
    EnQueue(q, p);
    p = CreateNode(4);
    EnQueue(q, p);
    p = CreateNode(14);
    EnQueue(q, p);
    p = CreateNode(56);
    EnQueue(q, p);
    p = CreateNode(1);
    EnQueue(q, p);

	cout << "Phan tu dau: ";
    cout << Front(q) << endl;

	cout << "Loai bo phan tu: ";
    cout << DeQueue(q) << " ";
    cout << DeQueue(q) << endl;
    
    cout << "Them phan tu: ";
	p = CreateNode(55);
    EnQueue(q, p);
    cout << Back(q) << endl;
    
    cout << "Cac phan tu con lai: ";
    PrintQueue(q);
}
