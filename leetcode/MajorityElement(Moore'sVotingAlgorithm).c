int majorityElement(int* nums, int numsSize){
    int i;
    int major=nums[0];
    int count=1;
    for(i=0;i<numsSize;i++){
        if(major==nums[i]) count++;
        else count--;
    
    if(count==0){
        count=1;
        major=nums[i];
    }
    }
    count=0;
    for(i=0;i<numsSize;i++){
        if(nums[i]==major) count++;
    }
    if (count>(numsSize/2)) return major;
    return 0;
}
