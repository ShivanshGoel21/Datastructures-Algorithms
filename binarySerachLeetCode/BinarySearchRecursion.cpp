class Solution {
public:
    void binary(vector<int>& nums,int low,int high,int target,int* ans){
        if(low>high) {
            *ans=-1;
            return;
        }
        int mid=(low+high)/2;
        if(nums[mid]==target){
            *ans=mid;
            return;
        } 
        else if(nums[mid]>target) binary(nums,low,mid-1,target,ans);
        else if(nums[mid]<target) binary(nums,mid+1,high,target,ans);  
        
    }
    int search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        int ans=0;
        binary(nums,low,high,target,&ans);
        return ans;
    }
};
