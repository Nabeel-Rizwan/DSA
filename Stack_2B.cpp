#include <iostream>
using namespace std;

struct node{
    int data;
    struct node*next;
};

int Full(struct node*top){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int Empty(struct node*top){
    if(top == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

struct node*push(struct node*top, int data){
    if(Full(top)==1){
        cout<<"Stack overflow"<<endl;
    }
    else{
        struct node*ptr=(struct node*)malloc(sizeof(struct node));
        ptr->data=data;
        ptr->next=top;
        top=ptr;
        return top;
    }
}

void display(struct node*ptr){
   cout<<endl;
   cout<<"Displaying Elements: "<<endl;
   cout<<endl;
    while(ptr != NULL){
        cout<<" "<<ptr->data;
        ptr=ptr->next;
    }
}

int pop(struct node**top){
    cout<<endl;
    cout<<endl;
    if(Empty(*top)==1){
        cout<<"Stack underflow"<<endl;
    }
    else{
        struct node*ptr=*top;
        *top=(*top)->next;
        int val=ptr->data;
        return val;
       
    }
}



int main(){

    struct node*top=NULL;

    top=push(top,1);
    top=push(top,2);
    top=push(top,3);
    top=push(top,4);

    display(top);

    int val=pop(&top);
    cout<<"Element popped is "<<val<<endl;

    display(top);
    
     val=pop(&top);
    cout<<"Element popped is "<<val<<endl;

    display(top);

}