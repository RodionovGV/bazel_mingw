// LoggerFactory.h
#ifndef LOGGERFACTORY_H
#define LOGGERFACTORY_H

#include "Logger.h"
#include "logger_cout.h"
#include "logger_abseil.h"

enum class LoggerType {
    Cout,
    Abseil
};

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

#endif // LOGGERFACTORY_H
