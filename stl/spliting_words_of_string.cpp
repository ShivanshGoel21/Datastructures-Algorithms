#include<iostream>
using namespace std;
#include<unordered_map>
int main(){
    string s1="geek for geeeks practise questions";
    string word="";
    for(auto x: s1){
        if(x==' '){
            cout<<word<<endl;
            word="";
        }
        else word=word+x;
    }
    return 0;
}
