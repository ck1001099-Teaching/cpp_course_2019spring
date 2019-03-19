#include <iostream>
using namespace std;

int main(){
	int sum = 0;
	for (int i = 0 ; i < 1000 ; i++){ // 計數器
		sum = sum + (i+1);
		if (sum > 3000){
			continue;
		}
		cout << i+1 << endl;
	}
	cout << sum << endl;
	/*
	// i++  :  i = i + 1
	for (int j = 0 ; j < 10 ; j++){
		cout << j << endl;
		j = j + 1;
	}*/


	return 0;
}


