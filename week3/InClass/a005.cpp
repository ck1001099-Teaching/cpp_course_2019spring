#include <iostream>
using namespace std;
// �Ĥ@��O�ƦC���ƥ�t�]0 <= t <= 20�^�C �H�U�C�槡�]�t�|�Ӿ��
//�A��ܼƦC���e�|���C ���w�ƦC���e�����������j��10^5���۵M�ơA
// ����ƦC����Ȥ]�O�۵M�ơC
int main(){
	int t;
	cin >> t;
	for (int i = 0 ; i < t; i++){
		int a1, a2, a3, a4;
		cin >> a1 >> a2 >> a3 >> a4;
		if (a2 - a1 == a3 - a2){
			// ���t�ƦC 
			int a5 = a4 + (a2-a1);
			cout << a1 << " " << a2 << " " << a3 << " " << a4 << " " << a5 << endl;
		} else {
			// ����ƦC 
			int a5 = a4 * (a2/a1);
			cout << a1 << " " << a2 << " " << a3 << " " << a4 << " " << a5 << endl;
		}
	}
	return 0;
}
