#include <string>
#include <iostream>
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
public:
	Bus();
	Bus(string,string,int,int,char);
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
};


#endif /* BUS_H_ */

