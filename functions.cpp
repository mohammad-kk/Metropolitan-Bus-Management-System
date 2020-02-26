#include "functions.h"



void listt(Bus array[],string x, int count){
	int i =0;
	int y = 0;
	while( i != count){
		if(array[i].getBusID() == x.substr(2,5)){
		cout << "=======================================================================\n";
		cout << "BUS ID\t\t" << "BUS MANUFACTURER\t" << "BUS CAPACITY\t" << "MILEAGE\t" <<setw(5) <<"Status" << endl;
	 	cout << "=======================================================================\n";
	 	cout << array[i].getBusID() << "\t\t" << array[i].getmanufacturer()
    	 	   	<< "\t\t" <<setw(5) <<array[i].getCapacity() << "\t\t"<<array[i].getMileage() << "\t" << setw(5) <<array[i].getStatus() << '\n';
	 	cout << "---end of list---" << endl;

				y++;
		 }
		 i++;
	 }
	 if(y <= 0)
		 cout << "Not Found" << endl;
}

void change(Bus array[],string x, int count){
	 int i = 0;
	 int y = 0;
	while(i != count){
		 if(array[i].getBusID() == x.substr(2,5)){
			 cout << "Change successful!" << endl;
			 array[i].setStatus(x.c_str()[8]);
			y++;
		 }
		 i++;
	}
	if(y <= 0)
	cout <<"not Found" << endl;
}

void display(Bus  array[], int count){
	int i = 0;
 	cout << "=======================================================================\n";
 	cout << "BUS ID\t\t" << "BUS MANUFACTURER\t" << "BUS CAPACITY\t" << "MILEAGE\t" <<setw(5) <<"Status" << endl;
 	cout << "=======================================================================\n";

	while(i != count){
	 	cout << array[i].getBusID() << "\t\t" << array[i].getmanufacturer()
	 		 << "\t\t" <<setw(5) <<array[i].getCapacity() << "\t\t"<<array[i].getMileage() << "\t" << setw(5) <<array[i].getStatus() << '\n';
		i++;

	}

	cout << "---end of list---" << endl;
}
void maint(Bus array[],string x, int count){
	 int i = 0;
	 int y = 0;
  string maintdate;
	string mainttype;
	string maintmech;

	 while(i != count){
		 if(array[i].getBusID() == x.substr(2,5)){
		 	 cout << "Please enter Enter date, type, and mechanic separated by spaces: ";
		 	  cin >> maintdate >> mainttype >> maintmech;
         array[i].maintHist[array[i].activeElements].maintdate = maintdate;
         array[i].maintHist[array[i].activeElements].mainttype = mainttype;
         array[i].maintHist[array[i].activeElements].maintmech = maintmech;
         array[i].activeElements++;
			y++;
		 }
		 i++;
	}
  if(y <= 0)
	cout <<"not Found" << endl;
}

void compare(Bus array[], int count){
  string x, y ;
  int a, b, num, i;
  cout << "Enter Bus ID for the first bus: ";
  cin >> x;
  cout << "Enter Bus ID for the second bus: ";
  cin >> y;
  i = 0;
  	while( i != count){
		 if(array[i].getBusID() == x ){
			 a = i;
       num++;
		 }
     if(array[i].getBusID() == y){
       b = i;
       num++;
     }
		 i++;
	}
  if(array[a].activeElements > array[b].activeElements){
    cout << "Bus " << x << " has more maintenance history then Bus\n" << y;
  }
  if(array[b].activeElements > array[a].activeElements){
    cout << "Bus " << y << " has more maintenance history then Bus\n" << x;
  }
  if(array[b].activeElements == array[a].activeElements){
    cout << " Both Busses have the same amount of maintenance history \n";
  }
  if(num <= 0){
    cout << " Your input was not valid, please try again  ";
  }
}
void mainthistory(Bus array[] ,int count){
  string x ;
  int i = 0;
  int y = 0;
  int num = 0;
  cout << "Enter Bus ID: ";
  cin >> x;
  while(i != count){
    if(array[i].getBusID() == x ){
      cout << array[i].activeElements; 
			 while(y != array[i].activeElements){
         cout <<"\nHistory Record: " <<array[i].maintHist[y].maintdate;
         cout <<" " <<array[i].maintHist[y].mainttype;
         cout <<" " <<array[i].maintHist[y].maintmech;
         y++;
       }
       num++;
		 }
  i++;
  }
  if(num <=0 ){
    cout << "This Bus ID was not valid";
  }
}
void average(Bus array[], int count){
  int x = 0;
  int total = 0;
  int buscount = 0;
  int average;
  while(x != count){
    buscount++;
    total += array[x].getMileage();
    x++;
  }
  average = total / count;
  Bus::setmaint(total, average , buscount);
  cout << "The Bus Count is: " << Bus::getavemileage();
  cout << "\nThe Average Mileage is: " << Bus::getbusCount() << endl;
}

/*
 * functions.cpp
 *
 *  Created on: Oct 26, 2019
 *      Author: Mohammad
 */


