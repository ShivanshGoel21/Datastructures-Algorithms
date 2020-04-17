/*insertion sort takes O(n) time.It is adaptive and stable also*/ 

#include<stdio.h>
void insertion_sort(int* arr,int n){
    for(int i=1;i<n;i++){
        int j=i-1;
        int x=arr[i];
        while(j>-1 && arr[j]>x){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=x;
    }
}
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    insertion_sort(arr,n);
    for(i=0;i<n;i++) printf("%d ",arr[i]);
    return 0;
}
