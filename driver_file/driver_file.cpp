#include <iostream>

void driver_module(){
  using namespace std;
  #if ABSL_DEFINE == 2
  cout << "ABSEIL ON" << endl;
  #endif
  #if ABSL_DEFINE == 1
  cout << "ABSEIL OFF" << endl;
  #endif
  #if ABSL_DEFINE == 0
  cout << "driver file run 0" << endl;
  #endif
}