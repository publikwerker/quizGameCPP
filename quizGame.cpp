#include"header.h"

using namespace std;

// **************** //
//   Publikwerker   //


int main() {

	class question {
		public:
			int load(char ques[], bool answ) {
				q = new char[ques.length() +1];
				a = answ;
		}
		char * q;
		bool a;
	}
	
	question quiz[10];

	cout << "This is the question.";


	return 0;
}
