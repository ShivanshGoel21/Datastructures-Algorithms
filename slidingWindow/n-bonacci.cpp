#include<iostream>
using namespace std;

void nbonacci(int n,int m){
	int arr[m+1]={0};
	arr[n-1]=1;
	arr[n]=1;
	int sum=2;
	int start=0;
	for(int i=n+1;i<m;i++){
		sum-=arr[start++];
		arr[i]=sum;
		sum+=arr[i];
	}
	for(int i=0;i<m;i++) cout<<arr[i]<<" ";
}


int main(){
	int n,m;
	cin>>n>>m;
	nbonacci(n,m);
	cout<<endl;
	return 0;
}
