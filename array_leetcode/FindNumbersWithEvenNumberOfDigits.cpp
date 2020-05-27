class Solution {
public:
    int count=0;
    int t;
    int findNumbers(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
        t=0;
        while(nums[i]>0){
            nums[i]/=10;
            t++;
        }
        if(t%2==0) count++;
        }
        return count;
    }
};
