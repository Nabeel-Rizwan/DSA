#include <iostream>
using namespace std;

struct node{
    int data;
    struct node*next;
};

struct node*f=NULL;
struct node*r=NULL;

void enqueue(int data){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr == NULL){
        cout<<"Queue Overflow"<<endl;
    }
    else{
        ptr->data=data;
        ptr->next=NULL;
        if(f==NULL){
            f=r=ptr;
        }
        r->next=ptr;
        r=ptr;
    }
}

void dequeue(){
    struct node*ptr=f;
    if(f==NULL){
        cout<<"Queue is empty"<<endl;
    }
    else{
        int val;
        f=f->next;
        val=ptr->data;
        free(ptr);
        cout<<"Dequeued Element is "<<val<<endl;
    }
}

void display(struct node*ptr){
    cout<<endl;
    cout<<endl;
    cout<<"Displaying Queue Elements"<<endl;
    while(ptr != NULL){
        cout<<" "<<ptr->data;
        ptr=ptr->next;
    }
    cout<<endl;
}



int main(){

    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);

    display(f);

    dequeue();
    dequeue();

     enqueue(5);
     enqueue(46);

      display(f);

       dequeue();
    dequeue();


}