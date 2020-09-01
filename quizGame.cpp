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
	cout << a << endl;

	return 0;
}

int main() {

	question quiz[10];
	load(quiz);

	cout << "This is the question.";
	for(int i =0; i < 10; ++i) {
		quiz[i].display();
	}


	return 0;
}
