//isunique leetcode
#include <iostream>
using namespace std;

bool isuniqueAr(string s){
	int arr[256] = {0};
	if(s.size()==0)return NULL;
	if(s.size()==1)return true;
	for(int i=0;i<s.size();i++){
		if(arr[int(s[i])]) return false;
		else arr[int(s[i])] = 1;
	}return true;
}
int main(){

	cout << isuniqueAr("67") <<endl;
	return 0;
}