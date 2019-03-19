//1公尺=3.28英呎，1公斤=2.2英鎊，請寫出一個可讓使用者自由選擇
//要轉換哪一單位的程式。

#include <iostream>
using namespace std;

int main(){
	cout << "1) 公尺->英呎" << endl;
	cout << "2) 公斤->英鎊" << endl;
	int mode;
	cin >> mode;
	if (mode == 1){
		double meter;
		cout << "請輸入公尺: ";
		cin >> meter;
		cout << meter << "公尺 -> " << meter * 3.28 << "英呎" << endl;
	} else if (mode == 2){
		double kilogram;
		cout << "請輸入公斤: ";
		cin >> kilogram;
		cout << kilogram << "公斤 -> " << kilogram * 2.2 << "英鎊" << endl;
	} else {
		cout << "請輸入正確的模式" << endl;
	}
	return 0;
}