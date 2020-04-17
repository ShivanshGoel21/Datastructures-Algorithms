//User function Template for C++

/* The task is to complete bubble() which is used 
   in below bubbleSort() */

/* A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
   for (int i = 0; i < n-1; i++)      
        bubble(arr, i, n);
} */
void bubble(int arr[], int i, int n)
{
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                arr[j]=arr[j+1]+arr[j];
                arr[j+1]=arr[j]-arr[j+1];
                arr[j]=arr[j]-arr[j+1];
            }
        }
}
