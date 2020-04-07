int* reverseArray(int a_count, int* a, int* result_count) {
    int i=0,j=a_count-1;
    int temp;
    while(i<j){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    *result_count=a_count;
    return a;
}
