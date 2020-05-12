
int singleNonDuplicate(int* nums, int numsSize){
    int max=0;
    int i;
    for(i=0;i<numsSize;i++){
        if(nums[i]>max) max=nums[i];
    }
    // int hash[max+1]={0};
    int *hash;
    hash=(int*)calloc(sizeof(int),max+1);
    for(i=0;i<numsSize;i++){
        hash[nums[i]]++;
    }
    for(i=0;i<max+1;i++){
        if(hash[i]==1) return i;
    }
    return -1;
}
