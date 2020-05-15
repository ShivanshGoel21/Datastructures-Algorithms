class Solution {
public:
    void findPivot(vector<int>& nums,int low,int high,int* ans){
        int mid=(low+high)/2;
        if((mid==0 || nums[mid]<nums[mid-1]) && (mid==nums.size()-1 || nums[mid]<nums[mid+1])){
            *ans=nums[mid];
            return;
        }
        else if((mid==0 ||nums[mid]>nums[0]) && (nums[mid]>nums[nums.size()-1])) findPivot(nums,mid+1,high,ans);
        else findPivot(nums,low,mid-1,ans);
    }
    int findMin(vector<int>& nums) {
        int ans=-1;
        findPivot(nums,0,nums.size()-1,&ans);
        return ans;
    }
};
