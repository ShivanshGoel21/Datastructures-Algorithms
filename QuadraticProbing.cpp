#include<iostream>
using namespace std;


int* QuadProbInsert(int* arr,int n){
	int* hash=new int[501];
	// -2 indicates no element is present 
	// -1 indicates element is deleted
	for(int i=0;i<=500;i++) hash[i]=-2;


	for(int i=0;i<n;i++){
	// if hash index at (arr[i]%11)+lin_prob*lin_prob found empty then insert at that position
	// lin_prob is variable for linear probing -> starts from 0 so it covers base case even 

			int lin_prob=0;
			bool isInserted=false;
			while( (arr[i]%11)+(lin_prob*lin_prob) <=500){
				if(hash[(arr[i]%11)+(lin_prob*lin_prob)]<0){
					hash[(arr[i]%11)+(lin_prob*lin_prob)]=arr[i];
					isInserted=true;
					break;
				}
				lin_prob++;
			}
			if(!isInserted) cout<<"Hash Table Filled !!"<<endl;
	}
	return hash;
}



void removeValue(int* hash,int val){
	// val is value to be removed from the table
	// first check at val%11 ? then (val%11)+lin_prob*lin_prob up till (val%11)+i <=22
	// mark hash index with -1 (denotes deleted value)

	int linear_prob=0;
	bool isFound=false;
	while((val%11)+(linear_prob*linear_prob)<=500){
		if(hash[(val%11)+(linear_prob*linear_prob)]==val){
			hash[(val%11)+(linear_prob*linear_prob)]=-1;
			isFound=true;
			cout<<"Found at index "<<(val%11)+(linear_prob*linear_prob)<<"in hash table"<<endl;
			return;
		}
		linear_prob++;
	}   
	if(!isFound) cout<<"Given value not found in Hash Table!!"<<endl;
}


void searchValue(int* hash,int val){
	// if -1 appears then element is deleted keep on searching
	// if -2 appears menans none of the element resulting same hash function value is inserted -> stop searching
	int linear_prob=0;
	bool isFound=false;
	while((val%11)+(linear_prob*linear_prob)<=500){
		if(hash[(val%11)+(linear_prob*linear_prob)]==val && hash[(val%11)+(linear_prob*linear_prob)]!=-2){
			cout<<"Element found in hash table at index "<<(val%11)+linear_prob<<endl;
			isFound=true;
			return;
		}
		linear_prob++;
	}
	if(!isFound) cout<<"Element not found in hash table"<<endl;
}



int main(){
	// hashFunction H(k)=k%11
	int n,ele;
	cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	int* hash=QuadProbInsert(arr,n);
	cout<<"Enter value to be removed from the hash table"<<endl;
	cin>>ele;
	removeValue(hash,ele);
	cout<<"Enter a value to search in hashTable"<<endl;
	cin>>ele;
	searchValue(hash,ele);
	return 0;
}
