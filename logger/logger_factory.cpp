// LoggerFactory.h
#ifndef LOGGERFACTORY_H
#define LOGGERFACTORY_H

#include "logger.h"
#include "logger_cout.h"
#include "logger_abseil.h"
#include "logger_header.h"

enum class LoggerType {
    Cout,
    Abseil
};

std::unique_ptr<Logger> logger = nullptr;

class LoggerFactory {
public:
    static std::unique_ptr<Logger> createLogger(LoggerType type) {
        if (type == LoggerType::Cout) {
            return std::make_unique<CoutLogger>();
        } else if (type == LoggerType::Abseil) {
            return std::make_unique<AbseilLogger>();
        }
        return nullptr;
    }
};

void log_init(){

    // Переключите между LoggerType::Cout и LoggerType::Abseil для выбора способа логирования
    #ifdef ABSL_ON
    LoggerType loggerType = LoggerType::Abseil;
    std::string name_logger = "[INFO] Logger is Abseil";
    #else
    LoggerType loggerType = LoggerType::Cout;
    std::string name_logger = "[INFO] Logger is Cout";
    #endif

    if (logger == nullptr){
        logger = LoggerFactory::createLogger(loggerType);
    }else{
        exit(0);
    }
    logger->init();
    logger->log("Init logger is done");
    logger->log(name_logger);
}

void log_baz(const std::string &message){
    if (logger){
        logger->log(message);
    }else{
        std::cout << "[FATAL] LOGGER NOT INITIALIZED!!!" << std::endl;
    }
}
#endif // LOGGERFACTORY_H
