//Design an algorithm and write code to remove the duplicate characters in a string
//without using any additional bu#er. NOTE: One or two additional variables are !ne.
//An extra copy of the array is not.
//FOLLOW UP
//Write the test cases for this method.

#include <iostream>
using namespace std;

void rmdup(string &s){
	for(int i=0;i<s.size()-1;i++){
		int j=i+1;
		while(j<s.size()){
			//cout << s[i] << " " << s[j] << endl;
			if(s[i]==s[j]){
				s.erase(j,1);
			}else{
				j++;
			}
		}
	}
}
int main(){
	string s = "aabbgh";
	rmdup(s);
	cout << s <<endl;
	return 0;
}