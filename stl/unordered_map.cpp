#include<iostream>
using namespace std;
#include<unordered_map>


// order of storage of key value pair do not remain same as stored
// but remain same in map
int main(){
    unordered_map <string,int> m1;

    // inserting method 1
    m1.insert(make_pair("Hello",5));
    m1.insert(make_pair("try",3));

    // inserting method 2
    m1["vellore"]=7;

    //printing (observer order of storage will be not same, as stored)
    cout<<"KEY"<<" "<<"VALUE"<<endl;

    // declaring iterator method 1
    // unordered_map <string,int> :: iterator itr;
    // auto it (method 2) for declaring iterator
    // but for this method initialising iterator is necessary 
    for(auto it=m1.begin();it!=m1.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    // .find is stl function it will return iterator pointing to the location if -> found , else -> will return iterator pointingg to end of unordered_map
    if(m1.find("Hello")==m1.end()) cout<<"Not Found";
    else{ 
        unordered_map <string,int> :: iterator itr;
        itr=m1.find("Hello");
        cout<<"Found"<<endl;
        cout<<itr->first<<" "<<itr->second;
    }
}
    
