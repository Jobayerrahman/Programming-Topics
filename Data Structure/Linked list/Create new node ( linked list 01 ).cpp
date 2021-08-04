#include<iostream>
using namespace std;

typedef struct node Node;

struct node{
    int data;
    Node *next;
};
Node *head=NULL;

Node *create_node(int data){
    Node *new_node = new Node();
    Node *current, *prev;
    new_node->data = data;
    new_node->next = NULL;
    if(head == NULL){
        head = new_node;
        current = head;
        return new_node;
    }
    else{
        prev = current;
        current =  new_node;
        prev->next = current;
        return new_node;
    }
}

void print(){
    Node *temp = head;
    cout<<"Printed link list : ";
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    int n,value;
    cout<<"How many node will create : "<<endl;
    cin>>n;
    cout<<"Insert the node data value : "<<endl;
    for(int i=0;i<n;i++){
        cin>>value;
        create_node(value);
    }
    cout<<endl;
    print();
    return 0;
}


