#include <fstream>

#ifndef L2F_OUTPUT_FILE
#define L2F_OUTPUT_FILE "./output.log"
#endif

namespace log2file {
void start(std::string message) { // erases the file and prints a message
    std::fstream outputFile;
    outputFile.open(L2F_OUTPUT_FILE, std::ios::out);
    outputFile << message << std::endl << std::endl;
    outputFile.close();
}

void section(std::string sectionTitle) {
    std::fstream outputFile;
    outputFile.open(L2F_OUTPUT_FILE, std::ios::app);
    outputFile << "-- " << sectionTitle << " --" << std::endl;
    outputFile.close();
}

void subSection(std::string sectionTitle) {
    std::fstream outputFile;
    outputFile.open(L2F_OUTPUT_FILE, std::ios::app);
    outputFile << "\t" << "-- " << sectionTitle << " --" << std::endl;
    outputFile.close();
}

void newline() {
    std::fstream outputFile;
    outputFile.open(L2F_OUTPUT_FILE, std::ios::app);
    outputFile << std::endl;
    outputFile.close();
}

void log(std::string message) {
    std::fstream outputFile;
    outputFile.open(L2F_OUTPUT_FILE, std::ios::app);
    outputFile << "\t" << message << std::endl;
    outputFile.close();
}

void subLog(std::string message) {
    std::fstream outputFile;
    outputFile.open(L2F_OUTPUT_FILE, std::ios::app);
    outputFile << "\t" << message << std::endl;
    outputFile.close();
}

template <class T> void logValue(std::string message, T value) {
    std::fstream outputFile;
    outputFile.open(L2F_OUTPUT_FILE, std::ios::app);
    outputFile << "\t" << message << ": " << value << std::endl;
    outputFile.close();
}

template <class T> void subLogValue(std::string message, T value) {
    std::fstream outputFile;
    outputFile.open(L2F_OUTPUT_FILE, std::ios::app);
    outputFile << "\t\t" << message << ": " << value << std::endl;
    outputFile.close();
}
}  // namespace log2file

// start
#ifdef DEBUG
#define L2Fstart(message) log2file::start(message)
#endif
#ifndef DEBUG
#define L2Fstart(message)
#endif

// section
#ifdef DEBUG
#define L2Fsection(sectionTitle) log2file::section(sectionTitle)
#endif
#ifndef DEBUG
#define L2Fsection(sectionTitle)
#endif

// subSection
#ifdef DEBUG
#define L2FsubSection(sectionTitle) log2file::subSection(sectionTitle)
#endif
#ifndef DEBUG
#define L2FsubSection(sectionTitle)
#endif

// subSection
#ifdef DEBUG
#define L2Fnewline() log2file::newline()
#endif
#ifndef DEBUG
#define L2Fnewline()
#endif

// log
#ifdef DEBUG
#define L2Flog(message) log2file::log(message)
#endif
#ifndef DEBUG
#define L2Flog(message)
#endif

// subLog
#ifdef DEBUG
#define L2FsubLog(message) log2file::subLog(message)
#endif
#ifndef DEBUG
#define L2FsubLog(message)
#endif

// logValue
#ifdef DEBUG
#define L2FlogValue(message, value) log2file::logValue(message, value)
#endif
#ifndef DEBUG
#define L2FlogValue(message, value)
#endif

// logValue
#ifdef DEBUG
#define L2FsubLogValue(message, value) log2file::subLogValue(message, value)
#endif
#ifndef DEBUG
#define L2FsubLogValue(message, value)
#endif
