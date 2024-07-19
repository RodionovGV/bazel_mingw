#include <iostream>
#include <string>
#include <vector>

#include "info_build.h"
#include "func_other.h"
#include "driver_file/driver_file.h"
#include "logger/logger_factory.h"

int test_info();

void log_test();

int main(int argc, char **argv)
{
    using namespace std; 
    cout << endl << "========== Start PROGRAMM ==========" << endl;
    cout << "Hello" << endl;
    
    driver_module();
    func_other_1(10);
    log_test(); 
    test_info();
    cout << "========== END PROGRAMM ==========" << endl;
  return(0);
}

void log_test(){
    // Переключите между LoggerType::Cout и LoggerType::Abseil для выбора способа логирования
    //LoggerType loggerType = LoggerType::Cout;
    LoggerType loggerType = LoggerType::Abseil;

    std::unique_ptr<Logger> logger = LoggerFactory::createLogger(loggerType);
    logger->log("This is a log message");
}