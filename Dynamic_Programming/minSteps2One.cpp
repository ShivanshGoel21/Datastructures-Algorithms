/*
count number of ones required to get one   https://codezen.codingninjas.com/practice/471/852/min-steps-to-one

first of all check 

doing 
if(i%3==0){
}
else if(i%2==0){
}
else 


is greedy technique... this do not work for every case for example 10, as inspite doing 10/2, 5/2, 5-1, 4/2  we can do steps_required_from(9)+1

so at each and every step we've to check which technique is taking less steps that include doing i/3 i/2 or another one i.e. (i-1)+1



*/






int countStepsToOne(int n)
{
	int * arr = new int[n+1];
	arr[0]=0;
	arr[1]=0;
    arr[2]=1;
    arr[3]=1;
	for(int i=4;i<=n;i++){
        int ans=arr[i-1]+1;
		if(i%3==0){
			ans=min(arr[i/3]+1,ans);
		}
		if(i%2==0){
			ans=min(arr[i/2]+1,ans);
		}
		arr[i]=ans;
	}
	return arr[n];
}
