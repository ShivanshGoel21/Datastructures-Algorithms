#include<stdio.h>
#include<stdlib.h>
struct stack{
    int top;
    int size;
    int *s;
};

// Pushing a element to stack
void push(struct stack* st,int x){
    if (st->top==st->size-1){
        printf("Stack is full");
    }
    else{
        st->top++;
        st->s[st->top]=x;
    }
}

// check weather a stack is empty
void isEmpty(struct stack* st){
    if (st->top==-1) printf("Stack is empty");
}

// check weather the stack is full
void isFull(struct stack* st){
    if(st->top==st->size-1) printf("Stack is Full");
}

// finding index of element in stack
int peek(struct stack* st,int x){
    int i;
    for(i=0;i<st->size;i++){
        if (st->s[i]==x) return x;
    }
}

//finding top of stack
int findTop(struct stack* st){
    int i;
    for(i=0;i<st->size;i++) return st->s[st->top];
}

//getting last element in a stack
int pop(struct stack* st,int x){
    int x=-1;
    if (st->top==-1) printf("Stack Underflow");
    else{
        x=st->s[st->top];
        st->top--;
    }
    return x;
}


int main(){


    struct stack st;
    printf("Enter size of stack");
    scanf("%d",&st->size);
    int x;
    st=(int*)malloc(sizeof(struct stack));
    st->top=-1;


    printf("Enter a element to push into stack:");
    scanf("%d",&x);
    push(st,x);
    
// call functions from here accordingly.

}


