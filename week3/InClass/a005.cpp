#include <iostream>
using namespace std;
// 材︽琌计计ヘt0 <= t <= 20 –︽А俱计
//ボ计玡兜 ﹚计玡き兜Аぃ10^5礛计
// 单ゑ计ゑ琌礛计
int main(){
	int t;
	cin >> t;
	for (int i = 0 ; i < t; i++){
		int a1, a2, a3, a4;
		cin >> a1 >> a2 >> a3 >> a4;
		if (a2 - a1 == a3 - a2){
			// 单畉计 
			int a5 = a4 + (a2-a1);
			cout << a1 << " " << a2 << " " << a3 << " " << a4 << " " << a5 << endl;
		} else {
			// 单ゑ计 
			int a5 = a4 * (a2/a1);
			cout << a1 << " " << a2 << " " << a3 << " " << a4 << " " << a5 << endl;
		}
	}
	return 0;
}
