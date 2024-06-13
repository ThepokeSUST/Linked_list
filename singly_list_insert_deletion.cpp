#include<iostream>

using namespace std;

class node{

    public: 
     int data;
     node* next;

     node(int ele){
        this->data=ele;
        this->next=NULL;

     }
};

class linkedlist{
      
      node* head;

    public:

      linkedlist(){
        this->head=NULL;
      }

   
   void insert_head(int ele){
        node* newnode=new node(ele);

        if(head==NULL){
            head=newnode;
            return;
        }

        newnode->next=head;
        head=newnode;

   }

   void insert_tail(int ele){

    node* newnode=new node(ele);

    if(head==NULL){
        head=newnode;
        return;
    }
    node* temp=head;

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;

   }

   void display(){
   node* temp=head;

    while(temp!=NULL){
    cout<<temp->data<<"->";
    temp=temp->next;
    }
    cout<<"NULL";

   }


};


int main(){
     linkedlist li;

     li.insert_head(90);
     li.insert_head(100);
     li.insert_head(9);

     li.insert_tail(45);
     li.insert_tail(25);

     li.display();
}