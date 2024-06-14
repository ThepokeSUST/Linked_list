#include<iostream>

using namespace std;

class node{
    public:

   int data;
   node* next;
   node* pre;

   node(int ele){
    this->data=ele;
    this->next=pre=NULL;

   }

};

class linkedlist{
    public:
   node* head;
   node* tail;

   linkedlist(){
    this->head=tail=NULL;
   }

   void insert_head(int ele){
    node* newnode=new node(ele);

    if(head==NULL){
        head=tail=newnode;
        return;
    }

    newnode->next=head;
    head->pre=newnode;
    head=newnode;

   }

   void insert_tail(int ele){
    node* newnode=new node(ele);

    if(head==NULL){
        head=tail=newnode;
        return;
    }
    node* temp=head;

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->pre=temp;
    tail=newnode;

   }

   void display(){
    node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
   }

    void rdisplay(){
    node* temp=tail;

    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->pre;
    }
    cout<<"NULL";
   }  
};


int main(){

    linkedlist li;

    li.insert_head(90);
    li.insert_tail(1000);
    li.insert_head(3);
    li.insert_head(10);
    li.insert_tail(20);

    li.display();
    cout<<endl;
    li.rdisplay();

}