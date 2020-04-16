#include<stdio.h>
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
    return 0;
}
