#include"header.h"
using namespace std;

//load ()
int load(question quiz[]) {

	ifstream file_in;
	int num = 0;
	char qIn[100];
	char aIn[100];
	bool bIn;

	file_in.open("Data.txt");
	if(!file_in) return 0;

	do
	{
		file_in.get(qIn, 99, '|');
		file_in.ignore(100, '|');

		file_in.get(aIn, 99, '|');
		file_in.ignore(100, '|');

		if(strcmp(aIn,"true")==0) bIn = true;
		if(strcmp(aIn,"false")==0) bIn = false;
		quiz[num].loadQA(qIn, bIn);
		++num;
	} while(!file_in.eof());
	file_in.close();

	return 0;
}
