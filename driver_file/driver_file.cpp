#include <iostream>


#include "logger/logger_header.h"

void driver_module(){
  using namespace std;
  cout << "Cout test" << endl;
  cerr << "Cerr test" << endl;
  log_baz("[INFO] Driver module");
  return;  
}