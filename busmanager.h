#include <string>
#include "Bus.h"
#include <iostream>
#include <string>
#include "functions.h"
//#include <iostream>
#include<fstream>
#ifndef BUSMANAGER_H_
#define BUSMANAGER_H_
using namespace std;
const int SIZE = 50;
class busManager{
  private:
   Bus * busArray[SIZE];
  char displayMenu;
  fstream inFile;
  public:
  busManager();
  char getdisplayMenu();
  void cleanup();
  ~busManager();

};

#endif