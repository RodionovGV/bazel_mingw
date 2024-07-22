#include <iostream>
#include <string>
#include <vector>

#include "logger/logger_header.h"

int func_other_1(int i){
  std::cout << "Значение " << i << "\n";
  log_baz("Здесь тоже возможно использование логгера");
  return 0;
}