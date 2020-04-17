/* bubble sort is adaptive and stable but it's not adaptive by nature, flag variable is used to make it adaptive*/ 
#include<stdio.h>
void bubble_sort(int* arr,int n){
    int temp;
    for(int i=0;i<n-1;i++){
        int isSorted=1;  //if no element is swaped in one full iteration, this mean that array is already sorted and no further swaping is required.  
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
            temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
            isSorted=0;  // to mark, that array is not sorted 
            }
        }
        if(isSorted==1) break;  // means array is already sorted.
    }
}
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    bubble_sort(arr,n);
    for(i=0;i<n;i++) printf("%d ",arr[i]);
    return 0;
}
