#include <iostream>
#ifdef ABSL_ON
#include "absl/log/initialize.h"
#include "absl/log/globals.h"
#include <absl/log/log.h>
#endif

void driver_module(){
  using namespace std;
  #ifdef ABSL_ON
  cout << "ABSEIL ON" << endl;
  // Инициализация системы логгирования
  absl::InitializeLog();
  // Устанавливаем уровень логгирования. 
  // Все сообщения уровня INFO и выше будут выводиться.
  absl::SetStderrThreshold(absl::LogSeverity::kInfo);
  cout << "Cout test" << endl;
  cerr << "Cerr test" << endl;
  LOG(INFO) << "test";
  LOG(INFO) << "test 2";
  LOG(INFO) << hex << 0xdeadbeef;  // logs "0xdeadbeef"
  LOG(INFO) << 0xdeadbeef;              // logs "3735928559"
  // Примеры лог-сообщений
  LOG(INFO) << "INFO";
  LOG(WARNING) << "WARN";
  LOG(ERROR) << "ERROR";
  //LOG(FATAL) << "Это критическая ошибка";  
  #endif
  #if ABSL_OFF
  cout << "ABSEIL OFF" << endl;
  #endif
  #if ABSL_DEFINE == 0
  cout << "driver file run 0" << endl;
  #endif
  
  return;  
}