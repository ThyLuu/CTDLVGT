#include <iostream>
using namespace std;
// hang doi FIFO (First In First Out)
//Nguon: https://gochocit.com/ky-thuat-lap-trinh/hang-doi-queue-la-gi-cach-xay-dung-hang-doi
#define max 50
int Queue[max];
int front, rear; //dau va cuoi ds
void QueueInit(){
	front = 0;
	rear = -1;
}

void enqueue(int V){
	if(rear >= max-1){
		cout<<"Hang doi da day";
	}else{
		rear++;
		Queue[rear] = V;
	}
}

int dequeue(){
	if(front > rear){
		cout<<"Hang doi dang rong";
		return -1;
	}else{
		int res = Queue[front];
		front++;
		return res;
	}
}
