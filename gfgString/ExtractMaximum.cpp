#include <iostream>
#include<string>
using namespace std;

int function(string s){
    string b="";
    int max=0;
    for(char a:s){
        if(a>=48 && a<=57){
            b=b+a;
        }
        else{
			if (b!=""){
            if(stoi(b)>max) max=stoi(b);
            b="";
			}
        }
    }
	if(b!="" && stoi(b)>max) max=stoi(b);
    return max;
}

int main() {
	int test;
	string s;
	cin>>test;
	int arr[test];
	for(int i=0;i<test;i++){
	    cin>>s;
	    arr[i]=function(s);
	}
	for(int i=0;i<test;i++) cout<<arr[i]<<endl;
	return 0;
}
