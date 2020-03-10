#include "busmanager.h"
#include <cstdlib>

busManager::busManager(){
  string temp;
	int i = 0;

	for	(int i = 0; i < SIZE; i++){
		busArray[i] = nullptr;
	}

	inFile.open("C:\\COMCS200\\a4data.txt");
	if(inFile.fail()){
		cout << "Unsuccessful to open file" << endl;
    exit(1);
	}

	getline(inFile,temp);
	while(!inFile.eof()){
		busArray[i] = new Bus(temp.substr(0,5), temp.substr(5,10),stoi(temp.substr(15,3)),stoi(temp.substr(18,7)),temp.c_str()[25]);
		i++;
		getline(inFile,temp);
	}
};

char busManager::getdisplayMenu(){
  string input;
	do{
		cout << "Enter transaction code (D = display, L = list a bus, C=change, X=exit \n)";
		getline(cin,input);
		cout << input << endl;
		if(input.c_str()[0]== 'D'){
			display(busManager::busArray);
		}
		else if(input.c_str()[0] == 'L'){
			listt(busManager::busArray,input);
		}
		else if(input.c_str()[0] == 'C'){
			change(busManager::busArray,input);
		}
	}while(input.c_str()[0] != 'X');

  return input.c_str()[0];
};
void busManager::cleanup(){
  for(int i = 0; i<SIZE; i++){
    delete busManager::busArray[i];
  //cout << "Thank you and have a nice day!" << endl;
	inFile.close();
  }
}
busManager::~busManager(){
  cout << "Thanks you and Have a nice day!" << endl;
}

