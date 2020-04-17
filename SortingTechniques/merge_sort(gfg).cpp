/* The task is to complete merge() which is used
   in below mergeSort() */
/*   l is for left index and r is right index of the
   sub-array of arr to be sorted
void mergeSort(int arr[], int l, int r) {
    if (l < r)   {
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
} */

// Merges two subarrays of arr[].  First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int a[], int l, int m, int h)
{
    int b[h+1];
    int i=l,j=m+1,k=l;
    while(i<=m && j<=h){
        if(a[i]<a[j]) b[k++]=a[i++];
        else b[k++]=a[j++];
    }
    for(;i<=m;i++) b[k++]=a[i];
    for(;j<=h;j++) b[k++]=a[j];
    for(i=l;i<=h;i++) a[i]=b[i];
}
