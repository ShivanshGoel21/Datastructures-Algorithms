// right shift in array


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int k;
    cin>>k;
    int *new_arr=new int[n];
    k=n-k;
    for(int i=0;i<n;i++) new_arr[i]=arr[i];
    for(int i=0;i<n;i++){
        arr[i]=new_arr[(k+i)%n];
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}
