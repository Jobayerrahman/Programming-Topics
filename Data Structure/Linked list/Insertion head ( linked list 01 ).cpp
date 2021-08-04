#include<iostream>
using namespace std;

typedef struct node Node;

struct node{
    int data;
    Node *next;
};
Node *head=NULL;

Node *Insert(int data){
    Node *new_node = new Node();
    new_node->data = data;
    new_node->next = head;
    head = new_node;
    return new_node;
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
    for(int i=1;i<=n;i++){
        cout<<i<<": ";
        cin>>value;
        Insert(value);
    }
    cout<<endl;
    print();
    return 0;
}
