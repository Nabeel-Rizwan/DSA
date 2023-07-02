#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

#include <iostream>
using namespace std;

struct node{

int data;
struct node*next;

};

void display(struct node*ptr){

while(ptr != NULL){
    cout<<ptr->data<<" ";
    ptr=ptr->next;
}

}


int main(){

    struct node*first;
    struct node*second;
    struct node*third;
    struct node*fourth;

    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

    first->data=1;
    first->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=fourth;

    fourth->data=4;
    fourth->next=NULL;

    display(first);


    return 0;

}