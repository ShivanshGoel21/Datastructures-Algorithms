#include<stdio.h>
void del(int* arr,int n){
    int x=arr[1];
    arr[1]=arr[n];
    int parent=1;
    int temp;
    int child=parent*2;
    while(child<n-1){
        if(arr[child+1]<arr[child]) child=child+1;
        if(arr[parent]>arr[child]) {
            temp=arr[parent];
            arr[parent]=arr[child];
            arr[child]=temp;
            parent=child;
            child=parent*2;
        }
        else break;
    }
    arr[n]=x;
}

void insert(int* arr,int n){
    int i=n,temp;
    while(i>1){
        if(arr[i]<arr[i/2]){
            temp=arr[i];
            arr[i]=arr[i/2];
            arr[i/2]=temp;
        }
        i=i/2;
    }
}
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n+1];
    for(i=1;i<=n;i++) scanf("%d",&arr[i]);
    for(i=1;i<=n;i++) insert(arr,i);
    for(i=1;i<=n;i++) printf("%d ",arr[i]);
    del(arr,n);
    printf("\n");
    for(i=1;i<=n;i++) printf("%d ",arr[i]);
    return 0;
}
