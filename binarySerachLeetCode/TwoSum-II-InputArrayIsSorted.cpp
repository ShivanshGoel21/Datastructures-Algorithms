class Solution {
public:
    int find=0;
    void binarysearch(vector<int>& arr,int low,int high,int target){
        int mid;
        while(low<=high){
            mid=(low+high)/2;
            if(arr[mid]==target){
                find=mid;
                return;
            }
            else if(arr[mid]>target){
                high=mid-1;
            }
            else low=mid+1;
        
    }
    }
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> v;
        for(int i=0;i<numbers.size()-1;i++){
            binarysearch(numbers,i+1,numbers.size()-1,target-numbers[i]);
            if(find>0){
                v.push_back(i+1);
                v.push_back(find+1);
                return v;
            }
        }
        return v;
        
    }
};
