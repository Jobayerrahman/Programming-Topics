#include<iostream>
using namespace std;

typedef struct node Node;

struct node{
    int data;
    Node *next;
    Node *prev;
};
Node *head = NULL;

//Creating new node.
Node *create_node(int data){
    Node *create_node = new Node();
    create_node->data = data;
    create_node->next = NULL;
    create_node->prev = NULL;
    return create_node;
}

//Insert node at head.
void insertAtHead(int data){
    Node *new_node = create_node(data);
    if(head == NULL){
        head = new_node;
        return;
    }
    head->prev = new_node;
    new_node->next = head;
    head = new_node;
}

//Insert node at tail.
void insertAtTail(int data){
    Node *new_node =  create_node(data);
    Node *current_node, *prev_node;
    if(head == NULL){
        head = new_node;
        current_node = head;
        return;
    }
    prev_node = current_node;
    current_node = new_node;
    prev_node->next = current_node;
    current_node->prev = prev_node;
}

//Traverse linked list.
void Traverse(){
    Node *temp = head;
    cout<<"Traverse print : ";
    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp =  temp->next;
    }
    cout<<endl;
}

//Reverse traverse linked list.
void Reverse(){
    Node *temp = head;
    if( temp ==NULL){
        return;
    }
    while(temp->next !=NULL){
        temp = temp->next;
    }
    cout<<"Reverse print : ";
    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp = temp->prev;
    }
    cout<<endl;
}
int main(){
    int n, value;
    string s;
    cout<<"How many node will create : "<<endl;
    cin>>n;
    cout<<"Insert values at head press H or insert values at tail press T : ";
    cin>>s;
    cout<<endl;
    if( s == "H" || s == "h"){
        cout<<"Insert the node data value : "<<endl;
        for(int i=0;i<n;i++){
            cin>>value;
            insertAtHead(value);
        }
        cout<<endl;
    }
    else if(s == "t" || s == "T"){
        cout<<"Insert the node data value : "<<endl;
        for(int i=0;i<n;i++){
            cin>>value;
            insertAtTail(value);
        }
        cout<<endl;
    }
    else{
        cout<<endl;
        cout<<"Invalid request"<<endl;
    }
    Traverse();
    Reverse();
    return 0;
}
