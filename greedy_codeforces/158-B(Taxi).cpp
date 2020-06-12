#include<iostream>
using namespace std;
int main(){
	int n,ele;
	cin>>n;
	int hash[5]={0};
	int taxi_req=0;
	for(int i=0;i<n;i++){
		cin>>ele;
		hash[ele]++;
	}
	taxi_req=hash[4];
	taxi_req+=hash[3];
	if(hash[1] >= hash[3]) hash[1]=hash[1]-hash[3];
	else if(hash[1]<hash[3]) hash[1]=0;
	taxi_req+=hash[2]/2;
	hash[2]=hash[2]%2;
	if(hash[2]){
		taxi_req+=1;
		hash[2]=0;
		hash[1]-=2;
	}
	taxi_req+=hash[1]/4;
	hash[1]=hash[1]%4;
	if(hash[1]>0 && hash[1]<=4) taxi_req++;
	cout<<taxi_req<<endl;
	return 0;
}
