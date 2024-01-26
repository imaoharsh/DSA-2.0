/*
Linked List always created inside heap.
LL collection of node where each node contains data and pointer to next node.



*/


#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;    //Self-Refrential structure.
};

void create(struct Node *p, int A[], int n){
    int i;
    struct Node *t, *last;
    p->data=A[0];
    p->next=NULL;
    last=p;
    for(i=1;i<n;i++){
        t=new(struct Node);
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void display(struct Node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}




int main(){
struct Node *p;  //Head Node.
p=new(struct Node); 

int arr[10]={1,2,3,4,5,6,7,8,9,10};
create(p,arr,10);


display(p);



    return 0; 
}