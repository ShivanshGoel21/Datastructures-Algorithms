/*
Every number can be expressed as sum of perfect squares. 

For example

1= 1 

So number of perfect squares required 1

2=1+1 

So number of perfect squares required 2

3= 1+1+1 

So number of perfect squares required 3

4=4 

So number of perfect squares required 1

5=1+4 

So number of perfect squares required 2

6=4+1+1 

So number of perfect squares required 3

12=4+4+4 

So number of perfect squares required 3 

101=100+1

So number of perfect squares required 2

Given number n find the least number of perfect squares required to represent the sum

Input format:-

Number-N

Output format:-

Minimum number of perfect squares required.

Constraints

1<=N<=2*106

*/
#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
bool isPerfect(int num){
    if(sqrt(num)-floor(sqrt(num))==0) return true;
}
int main(){
    int num,temp;
    scanf("%d",&num);
    int min_count=2147483647;
    for(int i=num;i>0;i--){
    int temp=i;
    int ref_temp=num;
    int count=0;
    while(temp){
       if(isPerfect(temp)) {
           ref_temp=ref_temp-temp;
           temp=ref_temp;
           count++;
       }
       else temp--;
    }
    if(ref_temp==0) {
        if(count<min_count) min_count=count;
    }
    
    }
    printf("%d\n",min_count);
    return 0;
}
