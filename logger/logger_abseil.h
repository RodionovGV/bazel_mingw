// AbseilLogger.h

#include <iostream>

#include "logger.h"
#ifdef ABSL_ON
#include "absl/log/initialize.h"
#include "absl/log/globals.h"
#include <absl/log/log.h>
#endif

class AbseilLogger : public Logger {
public:
    void init() override{
        #ifdef ABSL_ON
        // Инициализация системы логгирования
        absl::InitializeLog();
        // Устанавливаем уровень логгирования. 
        // Все сообщения уровня INFO и выше будут выводиться.
        absl::SetStderrThreshold(absl::LogSeverity::kInfo);
        #else
            std::cout << "[ERROR] Abseil not support!";
        #endif
    }

    void log(const std::string &message) override {
        #ifdef ABSL_ON
        LOG(INFO) << message;
        #endif
    }
};


  // LOG(INFO) << "test";
  // LOG(INFO) << "test 2";
  // LOG(INFO) << hex << 0xdeadbeef;  // logs "0xdeadbeef"
  // LOG(INFO) << 0xdeadbeef;              // logs "3735928559"
  // // Примеры лог-сообщений
  // LOG(INFO) << "INFO";
  // LOG(WARNING) << "WARN";
  // LOG(ERROR) << "ERROR";
  //LOG(FATAL) << "Это критическая ошибка";  