/* The task is to complete insert() which is used 
   as shown below to implement insertionSort() */

/* Function to sort an array using insertion sort
void insertionSort(int arr[], int n)
{
   int i;
   for (i = 1; i < n; i++)
      insert(arr, i);
} */

void insert(int arr[], int i)
{
    int j=i-1;
    int temp=arr[i];
    while(j>-1 && temp<arr[j]){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=temp;
}
