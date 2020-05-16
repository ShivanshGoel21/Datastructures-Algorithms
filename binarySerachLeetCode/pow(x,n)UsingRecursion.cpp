class Solution {
public:
    double powerr(double x,int low,int high){
        int mid=(low+high)/2;
        if(high==1) return x;
        else if(high%2==0) return pow(powerr(x,low,mid),2);
        else return pow(powerr(x,low,mid),2)*x;
    }
    double myPow(double x,int n) {
        if(n>0){
         if(x==1) return 1;
          return powerr(x,0,n);  
        } 
        else if(n<0) {
            if((x==-1 && n%2!=0) || (x==1)) return x;
            else if((x==-1 && n%2==0)) return -x;
            if(n==-2147483648 || n==-2147483647) return 0;
            return 1/powerr(x,0,-n);
        }
        return 1;
    }
};
