// Logger.h
#ifndef LOGGER_H
#define LOGGER_H

#include <string>

class Logger {
public:
    virtual ~Logger() = default;
    virtual void log(const std::string &message) = 0;
    virtual void init() = 0;  // Метод инициализации
};



#endif // LOGGER_H
