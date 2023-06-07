#include <iostream>
using namespace std;

int main()
{
	int a(1);
	int b = 13;

	if (a > b) {
		cout << "a is bigger than b" << endl;
	}
	else if (a < b) {
		cout << "a is less than b" << endl;
	}
	else {
		cout << "a is equals than b" << endl;
	}

	system("pause");
}