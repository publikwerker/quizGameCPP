#include"header.h"

using namespace std;

// **************** //
//   Publikwerker   //


question::question() {
	q = NULL;
}

question::~question() {
	delete [] q;
}

int question::loadQA(char ques[], bool answ) {
	q = new char[strlen(ques) +1];
	strcpy(q, ques);

	a = answ;

	return 1;
}

int question::display() {
	cout << q << endl;
	return 0;
}

bool question::checker(char input[]) {
	if((!strcmp(input, "true") && a == true) || (!strcmp(input, "false") && a == false)) {
		return true;
	} else return false;
}

int main() {

	question quiz[10];
	load(quiz);
	int score = 0;

	cout << "\nThis is the question."
		<< "answer \"true\" or \"false\"." << endl;
	for(int i =0; i < 10; ++i) {
		char userInput[100];
		quiz[i].display();
		cin >> userInput;
		cin.ignore(100, '\n');

		if(quiz[i].checker(userInput)) {
			cout << "That's correct!" << endl;
			++score;
		} else {
			cout << "That's incorrect." << endl;
		}
	}
	cout << "Your score is " << score << endl;
	return 0;
}
