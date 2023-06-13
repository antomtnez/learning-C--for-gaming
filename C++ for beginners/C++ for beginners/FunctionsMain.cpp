#include <iostream>
using namespace std;

void welcome();
char getYesNo();
void printResponse(char responseToPrint);
void AskYesOrNoQuestion();
void Operations();
void TheWhileProject();

int main() 
{
	AskYesOrNoQuestion();

	Operations();

	TheWhileProject();

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