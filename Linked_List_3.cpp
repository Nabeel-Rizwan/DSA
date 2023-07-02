#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

struct node{

int data;
struct node*next;

};

void display(struct node*ptr){

cout<<endl;
while(ptr !=NULL){
    cout<<" "<<ptr->data;
    ptr=ptr->next;
}
cout<<endl;

}

struct node*Insert1(struct node*head,int data){

struct node*ptr;
ptr=(struct node*)malloc(sizeof(struct node));

ptr->data=data;
ptr->next=head;

return ptr;

}

struct node*Insert2(struct node*head, int data){

struct node*ptr;
ptr=(struct node*)malloc(sizeof(struct node));

struct node*p=head;

while(p->next != NULL){
p=p->next;
}
ptr->data=data;
p->next=ptr;
ptr->next=NULL;

return head;
}

struct node*Insert3(struct node*head, int data, int index){

struct node*ptr;
ptr=(struct node*)malloc(sizeof(struct node));
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

struct node*Delete1(struct node*head){

struct node*ptr=head;
head=head->next;
free(ptr);

return head;

}

struct node*Delete2(struct node*head){

struct node*p=head;
struct node*q=head->next;

while(q->next != NULL){
p=p->next;
q=q->next;
}
p->next=NULL;
free(q);

return head;

}

struct node*Delete3(struct node*head, int index){

struct node*p=head;
struct node*q=head->next;

int i=0;

while(i != index-1){
    p=p->next;
    q=q->next;
    i++;
}
p->next=q->next;
free(q);

return head;

}




int main(){


struct node*head;
struct node*sec;
struct node*third;
struct node*fourth;

head=(struct node*)malloc(sizeof(struct node));
sec=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));
fourth=(struct node*)malloc(sizeof(struct node));


head->data=1;
head->next=sec;

sec->data=2;
sec->next=third;

third->data=3;
third->next=fourth;

fourth->data=4;
fourth->next=NULL;

display(head);

head=Insert1(head,5);

display(head);

head=Insert2(head,6);

display(head);

head=Insert3(head,7,2);

display(head);

head=Delete1(head);

display(head);

head=Delete2(head);

display(head);

head=Delete3(head,1);

display(head);

}