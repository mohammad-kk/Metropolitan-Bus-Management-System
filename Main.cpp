//============================================================================
// Name        : KhanA6.cpp
// Author      : Mohammad Khan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Bus.h"
#include "busmanager.h"
#include "functions.h"
#include <string>
#include <iostream>
#include<fstream>
//int SIZE = 50;

using namespace std;

int main() {
  busManager bus;
  bus.getdisplayMenu();
  bus.cleanup();
	return 0;
};
