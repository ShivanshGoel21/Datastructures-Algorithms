// property of odd numbers
// sum of first n odd numbers is always perfect square

bool isPerfectSquare(int num){
    unsigned long int sum,i;
    for(sum=0,i=1;sum<num;i+=2){
        sum+=i;
        if(sum==num) return true;
    }
    return false;

}
