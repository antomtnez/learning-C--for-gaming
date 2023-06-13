#include <iostream>
using namespace std;

void welcome();
char getYesNo();
void printResponse(char responseToPrint);
void AskYesOrNoQuestion();
void Operations();
void TheWhileProject();
void DoWhileMethod();
void ForMethod();

int main() 
{
	//AskYesOrNoQuestion();

	//Operations();

	//TheWhileProject();

	//DoWhileMethod();

	ForMethod();

	system("pause");
}

void welcome() {
	cout << "Welcome" << endl;
}

char getYesNo() {
	cout << "Please answer: y or n" << endl;

	char response;

	cin >> response;

	return response;
}

void printResponse(char responseToPrint) {
	if (responseToPrint == 'y') {
		cout << "Oh! You say yes to marry me!" << endl;
	}
	else {
		cout << "Amazing! You say no to win a 1 million dollars!" << endl;
	}
}

void AskYesOrNoQuestion() {
	welcome();

	char answer = getYesNo();

	printResponse(answer);
}

void Operations() {
	int i = 3;
	float j = 2.0;

	float k = j / i;

	int f = 5 + (i--);

	cout << k << endl;

	cout << f << endl;

	cout << i << endl;
}

void TheWhileProject() {
	int count(0);

	while (count <= 10) {
		cout << count << endl;
		count++;
	}
}

void DoWhileMethod() {
	double numberPi = 3.14159;
	double numberE = 2.718281828;

	int count = 0;

	bool condition = true;

	do {
		cout << "Number PI is " << numberPi << endl;
		cout << "Number E is " << numberE << endl;
		cout << "Pi + (E * count) = " << numberPi + (numberE * count) << endl;

		count++;

		if (count <= 100) {
			condition = true;
		}
		else {
			condition = false;
		}

	} while (condition);
}

void ForMethod() {

	for (int i(0); i <= 10; i++) {
		for (int j(0); j <= 10; j++) {
			for (int k(0); k <= 10; k++) {
				cout << "i = " << i << ", j = " << j << ", k = " << k << endl;
			}
		}
	}

	cout << endl;
}