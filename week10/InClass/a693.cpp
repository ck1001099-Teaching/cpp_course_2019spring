#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n, m;
	while (cin >> n >> m){
		
		vector<int> c;
		vector<int> c_dp;
		c_dp.push_back(0);
		for (int i = 0 ; i < n ; i++){
			int tmp;
			cin >> tmp;
			c.push_back(tmp);
			
			c_dp.push_back( c_dp[c_dp.size()-1] + tmp );
		}
		
		for (int i = 0 ; i < m ; i++){
			int l, r;
			cin >> l >> r;
			// brute force
			int total = 0;
	//		for (int j = l-1 ; j < r ; j++){
	//			total  = total + c[j];
	//		}
			// dynamic programming
			total = c_dp[r] - c_dp[l-1];
			cout << total << endl;
		}
	}
	return 0;
}
