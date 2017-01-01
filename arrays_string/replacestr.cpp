//Write a method to replace all spaces in a string with ‘%20’.
//"ab n" -> "ab%20n"
// O(n)time and space complexity.
//DO THIS IN O(1) SPACE!!!!
#include <iostream>
#include <vector>
using namespace std;

void replacestr(string &s){
	vector<char> v;
	if(s.size()==0)cout<<"invalid string"<<endl;
	for(int i=0;i<s.size();i++){
		if(s[i]==' '){
			v.push_back('%');
			v.push_back('2');
			v.push_back('0');
		}else{
			v.push_back(s[i]);
		}
	}
	s.clear();
	for(int i=0;i<v.size();i++){
		s = s + v[i];
	}	
}

int main(){
	string str;
	//cin >> str;
	str = "o";
	//cout << str.size() <<endl;
	replacestr(str);
	cout << str << endl;
	return 0;
}