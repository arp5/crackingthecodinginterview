//Implement an algorithm to determine if a string has all unique characters. What if you
//can not use additional data structures?
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

//without additional data structures
bool isunique(string s){
	sort(s.begin(),s.end());
	for(int i=1;i<s.size();i++){
	if(s[i]==s[i-1])return false;
	}
	return true;
}
//with extrads using hash maps:
bool isuniqueDS(string s){
	map<char, int>m;
	for(int i=0;i<s.size();i++){
		if(m.find(s[i])!=m.end())return false;
		else m[s[i]]=1;
	}
	return true;
}
int main(){
	
	cout << isunique("  ") <<endl;
	cout << isuniqueDS("ttyuio") <<endl;
	return 0;
}