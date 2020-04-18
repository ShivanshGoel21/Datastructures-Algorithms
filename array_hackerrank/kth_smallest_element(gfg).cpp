#include <iostream>
using namespace std;
int kth_smallest(int* arr,int k,int n){
    int hash[1000001]={0};
    int count=0;
    for(int i=0;i<n;i++){
        hash[arr[i]]++; // assuming all elements are distinct
    }
    // return 0;
    for(int i=0;i<1000001;i++){
        if(hash[i]>0){
            while(hash[i]!=0){
                count++;
                if(count==k) return i;
                hash[i]--;
            }
        }
    }
}
int main() {
	int t;
	cin>>t;
    int answer[t];
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++) cin>>arr[j];
        cin>>k;
        answer[i]=kth_smallest(arr,k,n);
    } 
    for(int i=0;i<t;i++){
        cout<<answer[i]<<endl;
    }
	return 0;
}
