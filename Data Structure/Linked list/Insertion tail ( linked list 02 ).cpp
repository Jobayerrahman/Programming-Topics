#include<iostream>
using namespace std;

typedef struct node Node;

struct node{
    int data;
    Node *next;
};
Node *head=NULL;

void Insert(int data){
    Node *new_node = new Node();
    Node *current_node, *previous_node;
    new_node->data = data;
    new_node->next = NULL;
    if(head == NULL){
            head = new_node;
            current_node = head;
    }
    else{
        previous_node = current_node;
        current_node = new_node;
        previous_node->next = current_node;
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
    //Insert(11);
    //Insert(12);
    //Insert(13);
    //Insert(14);
    //Insert(15);
    int n,value;
    cout<<"How many node will create : "<<endl;
    cin>>n;
    cout<<"Insert the node data value : "<<endl;
    for(int i=0;i<n;i++){
        cin>>value;
        Insert(value);
    }
    cout<<endl;
    print();
    return 0;
}

