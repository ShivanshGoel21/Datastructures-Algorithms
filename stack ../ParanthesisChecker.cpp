#include <iostream>
#include<stack>
using namespace std;
void checkFor(string str){
    stack<char> s;
    int i;
    for(i=0;i<str.size();i++){
        if(str[i]=='[' || str[i]=='{' || str[i]=='('){
            s.push(str[i]);
        }
        else{
            if(s.empty()){
                cout<<"not balanced"<<endl;
                return;
            }
            if((str[i]=='}' && s.top()=='{') || (str[i]==']' && s.top()=='[') || (str[i]==')' && s.top()=='(')) s.pop();
            else{
                cout<<"not balanced"<<endl;
                return;
            }
        }
    }
    if(s.empty()) cout<<"balanced"<<endl;
    else cout<<"not balanced"<<endl;
    return;
}
int main() {
	int test;
	cin>>test;
	string str;
	int i=0;
	for(int i=0;i<test;i++){
	    cin>>str;
	    checkFor(str);
	}
	return 0;
}
