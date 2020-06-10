#include<iostream>
using namespace std;
int main(){
	unsigned long long int n;
	cin>>n;
	unsigned long long int arr[n+1];
	unsigned long long int sum=0;
	arr[0]=0;
	arr[1]=1;
	sum=1;
	for(int i=2;i<=n;i++){
		arr[i]=arr[i-1]+arr[i-2];
		sum=sum+arr[i];
	}
	cout<<"Fibonacci Number is:"<<arr[n]<<endl;
	cout<<"Sum of Fibonacci Number upto "<<n<<" is "<<sum<<endl;
	return 0;
}
