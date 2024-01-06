#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

bool legalBrackets(string line);


int main( int argc , char *argv[]) {

	bool status;

	status = legalBrackets(argv[1]);

	if(argc > 2) {
		cout << argc << endl;
		return 0;
	}

	if(status == true) {
		cout << "legal" << endl;
	}
	else{
		cout << "illegal" << endl;
	}
		return 0;
}


bool legalBrackets(string line) {

	char brack[2] = {'[',']'};
	char paren[2] = {'(',')'};
	char curly[2] = {'{','}'};

	int size;
	int count = 0;

	size = line.size();

	char order[size];

	for (int i=0; i < line.size(); i++){

		if(line[i] == brack[0]){
			order[count] = line[i];
			count++;
		}

		if(line[i] == brack[1]){
			order[count] = line[i];
			count++;
		}

		if(line[i] == paren[0]){
			order[count] = line[i];
			count++;
		}

		if(line[i] == paren[1]){
			order[count] = line[i];
			count++;
		}

		if(line[i] == curly[0]){
			order[count] = line[i];
			count++;

		}

		if(line[i] == curly[1]){
			order[count] = line[i];
			count++;
		}

	}

	for (int j = 0; j < (size - count); j++) {
		
		if(order[j] == brack[0] && (order[j+1] == paren[1] || order[j+1] == curly[1])){
			return false;
		}

		else if(order[j] == paren[0] && (order[j+1] == brack[1] || order[j+1] == curly[1])){
			return false;
		}

		else if(order[j] == curly[0] && (order[j+1] == brack[1] || order[j+1] == paren[1])){
			return false;
		}
	}

	if(count%2 != 0){
		return false;
	}


	return true;

}







