class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,vector<int>> ump;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            ump[nums[i]].push_back(i);
        }
        for(int i=0;i<nums.size();i++){
            int diff=target-nums[i];
            if(diff==nums[i] && ump[nums[i]].size()>=2){
                ans.push_back(ump[diff][0]);
                ans.push_back(ump[diff][1]);
                return ans;
            }
            else if(ump[diff].size() && diff!=nums[i]){
                ans.push_back(ump[nums[i]][0]);
                ans.push_back(ump[diff][0]);
                return ans;
            }
        }
        return ans;
    }
};
