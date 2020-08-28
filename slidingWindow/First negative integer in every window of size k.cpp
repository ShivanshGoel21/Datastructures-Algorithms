#include <iostream>
#include<vector>
#include<queue>
using namespace std;

void firstNegative(vector<int> arr,int k){
    int n=arr.size();
    queue<int> q;
    bool found=false;
    int negative_index;
    for(int i=0;i<k;i++){
        if(arr[i]<0 && !found) {
            cout<<arr[i]<<" ";
            negative_index=i;
            found=true;
        }
    }
    if(!found) cout<<0<<" ";
    
    for(int i=k;i<n;i++){
        found=false;
        if(negative_index>=(i-k+1) && negative_index<=(i)){
            cout<<arr[negative_index]<<" ";
            found=true;
        } 
        else{
            for(int j=(i-k+1);j<=i;j++){
                    if(arr[j]<0){ 
                        cout<<arr[j]<<" ";
                        negative_index=j;
                        found=true;
                        break;
                    }
            }
        }
        if(!found) cout<<0<<" ";
    }
}

int main() {
	//code
	int test,n,ele,k;
	cin>>test;
	while(test--){
	    cin>>n;
	    vector<int> arr;
	    for(int i=0;i<n;i++){
	        cin>>ele;
	        arr.push_back(ele);
	    }
	    cin>>k;
	    firstNegative(arr,k);
	    cout<<endl;
	}
	return 0;
}
