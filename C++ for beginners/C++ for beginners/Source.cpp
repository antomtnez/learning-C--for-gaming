#include <iostream>
using namespace std;

void welcome() {
	cout << "Welcome" << endl;
}

void printNumber(int numToPrint) {
	cout << numToPrint << endl;
}

int giveANumber() {
	return 5;
}

int add(int a, int b) {
	int result = a + b;
	return result;
}

int main()
{
	welcome();

	printNumber(add(giveANumber(), 6));

	system("pause");
}