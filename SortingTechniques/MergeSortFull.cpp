#include<iostream>
using namespace std;


void merge(int* arr,int low,int mid,int high){

	int k=low; // for index of array
	int n1=mid-low+1;
	int n2=high-mid;

	int *left=new int[n1];
	int *right=new int[n2];

	for(int i=0;i<n1;i++) left[i]=arr[k++];

	for(int i=0;i<n2;i++) right[i]=arr[k++];

	int i=0,j=0;
	k=low;

	while(i<n1 && j<n2){
		if(left[i]<right[j]) arr[k++]=left[i++];
		else arr[k++]=right[j++];
	}

	while(i<n1) arr[k++]=left[i++];

	while(j<n2) arr[k++]=right[j++];

}

void mergeSort(int* arr,int low,int high){
	if(low>=high) return;

	int mid=(low+high)/2;

	mergeSort(arr,low,mid);
	mergeSort(arr,mid+1,high);

	merge(arr,low,mid,high);
}

int main(){
	int n;
	cin>>n;
	int* arr=new int[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	mergeSort(arr,0,n-1);
	for(int i=0;i<n;i++) cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}
