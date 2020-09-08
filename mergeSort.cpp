#include <stdio.h>
#include <stdlib.h>
int a[100],ar[100],n;

void merge(int* arr,int low,int high){
	int mid=(low+high)/2;
	int left[mid];
	int right[mid+1];
	int k=low;
	for(int i=0;i<mid;i++) left[i]=arr[k++];
	for(int i=0;i<mid+1;i++) right[i]=arr[k++];
	int i=0,j=0;
	k=low;
	while(i<mid && j<mid+1){
		if(left[i]<right[j]) arr[k++]=left[i++];
		else arr[k++]=right[j++];
	}
	while(i<mid){
		arr[k++]=left[i++];
	}
	while(j<mid+1) arr[k++]=right[j++];
}


void mergeSort(int* arr,int low,int high){
	if(low>=high) return;
	int mid=(low+high)/2;
	mergeSort(arr,low,mid);
	mergeSort(arr,mid+1,high);
	merge(arr,low,high);

}



int main(){
	int n,i;
	scanf("%d",&n);
	// a contains off indices elements
	int k=1,j=1;
	for(int i=1;i<=n;i++){
		if(i%2!=0) scanf("%d",&a[k++]);
		else scanf("%d",&ar[j++]);
	}
	printf("Size is %d\n",k);
	mergeSort(a,1,k-1);
	// k=1,j=1;
	// for(int i=1;i<=n;i++){
	// 	if(i%2!=0) printf("%d ",a[k++]);
	// 	else printf("%d ",ar[j++]);
	// }
	for(int i=1;i<k;i++) printf("%d ",a[i]);
	return 0;
}
