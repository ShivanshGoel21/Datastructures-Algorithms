#include <iostream>
#include<vector>
using namespace std;

int getWater(vector<int>& arr){
    int n=arr.size();
    int res=0;
    for(int i=1;i<n-1;i++){
        int lmax=arr[i];
        int rmax=arr[i];
        // find lmax
        for(int j=0;j<i;j++){
            lmax=max(lmax,arr[j]);
        }
        // find rmax
        for(int j=i+1;j<n;j++){
            rmax=max(rmax,arr[j]);
        }
        // now we have lmax and rmax
        res+=min(lmax,rmax)-arr[i];
    }
    return res;
}


int main() {
	//code
	int test,n,ele;
	cin>>test;
	while(test--){
	    cin>>n;
	    vector<int> arr;
	    for(int i=0;i<n;i++){
	        cin>>ele;
	        arr.push_back(ele);
	    }
	    cout<<getWater(arr)<<endl;
	}
	return 0;
}
