//only if positive elements in array
// and this is not a good solution
int hashSize(int *nums,int numsSize){
    int max=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]>max) max=nums[i];
    }
    return max+1;
}
int majorityElement(int* nums, int numsSize){
    int size=hashSize(nums,numsSize);
    int *hash=(int*)calloc(sizeof(int),size);
    int i;
    for(i=0;i<numsSize;i++){
        hash[nums[i]]++;
    }
    for(i=0;i<=size;i++){
        if(hash[i]>(numsSize/2)) return i;
    }
   return 0; 
}
