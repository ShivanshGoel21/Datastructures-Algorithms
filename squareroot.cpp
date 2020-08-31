
// Function to find square root
// x: element to find square root
long long int floorSqrt(long long int x) 
{
    // Your code goes here   
    long long int ans=0;
    long long int low=0;
    long long int mid;
    long long int high=x;
    while(low<=high){
        mid=(low+high)/2;
        if(mid*mid==x) return mid;
        else if(mid*mid > x) high=mid-1;
        else{
            low=mid+1;
            ans=mid;
        }
    }
    return ans;
}
