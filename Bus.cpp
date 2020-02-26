#include "Bus.h"
#include <iostream>
#include <string>
using namespace std;

Bus::Bus(string bus,string manu,int cap,int miles,char stat){
	busID = bus;
	manufacturer = manu;
	capacity = cap;
	mileage = miles;
	status = stat;
}
int Bus::getMileage(){
	return mileage;
}
char Bus::getStatus(){
	return status;
}
void Bus::setStatus(char x){
	status = x;
}
string Bus::getBusID(){
	return busID;
}
string Bus::getmanufacturer(){
	return manufacturer;
}
int	Bus::getCapacity(){
	return capacity;
}

