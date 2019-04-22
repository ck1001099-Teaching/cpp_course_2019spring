#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
	
	// . -> 0
	// - -> 1
	// space -> 2
	char tree[2][3][3][3];
	tree[0][1][2][0] = 'A';
	tree[1][0][0][0] = 'B';
	tree[1][0][1][0] = 'C';
	tree[1][0][0][2] = 'D';
	tree[0][2][0][0] = 'E';
	tree[0][0][1][0] = 'F';
	tree[1][1][0][2] = 'G';
	tree[0][0][0][0] = 'H';
	tree[0][0][2][0] = 'I';
	tree[0][1][1][1] = 'J';
	tree[1][0][1][2] = 'K';
	tree[0][1][0][0] = 'L';
	tree[1][1][2][0] = 'M';
	tree[1][0][2][0] = 'N';
	tree[1][1][1][2] = 'O';
	tree[0][1][1][0] = 'P';
	tree[1][1][0][1] = 'Q';
	tree[0][1][0][2] = 'R';
	tree[0][0][0][2] = 'S';
	tree[1][2][0][0] = 'T';
	tree[0][0][1][2] = 'U';
	tree[0][0][0][1] = 'V';
	tree[0][1][1][2] = 'W';
	tree[1][0][0][1] = 'X';
	tree[1][0][1][1] = 'Y';
	tree[1][1][0][0] = 'Z';

	int n;
	cin >> n;
	cin.ignore();
	for (int i = 0 ; i < n ; i++){
		string str;
		getline(cin, str);

		/*
		istringstream iss (str);
		string tmp;
		while(iss >> tmp){
			cout << tmp << endl;
			if (tmp == "..."){
				cout << "S";
			} else if (tmp == ".-."){
				cout << "R";
			}
		}
		cout << endl;
		*/


		int layer = 0;
		int x = 0, y = 0, z = 0, w = 0;
		for (int j = 0 ; j < str.size() ; j++){
			if (str[j] == '.'){
				// .
				if (layer == 0){
					x = 0;
				} else if (layer == 1){
					y = 0;
				} else if (layer == 2){
					z = 0;
				} else if (layer == 3){
					w = 0;
				}
				layer = layer + 1;
			} else if (str[j] == '-'){
				// -
				if (layer == 0){
					x = 1;
				} else if (layer == 1){
					y = 1;
				} else if (layer == 2){
					z = 1;
				} else if (layer == 3){
					w = 1;
				}
				layer = layer + 1;
			} else {
				// space
				if (layer == 0){
					x = 2;
				} else if (layer == 1){
					y = 2;
				} else if (layer == 2){
					z = 2;
				} else if (layer == 3){
					w = 2;
				}
				cout << tree[x][y][z][w];
				layer = 0;
				x = 0, y = 0, z = 0, w = 0;
			}
		}
		if (layer == 1){
			y = 2;
		} else if (layer == 2){
			z = 2;
		} else if (layer == 3){
			w = 2;
		}
		// endl
		cout << tree[x][y][z][w] << endl;
	}

	return 0;
}