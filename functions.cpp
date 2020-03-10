#include "functions.h"


void listt(Bus* array[],string x){
	int i =0;
	int y = 0;
	while( array[i] != nullptr){
		 if(array[i]->getBusID() == x.substr(2,5)){
		cout << "=======================================================================\n";
		cout << "BUS ID\t\t" << "BUS MANUFACTURER\t" << "BUS CAPACITY\t" << "MILEAGE\t" <<setw(5) <<"Status" << endl;
	 	cout << "=======================================================================\n";
	 	cout << array[i]->getBusID() << "\t\t" << array[i]->getmanufacturer()
    	 	   	<< "\t\t" <<setw(5) <<array[i]->getCapacity() << "\t\t"<<array[i]-> getMileage() << "\t" << setw(5) <<array[i]->getStatus() << '\n';
	 	cout << "---end of list---" << endl;

				y++;
		 }
		 i++;
	 }
	 if(y <= 0)
		 cout << "Not Found" << endl;
}

void change(Bus* array[],string x){
	 int i = 0;
	 int y = 0;
	while(array[i] != nullptr){
		 if(array[i]->getBusID() == x.substr(2,5)){
			 cout << "Change successful!" << endl;
			 array[i]->setStatus(x.c_str()[8]);
			y++;
		 }
		 i++;
	}
	if(y <= 0)
	cout <<"not Found" << endl;
}

void display(Bus * array[]){
	int i = 0;
 	cout << "=======================================================================\n";
 	cout << "BUS ID\t\t" << "BUS MANUFACTURER\t" << "BUS CAPACITY\t" << "MILEAGE\t" <<setw(5) <<"Status" << endl;
 	cout << "=======================================================================\n";

	while(array[i] != nullptr){
	 	cout << array[i]->getBusID() << "\t\t" << array[i]->getmanufacturer()
	 			<< "\t\t" <<setw(5) <<array[i]->getCapacity() << "\t\t"<<array[i]-> getMileage() << "\t" << setw(5) <<array[i]->getStatus() << '\n';
		i++;

	}

	cout << "---end of list---" << endl;
}
