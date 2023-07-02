#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

struct node{

int data;
struct node*next;

};

struct node*insertatfirst(struct node*head, int data){      // case 1
    struct node*ptr;
    ptr=(struct node*)malloc(sizeof(struct node));

    ptr->data=data;
    ptr->next=head;

    return ptr;
}

struct node*Insertatindex(struct node*head, int data, int index){
    struct node*ptr;
    ptr=(struct node *)malloc(sizeof(struct node));

    struct node*p=head;

    int i=0;

    while(i != index-1){
        p=p->next;
        i++;
    }

    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;

    return head;

}

struct node*Insertatend(struct node*head, int data){
    struct node*ptr;
    ptr=(struct node*)malloc(sizeof(struct node));

    ptr->data=data;

    struct node*p=head;

    while(p->next != NULL){
        p=p->next;
    }

    p->next=ptr;
    ptr->next=NULL;

    return head;

}

void display(struct node*ptr){

while(ptr != NULL){
    cout<<" "<<ptr->data;
    ptr=ptr->next;
}

}



int main(){

    struct node*head;
    struct node*second;
    struct node*third;
    struct node*fourth;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=fourth;

    fourth->data=4;
    fourth->next=NULL;

    cout<<endl;
    cout<<endl;


    cout<<"Original Linked List"<<endl;

    display(head);

    cout<<endl;
    cout<<endl;


    head=insertatfirst(head,5);

    cout<<"Insert at first"<<endl;

    display(head);

    cout<<endl;
    cout<<endl;

    head=Insertatend(head,6);

    cout<<"Insert at End"<<endl;

    display(head);

    cout<<endl;
    cout<<endl;
    
    head=Insertatindex(head,7,2);

    cout<<"Insert at index"<<endl;

    display(head);

    cout<<endl;
    cout<<endl;

}