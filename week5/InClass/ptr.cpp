#include <iostream>
using namespace std;

int main(){
	
	int a = 20;
	int *a_ptr; // int*
	int **a_ptr_ptr; // int**

	a_ptr = &a;
	a_ptr_ptr = &a_ptr;

	cout << (&a) << endl;
	cout << a_ptr << endl;
	cout << (*a_ptr) * (*a_ptr) * (**a_ptr_ptr) << endl;

	*a_ptr = 30;
	cout << a << endl;

	return 0;
}