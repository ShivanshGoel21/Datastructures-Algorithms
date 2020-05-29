class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        //1. sort nums2
        //2. search an element of nums1 in nums2 using binary search
        //3. if found then append that to new array
        vector<int> v;
        sort(nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());
        for(int i=0;i<nums1.size();i++){
            int low=0;
            int high=nums2.size()-1;
            while(low<=high && low>=0 && high<=nums2.size()-1){
                int mid=(low+high)/2;
                if(nums1[i]==nums2[mid]){
                    if(v.empty()) v.push_back(nums2[mid]);
                    else if(v.back()==nums2[mid]) break;
                    else v.push_back(nums2[mid]);
                    break;
                }
                else if(nums1[i]>nums2[mid]) low=mid+1;
                else high=mid-1;
            }
        }
        return v;
    }
