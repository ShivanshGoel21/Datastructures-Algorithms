// selection sort
#include<iostream>
using namespace std;
void insertion_sort(int* arr,int n){
    for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            // find minimum index 
            // don't perform swap here as swap is expensive operation so just update minimumm index.
            if(arr[min_index]>arr[j]) min_index=j;
        }
        // finally swap with minimum_index element
        swap(arr[min_index],arr[i]);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    insertion_sort(arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}
