class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int hash[123]={0};
		bool found=false;
		char ans;
		for(int i=0;i<letters.size();i++){
            if(letters[i]==target) hash[letters[i]]=0; 
            else hash[letters[i]]++;
        }
		for(int i=target;found!=true;i++){
			if(hash[i]>0){
				found=true;
				ans=i;
			}
			else if(i=='z'){
				found=true;
				ans=letters[0];
			}
		}
		return ans;
    }
};
