// map in c++
// stores key value pair in same order as stored
#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    cout<<"map"<<endl;
    map <string,int> m1;
    m1["apple"]=3;
    m1["banana"]=2;
    m1["oranges"]=4;
    // obseve that order is maintained
    for(auto i : m1){
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    cout<<endl<<"unordered_map"<<endl;
    // order is not maintained
    unordered_map <string,int> m2;
    m2["apple"]=3;
    m2["banana"]=2;
    m2["oranges"]=4;
    for(auto i:m2){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}
