#include <iostream>
using namespace std;
                                // Circular Queue formula = (i+1)%size, use this in queue using array program
struct queue{

int f;
int r;
int*arr;
int size;

};

int full(struct queue*q){
    if((q->r+1)%q->size == q->f){
        return 1;
    }
    else{
        return 0;
    }
}

int empty(struct queue*q){
    if(q->f==q->r){
        return 1;
    }
    else{
        return 0;
    }
}

void enqueue(struct queue*q, int data){
    if(full(q)==1){
        cout<<"Queue overflow"<<endl;
    }
    else{
        q->r=(q->r+1)%q->size;
        q->arr[q->r]=data;
    }
}

int dequeue(struct queue*q){
    if(empty(q)==1){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        q->f=(q->f+1)%q->size;
        int val=q->arr[q->f];
        return val;
    }
    return 0;
}

void check(struct queue*q){
    if(full(q)==1){
        cout<<"queue is full"<<endl;
    }
    if(empty(q)==1){
        cout<<"queue is empty"<<endl;
    }
    if(full(q)==0){
        cout<<"queue is not full"<<endl;
    }
    if(empty(q)==0){
        cout<<"queue is not empty"<<endl;
    }
}


int main(){

    struct queue q;
    q.f=q.r=-1;
    q.size=5;
    q.arr=(int*)malloc(q.size*sizeof(int));

    cout<<endl;
    cout<<endl;
    cout<<"Queue created"<<endl;
    cout<<endl;

    enqueue(&q,1);
    enqueue(&q,2);
    enqueue(&q,3);
        enqueue(&q,4);

    enqueue(&q,5);


    cout<<dequeue(&q)<<endl;
    cout<<dequeue(&q)<<endl;
    cout<<dequeue(&q)<<endl;



}