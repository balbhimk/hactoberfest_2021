//PROBLEM: Implementing a queue using linked list

//LOGIC:
//Create two global variable pointers f and r, each pointing front and rear of the queue. As customer arrives, we move r to next
//position , and if somebody is removed from the first, we shift pointer f to its next position until f becomes NULL.

//QUESTIONS: 
//Passengers standing in a ticket counter. Number of passsengers can increase indefinitely. We have to follow FIFO rule
//Customers standing in a queue in a shop. Now, we have to supply the goods folloring FIFO rule
// FIFO: First In First Out
//In this case we can use linked list, as this gives huge memory, as well as queue size can increase upto large extent

#include<iostream>
#include<iomanip>
using namespace std;

struct node{
    int val;
    struct node *next;
};

struct node* f= NULL;
struct node* r= NULL;

void enqueue(int value){
    struct node* n = new struct node[1];
    if(n==NULL){cout<<"Queue is full"<<endl;}
    else{
        cout<<"Enqueuing element "<<value<<endl;
        n->val = value;
        n->next = NULL;
        if(f==NULL){
            f=r=n;
        }
        else{
            r->next = n;
            r=n;
        }
    }
}

int dequeue(){
    struct node* ptr =f; 
    if(f==NULL){
        cout<<"Queue is empty"<<endl;
        return -1;
    }
    else{
        int value = ptr->val;
        cout<<"Dequeuing element "<<value<<endl;
        f=f->next;
        free(ptr);
    }
}

void queuetraversal(struct node* ptr){
    cout<<"Traversing the queue:-"<<endl;
    while(ptr!=NULL){
        cout<<"Element: "<<ptr->val<<endl;
        ptr=ptr->next;
    }
}

int main(){
    enqueue(10);   //applying the operations
    enqueue(16);
    enqueue(100);
    enqueue(130);
    queuetraversal(f);
    dequeue();
    dequeue();
    dequeue();
    queuetraversal(f);
    return 0;
}