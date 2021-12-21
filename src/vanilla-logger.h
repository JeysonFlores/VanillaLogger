#pragma once

#include <iomanip>

#define INIT_LOGGER using namespace VanillaLogger; using VanillaLogger::LoggerLevel;

namespace VanillaLogger {

enum LoggerLevel {
    ALERT,
    ERROR,
    INFO,
    SUCCESS,
    WARNING
};

void LOG(VanillaLogger::LoggerLevel level, std::string information) {
    std::time_t t = std::time(nullptr);
    std::tm time = *std::localtime(&t);
    std::string code = "";

    switch (level) {
        case (VanillaLogger::LoggerLevel::ALERT):
            code = "\u001b[31;1mALERT\u001b[0m";
            break;
        case (VanillaLogger::LoggerLevel::ERROR):
            code = "\u001b[31mERROR\u001b[0m";
            break;
        case (VanillaLogger::LoggerLevel::INFO):
            code = "\u001b[36mINFO\u001b[0m";
            break;
        case (VanillaLogger::LoggerLevel::SUCCESS):
            code = "\u001b[32mSUCCESS\u001b[0m";
            break;
        case (VanillaLogger::LoggerLevel::WARNING):
            code = "\u001b[33mWARNING\u001b[0m";
            break;
        default:
            code = "\u001b[30;1mNO SPECIFIED\u001b[0m";
    }

    std::cout << "\u001b[33;1m[" << std::put_time(&time, "%c %Z") << "]\u001b[0m - " << code << " " << information << std::endl;
}

}