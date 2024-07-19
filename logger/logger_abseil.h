// AbseilLogger.h
#ifndef ABSEILLOGGER_H
#define ABSEILLOGGER_H

#include "Logger.h"
#include "absl/log/log.h"

class AbseilLogger : public Logger {
public:
    void log(const std::string &message) override {
        LOG(INFO) << message;
    }
};

#endif // ABSEILLOGGER_H
