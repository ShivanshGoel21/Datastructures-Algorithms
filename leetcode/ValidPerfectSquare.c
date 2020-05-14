#include<stdio.h>
int isPerfect(int a){
int sum,i;
for(sum=0,i=1;sum<a;i=i+2){
sum=sum+i;
if(sum==a) return 1;
}
return 0;
}

int main(){
int a;
scanf("%d",&a);
printf("%d",isPerfect(a));
return 0;
}
	
