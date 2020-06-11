#include<iostream>
using namespace std;
int main(){
	unsigned long long int a,b,gcd;
	cin>>a>>b;
	for(int i=1;i<=min(a,b);i++){
		if(a%i==0 && b%i==0) gcd=i;
	}
	cout<<"GCD:"<<gcd<<endl;
	return 0;
}
