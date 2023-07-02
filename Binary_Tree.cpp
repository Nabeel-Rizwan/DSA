#include <iostream>
using namespace std;


struct node{

int data;
struct node*right;
struct node*left;

};

struct node*createnode(int data){

struct node*ptr=(struct node*)malloc(sizeof(struct node));

ptr->data=data;
ptr->left=NULL;
ptr->right=NULL;

return ptr;

}

void preorder(struct node*root){

if(root != NULL){

    cout<<" "<<root->data;
    preorder(root->left);
    preorder(root->right); 

}

}

void postorder(struct node*root){

if(root != NULL){

    postorder(root->left);
    postorder(root->right);
    cout<<" "<<root->data;

}

}

void Inorder(struct node*root){

if(root != NULL){

Inorder(root->left);
cout<<" "<<root->data;
Inorder(root->right);

}

}


int main(){

struct node*p1=createnode(1);
struct node*p2=createnode(2);
struct node*p3=createnode(3);
struct node*p4=createnode(4);
struct node*p5=createnode(5);
struct node*p6=createnode(6);
struct node*p7=createnode(7);

p1->left=p2;
p1->right=p3;

p2->left=p4;
p2->right=p5;

p3->left=p6;
p3->right=p7;

preorder(p1);

cout<<endl;
cout<<endl;

postorder(p1);

cout<<endl;
cout<<endl;

Inorder(p1);

}