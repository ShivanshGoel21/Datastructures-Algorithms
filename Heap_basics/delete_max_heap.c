// form a heap and delete element entered by user from the heap
#include<stdio.h>
void insert(int* arr,int n){
    int i=n,temp=arr[n];
    while(i>1 && temp>arr[i/2]){
        arr[i]=arr[i/2];
        i=i/2;
    }
    arr[i]=temp;
}

void del(int* arr,int n){
    int x=arr[1];
    int parent=1;
    int child=2*parent;
    int temp;
    arr[1]=arr[n];
    while(child<n-1){
        if(arr[child+1]>arr[child]) child=child+1;
        if(arr[parent]<arr[child]){
            temp=arr[parent];
            arr[parent]=arr[child];
            arr[child]=temp;
            parent=child;
            child=2*parent;
        }
        else break;
    }
    arr[n]=x;
}
int main(){
    int n,i,ele;
    scanf("%d",&n);
    int arr[n];
    for(i=1;i<=n;i++) scanf("%d",&arr[i]);
    for(i=2;i<=n;i++) insert(arr,i);
    for(i=1;i<=n;i++) printf("%d ",arr[i]);
    printf("\n");
    del(arr,n);
    for(i=1;i<=n;i++) printf("%d ",arr[i]);
    return 0;
}
