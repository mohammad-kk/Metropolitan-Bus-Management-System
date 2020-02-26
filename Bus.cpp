#include <iostream>
#include <string>
#include "Bus.h"
using namespace std;

int Bus::totalmileage = 0;
int Bus::busCount = 0;
int Bus::avemileage = 0;



Bus::Bus(){
	activeElements = 0;
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
void Bus::setBusId(string x){
	busID = x;
}
void Bus::setManufacturer(string x){
	manufacturer = x;
}
void Bus::setcapacity(int x){
	capacity = x;
}
void Bus::setmileage(int x){
	mileage = x;
}
void Bus::setmaint(int x, int y, int z){
	totalmileage = x;
	busCount = y;
	avemileage = z;
}
int Bus::gettotalmileage(){
	return Bus::totalmileage;
}
int Bus::getbusCount(){
	return Bus::busCount;
}
int Bus::getavemileage(){
	return Bus::avemileage;
}
