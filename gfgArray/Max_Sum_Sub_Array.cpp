#include <iostream>
#include<vector>
using namespace std;

int function(vector<int>& v,int k){
    int sum=0,max_sum=0,j=k;
    for(int i=0;i<k;i++) sum+=v[i];
    max_sum=sum;
    int size=v.size()-1;
    int i=0;
    while(j<v.size()){
        sum=sum-v[i++]+v[j++];
        if(sum>max_sum) max_sum=sum;
    }
    cout<<max_sum<<endl;
    
}

int main() {
	int test,size,k,ele;
	vector<int> v;
	cin>>test;
	for(int i=0;i<test;i++){
	    cin>>size>>k;
	    v.clear();
	    for(int j=0;j<size;j++){
	        cin>>ele;
	        v.push_back(ele);
	    }
	    function(v,k);
	}
	return 0;
}
