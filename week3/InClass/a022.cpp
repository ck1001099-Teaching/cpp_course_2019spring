#include <iostream>
#include <string>
using namespace std;

int main(){
	string str;
	while (cin >> str){
		//cout << str.size() << endl; // ��X�r�����  
		int n = str.size();
		if (str.size() % 2 == 0){ // �r����׬O���� 
			// 0 <-> n-1
			// 1 <-> n-2
			// ...
			// n/2 -1 <-> n/2
			bool isYes = true; 
			for (int i = 0 ; i < n/2 ; i++){
				// i: 0~ n/2-1
				if (str[i] != str[n-1-i]){
					// �Ӧr�ꤣ�O�j��
					isYes = false;
				}
			}
			if (isYes){
				cout << "yes" << endl;
			} else {
				cout << "no" << endl;
			}
		} else {
			// �r����׬O�_��
			bool isYes = true; 
			for (int i = 0 ; i < n/2 ; i++){
				// i: 0~ n/2-1
				if (str[i] != str[n-1-i]){
					// �Ӧr�ꤣ�O�j��
					isYes = false;
				}
			}
			if (isYes){
				cout << "yes" << endl;
			} else {
				cout << "no" << endl;
			}
		}
	}
	return 0;
} 
