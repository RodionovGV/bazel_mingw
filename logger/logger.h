// Logger.h
#ifndef LOGGER_H
#define LOGGER_H

#include <string>

class Logger {
public:
    virtual ~Logger() = default;
    virtual void log(const std::string &message) = 0;
};

#endif // LOGGER_H
