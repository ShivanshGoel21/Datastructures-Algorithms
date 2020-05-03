unsigned long long int firstBadVersion(unsigned long long int n) {
    unsigned long long int low=1;
    unsigned long long int high=n;
    unsigned long long int mid;
    while(low<=high){
        mid=(low+high)/2;
        if(isBadVersion(mid)==1){
            if(mid)
            if(isBadVersion(mid-1)==0 && isBadVersion(mid+1)==1){
                return mid;
            }
            else high=mid-1;
        }
        else low=mid+1;
    }
    return n;
}
