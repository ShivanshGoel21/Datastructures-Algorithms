#include<iostream>
using namespace std;
string binary(int* arr,int ele,int n){
    int low=0,high=n;
    while(low<high){
        if(arr[(low+high)/2]==ele) return "Element Found";
        else if(arr[(low+high)/2]>ele) high=(low+high)/2 -1;
        else low=(low+high)/2 +1; 
    }
    return "Element not found";
}
int main(){
    int n,ele;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cin>>ele;
    cout<<binary(arr,ele,n);
}
