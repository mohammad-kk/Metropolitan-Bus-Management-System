#include "bus.h"
#include "functions.h"
#include <string>
#include <iostream>
#include<fstream>
int SIZE = 50;
using namespace std;

int main() {

	fstream inFile;
	string input;
	string temp;
	int i = 0;

	Bus * busArray[SIZE];
	for	(int i = 0; i < SIZE; i++){
		busArray[i] = nullptr;
	}

	inFile.open("C:\\COMCS200\\a4data.txt");
	if(inFile.fail()){
		cout << "Unsuccessful to open file" << endl;
		return -1;
	}

	getline(inFile,temp);
	while(!inFile.eof()){

		busArray[i] = new Bus(temp.substr(0,5), temp.substr(5,10),stoi(temp.substr(15,3)),stoi(temp.substr(18,7)),temp.c_str()[25]);
		i++;
		getline(inFile,temp);
	}

	display(busArray);
	do{
		cout << "Enter transaction code (D = display, L = list a bus, C=change, X=exit \n)";
		getline(cin,input);
		cout << input << endl;
		if(input.c_str()[0]== 'D'){
			display(busArray);
		}
		else if(input.c_str()[0] == 'L'){
			listt(busArray,input);
		}
		else if(input.c_str()[0] == 'C'){
			change(busArray,input);
		}
	}while(input.c_str()[0] != 'X');

	for(int i = 0; i<SIZE; i++){
		delete busArray[i];
	}
	cout << "Thank you and have a nice day!" << endl;
	inFile.close();
	return 0;
}


