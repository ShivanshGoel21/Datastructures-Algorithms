#include<iostream>
using namespace std;
void merge(int* a,int l,int mid,int h){
    int c[h+1];
    int i=l,j=mid+1,k=l;
    while(i<=mid && j<=h){
        if(a[i]<a[j])
        c[k++]=a[i++];
        else c[k++]=a[j++];
    }
    for(;i<=mid;i++) c[k++]=a[i];
    for(;j<=h;j++) c[k++]=a[j];
    for(i=l;i<=h;i++) a[i]=c[i];
}
void merge_sort(int* arr,int l,int h){
    if(l>=h) return;
    int mid=(l+h)/2;
    merge_sort(arr,l,mid);
    merge_sort(arr,mid+1,h);
    merge(arr,l,mid,h);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    merge_sort(arr,0,n-1);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}
