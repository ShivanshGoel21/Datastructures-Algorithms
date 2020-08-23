class Solution {
public:
    void merge(vector<int>& nums,int low,int high){
        int mid=(low+high)/2;
        int lp=0,rp=0;
        int i=0,j=0,k=low;
        vector<int> left;
        vector<int> right;
        for(int i=low;i<=mid;i++) left.push_back(nums[i]);
        for(int i=mid+1;i<=high;i++) right.push_back(nums[i]);
        lp=left.size();
        rp=right.size();
        while(i<lp && j<rp){
            if(left[i]<right[j]) nums[k++]=left[i++];
            else nums[k++]=right[j++];
        }
        while(i<lp) nums[k++]=left[i++];
        while(j<rp) nums[k++]=right[j++];
    }
    
    
    void mergeSort(vector<int>& nums,int low,int high){
        if(low>=high) return;
        int mid=(low+high)/2;
        mergeSort(nums,low,mid);
        mergeSort(nums,mid+1,high);
        merge(nums,low,high);
        return;
    }
    
    
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
};
