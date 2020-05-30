#include <iostream>
#include<string>
using namespace std;

int function(string s){
    string b="";
    int sum=0;
    for(char a:s){
        if(a>=48 && a<=57){
            b=b+a;
        }
        else{
			if (b!=""){
            sum+=stoi(b);
            b="";
			}
        }
    }
	if(b!="") sum+=stoi(b);
    return sum;
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
