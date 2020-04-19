#include<iostream>
using namespace std;
int arr[150];
void maximum(int* arr,int n){
    int hash[61]={0};
    int k=0;
    for(int i=0;i<n;i++) hash[arr[i]]++;
    for(int i=0;i<61;i++){
        int max=0;
        int max_index=0;
        for(int j=0;j<61;j++){
            if(hash[j]>max){
                max=hash[j];
                max_index=j;
            }
        }
        while(hash[max_index]>0){
            arr[k++]=max_index;
            hash[max_index]--;
        }
    }
    for(int i=0;i<k;i++) cout<<arr[i]<<" ";
}
int main(){
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        for(int j=0;j<n;j++) cin>>arr[j];
        maximum(arr,n);
        cout<<endl;
    }
}
