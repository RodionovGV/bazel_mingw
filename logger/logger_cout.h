// CoutLogger.h
#ifndef COUTLOGGER_H
#define COUTLOGGER_H

#include "Logger.h"
#include <iostream>

class CoutLogger : public Logger {
public:
    void log(const std::string &message) override {
        std::cout << message << std::endl;
    }
};

#endif // COUTLOGGER_H
