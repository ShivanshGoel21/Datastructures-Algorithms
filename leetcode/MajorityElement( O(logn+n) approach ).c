//this approach takes O(logn+n) time
int majorityElement(int* nums, int numsSize){
    //sort the array
    //then check the frequency of element at n/2 th position
    //insertion sort
    int j;
    int x;
    for(int i=1;i<numsSize;i++){
        j=i-1;
        x=nums[i];
        while(j>-1 && nums[j]>x){
            nums[j+1]=nums[j];
            j--;
        }
        nums[j+1]=x;
    }
    int let_major=nums[numsSize/2];
    int count=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==let_major) count++;
    }
    if(count>numsSize/2) return let_major;
    return -1;
}
