#include<iostream>
using namespace std;

#define Q_SIZE 5

typedef struct{
    int data[Q_SIZE+1];
    int head,tail;
}Queue;

void EnQueue(Queue *q,int item){
    if((q->tail+1)%(Q_SIZE+1) == q->head)
        {
        cout<<"Queue is full!"<<endl;
    }
    q->data[q->tail] = item;
    q->tail = (q->tail+1)%(Q_SIZE+1);
}
int DeQueue(Queue *q){
    int item;
    if(q->tail == q->head){
        cout<<"Queue is empty!"<<endl;
    }
    item = q->data[q->head];
    q->head = (q->head+1)%(Q_SIZE+1);
    return item;
}
int main(){
    Queue my_queue;
    int item;

    my_queue.head =0;
    my_queue.tail =0;

    EnQueue(&my_queue,10);
    EnQueue(&my_queue,18);
    EnQueue(&my_queue,15);
    EnQueue(&my_queue,20);
    cout<<"Queue head : "<<my_queue.head<<endl;
    cout<<"Queue tail : "<<my_queue.tail<<endl;

    item = DeQueue(&my_queue);
    cout<<"Item : "<<item<<endl;
    item = DeQueue(&my_queue);
    cout<<"Item : "<<item<<endl;
    item = DeQueue(&my_queue);
    cout<<"Item : "<<item<<endl;

    cout<<"Queue head : "<<my_queue.head<<endl;
    cout<<"Queue tail : "<<my_queue.tail<<endl;
    return 0;
}
