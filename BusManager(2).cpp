#include <string>
#include <iostream>
#include<fstream>
#include "Bus.h"
#include "functions.h"
int SIZE = 50;
using namespace std;
// banana
int main() {
	int size = 50;
	fstream inFile;
	string input;
	string temp;
	int i = 0;
	int count = 0;
	string busIDtmp;
	string manufacturertmp;
	Bus busArray[size];


	inFile.open("C:\\COMCS200\\a4data.txt");
	if(inFile.fail()){
		cout << "Unsuccessful to open file" << endl;
		return -1;
	}

	getline(inFile,temp);
	while(!inFile.eof()){

		busArray[i].setBusId(temp.substr(0,5));
		busArray[i].setManufacturer(temp.substr(5,10));
		busArray[i].setcapacity(stoi(temp.substr(15,3)));
		busArray[i].setmileage(stoi(temp.substr(18,7)));
		busArray[i].setStatus(temp.c_str()[25]);
		i++;
		getline(inFile,temp);
	}
	count = i;

	display(busArray, count);
// Banana
	while(input.c_str()[0] != 'X'){
		cout << "Enter transaction code (D = display, L = list a bus, C=change, m= Maintenance record,l = Maintenance History, a = Average Mileage, X=exit \n)";
		getline(cin,input);
		cout << input << endl;
		if(input.c_str()[0]== 'D'){
			display(busArray, count);
		}
		else if(input.c_str()[0] == 'L'){
			listt(busArray,input, count);
		}
		else if(input.c_str()[0] == 'C'){
			change(busArray,input, count);
		}
		else if(input.c_str()[0] == 'm'){
		maint(busArray,input,count); // there is a kludge in this function, that makes it output the menu twice
		}
    else if(input.c_str()[0] == 'c'){
		compare(busArray,count);
		}
    else if(input.c_str()[0] == 'l'){
		mainthistory(busArray,count);
		}
    else if(input.c_str()[0] == 'a'){
      average(busArray, count);
    }
	};


	cout << "Thank you and have a nice day!" << endl;
	inFile.close();
	return 0;
}
