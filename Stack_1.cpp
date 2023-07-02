#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

struct stack{

int top;
int size;
int*arr;

};

int Empty(struct stack*sp){
    if(sp->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}

int Full(struct stack*sp){
    if(sp->top==sp->size){
        return 1;
    }
    else{
        return 0;
    }
}

void check(struct stack*sp){

if(Full(sp)==1){
    cout<<"Stack is full"<<endl;
}
if(Full(sp)==0){
    cout<<"Stack is not Full"<<endl;
}
if(Empty(sp)==1){
    cout<<"Stack is Empty"<<endl;
}
if(Empty(sp)==0){
    cout<<"Stack is not Empty"<<endl;
}

}



void push(struct stack*sp, int data){
    if(Full(sp)==1){
        cout<<"Stack is Full"<<endl;
    }
    else{
        sp->top++;
        sp->arr[sp->top]=data;
    }
}

void pop(struct stack*sp){
    if(Empty(sp)==1){
        cout<<"Stack is Empty"<<endl;
    }
    else{
        int data=sp->arr[sp->top];
        sp->top--;
        cout<<"Popped Element is "<<data<<endl;
    }
}

void Top(struct stack*sp){
    if(Empty(sp)==1){
        cout<<"Stack is Empty"<<endl;
    }
    else{
        cout<<"Top Element of Stack is "<<sp->arr[sp->top]<<endl;
    }
}

void Bottom(struct stack*sp){
     if(Empty(sp)==1){
        cout<<"Stack is Empty"<<endl;
    }
    else{
        cout<<"Bottom Element of Stack is "<<sp->arr[0]<<endl;
    }
}

int Peek(struct stack*sp, int index){
if(index<0){
    cout<<"Invalid Index"<<endl;
}
else{
    int arrayindex=sp->top-index+1;
    return sp->arr[arrayindex];
}
}

void display(struct stack*sp){
    cout<<endl;
    cout<<"Displaying Elements"<<endl;
    for(int i=0;i<=sp->top+1;i++){
        cout<<Peek(sp,i)<<" ";
    }
}


int main(){

struct stack*sp;
sp=(struct stack*)malloc(sizeof(struct stack));
sp->size=5;
sp->top=-1;
sp->arr=(int*)malloc(sp->size*sizeof(int));

push(sp,5);
push(sp,6);
push(sp,7);
push(sp,8);



Top(sp);
Bottom(sp);

cout<<"Element Peeked is "<<Peek(sp,1)<<endl;

display(sp);

}