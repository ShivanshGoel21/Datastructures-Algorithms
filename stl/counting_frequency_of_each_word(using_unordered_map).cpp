/// couuting frequency of each word in string
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    string s1="vit vellore and vit chennai and vit bhopal and vit amravati";
    string word="";
    unordered_map <string,int> m1;
    for(auto x: s1){
        if(x==' '){
            //if key is found in map then increase frequency by 1 each time
            // else make new key
            if(m1.find(word)==m1.end()){
                // key not found form new
                m1[word]=1;
                // clear the word every time
                word="";
            }
            else{
                // key found increase frequency by 1
                m1[word]=m1[word]+1;
                // clear the word every time
                word="";
            }
            
        }
        else word=word+x;
    }
    for(auto it=m1.begin();it!=m1.end();it++) cout<<it->first<<" "<<it->second<<endl;
    return 0;
}
