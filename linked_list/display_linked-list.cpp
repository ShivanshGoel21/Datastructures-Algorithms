#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *head; 
};

// display all the elements of linked list
void display(struct node* head){
    struct node *temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
}

int main(){
    struct node* st;
    st=new Node;
    //make a linked and call display function from here
    return 0;
}
