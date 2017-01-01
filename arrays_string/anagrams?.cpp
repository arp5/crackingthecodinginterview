//Write a method to decide if two strings are anagrams or not.
// O(n) + O(nlogn) time complexity and O(1) space.
#include <iostream>
#include <map>
using namespace std;

bool areanagrams(string s1, string s2){
	if(s1.size()==0 || s2.size()==0){
		cout << "Invalid empty string " <<endl;
	}
	sort(s1.begin(),s1.end());
	sort(s2.begin(), s2.end());
	if(s1.size()!=s2.size())return false;
	for(int i=0;i<s1.size();i++){
		if(s1[i]!=s2[i])return false;
	}
	return true;
}

/*bool areanagDS(string s1, string s2){
	map<char, int>m;
	for(int i=0;i<s1.size();i++){
		if(m.find(s1[i])!=m.end())m[s1[i]]++;
		else m[s1[i]]=1;
	}
	for(int j=0;j<s2.size();j++){
		if(m.)
	}
}*/

int main(){
	
	cout << areanagrams("", "") <<endl;
	return 0;
}