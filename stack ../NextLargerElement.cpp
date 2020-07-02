#include <iostream>
#include<vector>
#include<stack>
using namespace std;

void nextLarger(vector<long long int> &v){
    long long int n=v.size();
    vector<long long int> arr(n);
    stack<long long int> st;
    for(long long int i=n-1;i>=0;i--){
         while(!st.empty() && st.top()< v[i]){
        st.pop();
        }
        if(st.empty()) arr[i]=-1;
        else{
            arr[i]=st.top();
        }
    st.push(v[i]);
    }
    for(long long int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
	//code
	long long int test,n,ele;
	cin>>test;
	for(long long int i=0;i<test;i++){
	    vector<long long int> v;
	    cin>>n;
	    for(long long int j=0;j<n;j++){
	        cin>>ele;
	        v.push_back(ele);
	    }
	   nextLarger(v);
	   cout<<endl;
	}
	return 0;
}
