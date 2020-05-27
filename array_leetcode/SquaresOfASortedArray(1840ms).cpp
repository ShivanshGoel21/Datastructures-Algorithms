class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        for(int i=0;i<A.size();i++){
            A[i]=A[i]*A[i];
        }
        int j,x;
        for(int i=1;i<A.size();i++){
            j=i-1;
            x=A[i];
            while(j>-1 && A[j]>x){
                A[j+1]=A[j];
                j--;
            }
            A[j+1]=x;
        }
        return A;
    }
};
