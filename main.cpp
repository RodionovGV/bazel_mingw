#include <iostream>
#include <string>
#include <vector>

#include "info_build.h"
#include "func_other.h"
#include "driver_file/driver_file.h"

int test_info();

int main(int argc, char **argv)
{
    using namespace std; 
    cout << endl << "========== Start PROGRAMM ==========" << endl;
    cout << "Hello" << endl;
    
    driver_module();
    func_other_1(10);
    
    test_info();
    cout << "========== END PROGRAMM ==========" << endl;
  return(0);
}
