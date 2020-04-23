// range based for loop in c++
#include<iostream>
#include<map>
using namespace std;
int main(){

    // itertaing over an array
    int a[]={1,2,3,4,5,6};
    for(int i: a){
        cout<<i<<endl;
    }

    //itering over array
    cout<<"NEXT"<<endl;
    for(int i:{1,2,3,4}) cout<<i<<endl;

    //for iterating over each character of a string
    string s1="practicing range for loop";
    for(char x: s1){
        cout<<x<<endl;
    } 

    // for printing key value pair of map
    map <string,int> m1;
    m1["Hello"]=2;
    m1["boy"]=3;
    for(auto i: m1){
        cout<<i.first<<" "<<i.second<<endl;  // i is not iterator 
    }
    return 0;
}
