class Solution {
public:
    void findPeak(vector<int>& nums,int low,int high,int* ans){
        int mid=(low+high)/2;
        if((mid==0 || nums[mid]>nums[mid-1]) && (mid==nums.size()-1 || nums[mid]>nums[mid+1])){
            *ans=mid;
            return;
        }
        else if(mid>0 &&  nums[mid]<nums[mid-1])
        findPeak(nums,low,mid-1,ans);
        else
        findPeak(nums,mid+1,high,ans);
    }
    
    
    int findPeakElement(vector<int>& nums) {
        int ans=-1;
        findPeak(nums,0,nums.size()-1,&ans);
        return ans;
    }
};
