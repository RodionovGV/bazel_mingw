#include <iostream>
#include <string>
#include <vector>

#include "info_build.h"
#include "func_other.h"
#include "driver_file/driver_file.h"
#include "logger/logger_header.h"

int test_info();

int main(int argc, char **argv)
{
    using namespace std; 
    cout << endl << "========== Start PROGRAMM ==========" << endl;
    test_info();
    
    log_init(); 
    log_baz("Test log message");

    driver_module();
    func_other_1(12);
    cout << "========== END PROGRAMM ==========" << endl;
  return(0);
}