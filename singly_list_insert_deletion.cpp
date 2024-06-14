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
      int size=0;
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

        size++;

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
    size++;
   }

  
  void delete_ele(int ele){
       
       node* temp=head;
      node* par=temp;
       while(temp!=NULL and temp->data!=ele){
        par=temp;
        temp=temp->next;

       }
     if(temp==head){
      head=head->next;
      free(temp);
     }
     else{
       par->next=temp->next;
       free(temp);
     }
     
  }


   void display(){
    if(head==NULL){
      cout<<"Empty";
      return;
    }

   node* temp=head;

    while(temp!=NULL){
    cout<<temp->data<<"->";
    temp=temp->next;
    }
    cout<<"NULL";

   }
   
   int sizeOF(){
    return this->size;
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
     cout<<endl;

     li.delete_ele(100);
     li.delete_ele(9);
     li.display();
     cout<<endl;

     li.delete_ele(25);
     li.display();

     
}