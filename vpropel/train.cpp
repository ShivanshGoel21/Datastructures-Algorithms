/*
A bus has n stops numbered from 0 to n - 1 that form a circle. We know the distance between all pairs of neighboring stops where distance[i] is the distance between the stops number i and (i + 1) % n.

The bus goes along both directions i.e. clockwise and counterclockwise.

Return the shortest distance between the given start and destination stops.

*/


#include<iostream>
using namespace std;
int main(){
    int n,s,d;
    int dis=0;
    int anti_dis=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cin>>s>>d;
    for(int  i=s ; i!=d ; i=(i+1)%n) dis+=arr[i];
    for(int  i=d ; i!=s ; i=(i+1)%n) anti_dis+=arr[i];
    cout<<min(dis,anti_dis)<<endl;
}
