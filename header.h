#include<iostream>
#include<cctype>
#include<cstring>
#include<fstream>

// **************** //
//   Publikwerker   //

// Prototypes
int clearScreen();             // clears the screen
int inputAndVerify(const char question[], char*&input);
int load(class question toFill[]);

// Classes
class question {
	public:
		question();
		~question();
		int addQuestion(char * & qIn, bool aIn);
		int display();
		int loadQA(char ques[], bool answ);
	private:
		char * q;
		bool a;
};
	
