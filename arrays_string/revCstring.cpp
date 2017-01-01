//Write code to reverse a C-Style String. (C-String means that “abcd” is represented as
//!ve characters, including the null character.)

#include <iostream>
using namespace std;

int main(){
	int n;
	char arr[3];
	/*cout << "give input" <<endl;
	cin >> n;
	cout << " characters: " <<endl;
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}*/
	arr[0] = 'a';
	arr[1] = 'b';
	arr[2] = 'c';
	for(int i=0;i<3;i++){
		cout << arr[i] <<endl;
	}
	cout << arr[3]  <<endl;
	int j=0;
	while(arr[j]!=' '){
		cout << arr[j] <<endl;
		j++;
	}int i=0;
	int size = j;
	j = j-1;
	while(i<j){
		char temp = arr[i];
		arr[i]  = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}
	for(int i=0;i<size;i++){
		cout <<arr[i] << " ";
	}cout <<endl;
	return 0;
}