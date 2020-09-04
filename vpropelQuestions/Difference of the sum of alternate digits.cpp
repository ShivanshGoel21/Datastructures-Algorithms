/*

Given a positive integer 'x' (with even number of digits in it), write an algorithm and the subsequent code to compute the difference between  the sum of the digits occuring in the alternate positions (starting from the first position) and the sum of the digits occuring in the alternate positions,starting from the last rightmost position of 'x'

For example, consider the number  8975.  The sum of the digits that occur in the alternate positions from the first position is 8+7=15.  The sum of the digits that occur in the alternate positions, starting from the rightmost position is 5+9 = 14. Difference between the two sums is 1 (=15-14).  Similarly, for the number 5798, the difference between  two sums, is 1.  

Note: Read the input as a number and do entire processing as  a number

C++ compilers can compile C code also

Input format 

First line contains the positive integer

Output format :

First line should contain the difference between  the sum of the digits occuring in the alternate positions (starting from the first position) and the sum of the digits occuring in the alternate positions (startting from the last rightmost position).




*/

#include<iostream>
#include<math.h>
# using namespace std;
# int main(){
#     int n;
#     cin>>n;
#     int sum1=0;
#     int sum2=0;
#     bool sum1b=false;
#     bool sum2b=false;
#     while(n>0){
#         if(sum1b==false) sum2b=true;
#         else if(sum1b==true) sum2b=false;
#         if(!sum1b){
#             sum1+=n%10;
#             sum1b=true;
#         } 
#         if(!sum2b){
#             sum2+=n%10;
#             sum1b=false;
#         }
#         n=n/10;
#     }
#     cout<<abs(sum1-sum2)<<endl;
#     return 0;
# }


python


s=int(input())
sum1=0
sum2=0
for index,i in enumerate(str(s)):
    if((index+1)%2==0):
        sum1+=int(i)
    else:
        sum2+=int(i)
print(abs(sum1-sum2))
    
