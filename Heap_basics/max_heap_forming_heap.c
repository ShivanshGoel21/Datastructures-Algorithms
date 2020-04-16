#include<stdio.h>
#include<stdlib.h>

void insert(int* arr,int n){
    int i=n;
    int temp;
    while(i>1){
        // swap element to be inserted by it's parent if it is greater than it's parent element and move to parent
        // else move to parent
        if(arr[i]>arr[i/2]){
            temp=arr[i/2];
            arr[i/2]=arr[i];
            arr[i]=temp;
        }
        i=i/2;
    }
}

int main(){
    int i,n,ele;
    // no. of elements to be inserted in a heap.
    scanf("%d",&n);
    int arr[n+1];
    for(i=1;i<=n;i++) scanf("%d",&arr[i]);
    for(i=2;i<=n;i++){
        printf("Inserting\n");
        insert(arr,i);
    }
    for(int i=1;i<=n;i++) printf("%d ",arr[i]);
    return 0;
}
