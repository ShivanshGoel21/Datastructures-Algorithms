class Solution {
public:
    void finding(unsigned long long int low,unsigned long long int high,unsigned long long int* ans){
        if(low>high){
            *ans=-1;
            return;
        }
        unsigned long long int mid=(low+high)/2;
        if (guess(mid)==0){
            *ans=mid;
            return;
        }
        else if(guess(mid)==-1) finding(low,mid-1,ans);
        
        else if(guess(mid)==1) finding(mid+1,high,ans);
        
    }
    unsigned long long int guessNumber(unsigned long long int n) {
        unsigned long long int ans;
        finding(1,n+1,&ans);
        return ans;
    }
};
