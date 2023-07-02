#include <iostream>
using namespace std;

struct node{
    int data;
    struct node*next;
};

struct node*top=NULL;

int Empty(struct node*top){
if(top == NULL){
    return 1;
}
else{
    return 0;
}
}

int Full(struct node*top){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr == NULL){        // if malloc returns NULL, it means memory in heap is exhausted
        return 1;
    }
    else{
        return 0;
    }
}

struct node*push(struct node*top,int data){
if(Full(top)==1){
    cout<<"Stack Memory in Heap is Full"<<endl;
}
else{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=top;
    top=ptr;
    return top;
}
}

void check(struct node*top){
if(Full(top)==1){
    cout<<"Stack is Full in heap memory"<<endl;
}
if(Full(top)==0){
    cout<<"Stack is not full"<<endl;
}
if(Empty(top)==1){
    cout<<"Stack is empty"<<endl;
}
if(Empty(top)==0){
    cout<<"Stack is not Empty"<<endl;
}
}

void display(struct node*ptr){
   
    cout<<endl;
    cout<<endl;
    cout<<"Displaying Elements in Stack"<<endl;
    while(ptr != NULL){
        cout<<" "<<ptr->data;
        ptr=ptr->next;
    }
    cout<<endl;
    cout<<endl;
}

int Pop(struct node* tp){
    if(Empty(tp)){
        printf("Stack Underflow\n");
    }
    else{
        struct node* n = tp;
        top = (tp)->next;
        int x = n->data;
        free(n);
        return x; 
    }
}



int main(){



check(top);

top=push(top,1);
top=push(top,2);
top=push(top,3);
top=push(top,4);


check(top);

display(top);

int val = Pop(top);
cout<<"Element popped is "<<val<<endl;

display(top);

check(top);


}