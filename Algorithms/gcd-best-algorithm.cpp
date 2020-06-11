#include<iostream>
using namespace std;
unsigned long long int gc(unsigned long long int a,unsigned long long int b){
	if(b==0) return a;
	gc(b,a%b);
}

int main(){
	unsigned long long int a,b,gcd;
	cin>>a>>b;
	cout<<gc(a,b)<<endl;
	return 0;
}
