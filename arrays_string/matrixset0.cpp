//Write an algorithm such that if an element in an MxN matrix is 0, its entire row and
//column is set to 0.
//5  6  7
//8  9  
//O(n^2) complexity.
#include <iostream>
using namespace std;

void printmatrix(int array[2][3]){
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cout << array[i][j] <<" ";
		}cout << endl;
	}
}

int main(){
	int arr[2][3];
	int r,c;
	arr[0][0] = 5;
	arr[0][1] = 6;
	arr[0][2] = 7;
	arr[1][0] = 8;
	arr[1][1] = 9;
	arr[1][2] = 0;
	printmatrix(arr);
	cout << endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			if(arr[i][j]==0){
				r=i;
				c = j;
			}
		}
	}
	for(int i=0;i<2;i++){
		arr[i][c]=0;
	}
	for(int j=0;j<3;j++){
		arr[r][j] = 0;
	}
	printmatrix(arr);
	return 0;
}