#include <iostream>
#include "absl/log/log.h"


void driver_module(){
  using namespace std;
  cout << "driver file run" << endl;
  LOG(INFO) << "Hello, Abseil logging!";
}