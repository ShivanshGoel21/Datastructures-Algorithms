#include<stdio.h>
int* count_sort(int* arr,int n){
    int hash[500]={0};
    for(int i=0;i<n;i++){
         hash[arr[i]]++;
    }
    int k=0;
    for(int i=0;i<61;i++){
        int max=0;
        int max_index=i;
        for(int j=i;j<61;j++){
            if(hash[j]>max){
                max_index=j;
                max=hash[j];
            }
        }
    if(k!=n){
        while(hash[max_index]!=0){
            arr[k++]=max_index;
            hash[max_index]--;
        }
        hash[max_index]=-1;
    }
    else break;
    }
    return arr;
}
int main(){
    int t,n;
    scanf("%d",&t);
    int ans[500][500];
    int size[t];
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int arr[n];
        for(int j=0;j<n;j++) scanf("%d",&arr[j]);
        int* a=count_sort(arr,n);
        for(int j=0;j<n;j++) ans[i][j]=a[j];
        size[i]=n; 
    }
    for(int i=0;i<t;i++){
        for(int j=0;j<size[i];j++) printf("%d ",ans[i][j]);
        printf("\n");
    }
    return 0;
}
