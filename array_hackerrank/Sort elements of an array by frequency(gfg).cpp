//Complete this function
//The array is declared globally
void sortByFreq(int arr[],int n)
{
    int maxi=61;
    // for(int i=0;i<n;i++) if(arr[i]>maxi) maxi=arr[i];
    int hash[maxi+1]={0};
    for(int i=0;i<n;i++){
         hash[arr[i]]++;
    }
    int k=0;
    for(int i=0;i<maxi;i++){
        int max=0;
        int max_index=i;
        for(int j=0;j<maxi;j++){
            if(hash[j]>max){
                max_index=j;
                max=hash[j];
            }
        }
        if(k<=n){
            while(hash[max_index]>0){
                // cout<<"k:"<<k<<endl;
                arr[k++]=max_index;
                hash[max_index]--;
            }
            hash[max_index]=-1;
        }
        else break;     
    }
    for(int i=0;i<k;i++) cout<<arr[i]<<" ";
}
