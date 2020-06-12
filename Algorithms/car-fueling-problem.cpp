#include<iostream>
using namespace std;
int main(){
	int N,K,M;
	// M number of compulsory filling stations
	// K km car can cover having tank full
	// N is km car has to cover
	cin>>N;
	cin>>K;
	cin>>M;
	int arr[M];
	for(int i=0;i<M;i++) cin>>arr[i];
	int i=0;
	int distance_covered=0;
	int count=0;
	while(distance_covered < N){
		if(distance_covered+K >= arr[i] ){
			distance_covered=arr[i];
			i++;
		}
		else{
			distance_covered+=K;
		}

		if(distance_covered<N) count++;

	}
	cout<<"Number of Filling Stations:"<<count<<endl;
	cout<<"Time Complexity O(N)"<<endl;
	cout<<"Space O(1)"<<endl;
	return 0;
}
