#include <string>
#include <iostream>
#include "MaintHist.h"
#ifndef BUS_H_
#define BUS_H_
using namespace std;

class Bus{
private:
	string busID;
	string manufacturer;
	int	capacity;
	int mileage;
	char status;
	static int totalmileage;
	static int busCount;
	static int avemileage;
  
public:
	Bus();
	string getBusID();
	string getmanufacturer();
	int	getCapacity();
	int getMileage();
	char getStatus();
	void setStatus(char);
	void setBusId(string);
	void setManufacturer(string);
	void setcapacity(int);
	void setmileage(int);
	MaintHist maintHist[25];
	static void setmaint(int,int,int);
	int activeElements = 0;
	static int gettotalmileage();
	static int getbusCount();
	static int getavemileage();
};


#endif /* BUS_H_ */

