#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int data){
        (*this).data=data;//this refers to the reference to the current object
        next=NULL;
    }
};
node* insert(){
    node *head;
    int data;
    
    cin>>data;
    while(data!=-1){
    node *newnode=new node(data);//constructor is called when obj is created(obj is created dynamically)
    
    node *temp;
    node *tail;
    if(head==NULL){
        head=newnode;
        tail=newnode;
    }else{
        tail->next=newnode;
        tail=newnode;
    }
    cin>>data;
     } 
    return head;
}
void insertion(node *head,int pos,int ele){
    node *str=new node(ele);//constru is used for intial
    node *temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    if(pos==1){
     
        (*str).next=head;
        head=str;
    }else if(pos==count){
        while(temp!=NULL){
            temp=temp->next;
        }
        temp->next=str;
    }else{
        int i=1;
        while(i<pos-1){
            temp=temp->next;
            i++;
        }
        (*str).next=temp->next;
        temp->next=str;
    }
}
void delete(node *head,int pos){
    node *temp;
    if(pos==1){
        
        head=head->next;
    }
}
void print(node *head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}
int main(){
    node *head=insert();
    //print(head);
    int pos;
    int ele;
    cin>>pos>>ele;
    insertion(head,pos,ele);
    int pos1;
    cin>>pos1;
    delete(head,pos1);
}
