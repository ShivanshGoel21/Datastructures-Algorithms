Consecutive Four Sum Number
A positive integer is called as a `Consecutive Four Sum (CFS) number' if that number can be expressed as the sum of four consecutive positive integers.  10 is a CFS number since 10= 1+2+3+4; 50 is a CFS number since 50= 11+12+13+14.  7 is not a CFS number since  7 cannot be expressed as a sum of four consecutive number.  Similarly, 20 is not a CFS number.  Given a number `n', write an algorithm and the subsequent python code to check whether the given number is a CFS number or not. If so, your code should  print 1 ( here, 1 is an indicator which conveys that the given number is a CFS number)  and also print the starting integer among the four consecutive integers.  If the given number is not a CFS number, your code should output 0.  For eg, if 10 is the input, your code should output : 1 and 1.  Here 1 is the starting integer of the four consecutive integers for 10. If 7 is the input, your code should output : 0.  Given the integer 20, your code should output only 0.

Input format:

Enter the positive integer

Output format :

0 or 1   (If the given number is a CFS , output should be 1;  If the given number is not a CFS, it should be 0.)

Starting integer of the four consecutive integers. ( The second output, is applicable only when the first output is 1)

Sample Input :

10

Sample Output 

1

1

Note : The two outputs should be printed in two separate lines

















#include<iostream>
using namespace std;

void findFour(int n){
    if(n<10){
        cout<<0<<endl;
        return;
    }
    if(n==10){
        cout<<1<<endl;
        cout<<1<<endl;
        return;
    }
    // the idea is to maintain a window of size 4
    int sum=0;
    for(int i=0;i<4;i++){
        sum+=(i+1);
    }
    int start=1;
    for(int i=4;i<n;i++){
        sum-=(start++);
        sum+=(i+1);
        if(sum>n){
            cout<<0<<endl;
            return;
        }
        if(sum==n){
            cout<<1<<endl;
            cout<<start<<endl;
            return;
        }
    }
}


int main(){
    int n;
    cin>>n;
    findFour(n);
    return 0;
}
