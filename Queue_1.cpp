#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

struct queue{

int f;
int r;
int *arr;
int size;

};

int Full(struct queue*q){
    if(q->f == q->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

int Empty(struct queue*q){
    if(q->r == q->f){
        return 1;
    }
    else{
        return 0;
    }
}

void check(struct queue*q){
    if(Full(q)==1){
        cout<<"Queue is full"<<endl;
    } 
    if(Empty(q)==1){
        cout<<"Queue is Empty"<<endl;
    }
    if(Full(q)==0){
        cout<<"Queue is not Full"<<endl;
    }
    if(Empty(q)==0){
        cout<<"Queue is not Empty"<<endl;
    }
}

void enqueue(struct queue*q,int data){
    if(Full(q)==1){
        cout<<"Queue overflow"<<endl;
    }
    else{
        q->r++;
        q->arr[q->r]=data;
        cout<<endl;
        cout<<endl;
        cout<<"Enqueued element "<<data;
    }
}

void top(struct queue*q){
    if(Empty(q)==1){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        cout<<endl;
        cout<<"Top Element of Queue "<<q->arr[q->f+1]<<endl;
    }
}

void Bottom(struct queue*q){
    if(Empty(q)==1){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        cout<<endl;
        cout<<"Bottom Element is "<<q->arr[q->r]<<endl;
    }
}

int dequeue(struct queue*q){
    if(Empty(q)==1){
        cout<<"Stack is Empty"<<endl;
    }
    else{
        q->f++;
        return q->arr[q->f];
       
    }
}




int main(){

struct queue q;
q.size=5;
q.arr=(int*)malloc(q.size*sizeof(int));
q.f=q.r=-1;

enqueue(&q,1);
enqueue(&q,2);
enqueue(&q,3);
enqueue(&q,4);
enqueue(&q,5);




cout<<endl;
cout<<endl;

dequeue(&q);
dequeue(&q);

top(&q);
Bottom(&q);



}