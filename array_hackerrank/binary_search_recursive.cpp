#include<iostream>
using namespace std;
//recursive binary search
string binary_search(int* arr,int a,int l,int h){
    if(l>h) return "Element Not Found";
    else if(arr[(l+h)/2]==a) return "Element Found";
    else if(arr[(l+h)/2]<a) return binary_search(arr,a,(l+h)/2+1,h);
    else return binary_search(arr,a,l,(l+h)/2 -1);
}
int main(){
    int n,ele;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cin>>ele;
    cout<<binary_search(arr,ele,0,n);
}
