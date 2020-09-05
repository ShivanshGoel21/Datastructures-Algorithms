Sum of First Few Consecutive Prime Numbers
Given a number 'n', write an algorithm and a code to check if it can be written as sum of first few prime numbers. Print Yes if 'n' can be written as first few prime numbers and No otherwise. For example, if n is 5 then print Yes as it can be written as 2+3, if n is 41 then print Yes as it can be written as 2 + 3 + 5 + 7 + 11 + 13 and if n is 11 then print 'No' as it cannot be written as sum of first few prime numbers.

Note: C++ compilers can compile C code also

Input Format

First line contains the number, n

Output Format

First line contains Yes if the number n can be written as sum of first few prime numbers and No otherwise


#include<iostream>
using namespace std;

// if the number is primme than it can be written as sum of prime numbers
bool isPrime(int n){
    if(n<=1) return false;
    if(n<=3) return true;
    if(n%2==0 || n%3==0) return false;
    for(int i=5;i*i<=n;i+=6){
        if(n%i==0 || n%(i+2)==0) return false;
    }
    return true;
}


int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        if(isPrime(i)) sum+=i;
        if(sum==n){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    return 0;
}
