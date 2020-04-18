// O(n) time complexity
#include<iostream>
using namespace std;
//assuming array contains maximum element as 99
void count_sort(int* arr,int n){
    int hash[100]={0};
    int k=0;
    for(int i=0;i<n;i++) hash[arr[i]]++;
    for(int i=0;i<100;i++){
        if(hash[i]>0){
            while(hash[i]!=0){
                arr[k++]=i;
                hash[i]--;
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    count_sort(arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" "; 
    return 0;
}
