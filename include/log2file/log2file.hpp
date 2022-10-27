#pragma once

#ifndef L2F_OUTPUT_FILE
#define L2F_OUTPUT_FILE "./output.log"
#endif

// start
#ifdef DEBUG
#define L2Fstart(message) {std::fstream outputFile;\
    outputFile.open(L2F_OUTPUT_FILE, std::ios::out);\
    outputFile << message << std::endl << std::endl;\
    outputFile.close();}
#endif
#ifndef DEBUG
#define L2Fstart(message)
#endif

// section
#ifdef DEBUG
#define L2Fsection(sectionTitle) {std::fstream outputFile;\
    outputFile.open(L2F_OUTPUT_FILE, std::ios::app);\
    outputFile << "" << "-- " << sectionTitle << " --" << std::endl;\
    outputFile.close();}
#endif
#ifndef DEBUG
#define L2Fsection(sectionTitle)
#endif

// subSection
#ifdef DEBUG
#define L2FsubSection(sectionTitle) {std::fstream outputFile;\
    outputFile.open(L2F_OUTPUT_FILE, std::ios::app);\
    outputFile << "\t" << "-- " << sectionTitle << " --" << std::endl;\
    outputFile.close();}
#endif
#ifndef DEBUG
#define L2FsubSection(sectionTitle)
#endif

// subSection
#ifdef DEBUG
#define L2Fnewline() {std::fstream outputFile;\
    outputFile.open(L2F_OUTPUT_FILE, std::ios::app);\
    outputFile << std::endl;\
    outputFile.close();}
#endif
#ifndef DEBUG
#define L2Fnewline()
#endif

// log
#ifdef DEBUG
#define L2Flog(message) {std::fstream outputFile;\
    outputFile.open(L2F_OUTPUT_FILE, std::ios::app);\
    outputFile << "\t" << message << std::endl;\
    outputFile.close();}
#endif
#ifndef DEBUG
#define L2Flog(message)
#endif

// subLog
#ifdef DEBUG
#define L2FsubLog(message) {std::fstream outputFile;\
    outputFile.open(L2F_OUTPUT_FILE, std::ios::app);\
    outputFile << "\t\t\t" << message << std::endl;\
    outputFile.close();}
#endif
#ifndef DEBUG
#define L2FsubLog(message)
#endif

// logValue
#ifdef DEBUG
#define L2Fvalue(message, value) {std::fstream outputFile;\
    outputFile.open(L2F_OUTPUT_FILE, std::ios::app);\
    outputFile << "\t" << message << value << std::endl;\
    outputFile.close();}
#endif
#ifndef DEBUG
#define L2FlogValue(type, message, value)
#endif

// logSubValue
#ifdef DEBUG
#define L2FsubValue(message, value) {std::fstream outputFile;\
    outputFile.open(L2F_OUTPUT_FILE, std::ios::app);\
    outputFile << "\t\t" << message << value << std::endl;\
    outputFile.close();}
#endif
#ifndef DEBUG
#define L2FsubLogValue(type, message, value)
#endif

// list
#ifdef DEBUG
#define L2Flist(message, list) {std::fstream outputFile;\
  outputFile.open(L2F_OUTPUT_FILE, std::ios::app);\
  outputFile << "\t" << message << ":" << "\n";\
  for (auto& item : list) {\
      outputFile << "\t\t" << item << "\n";\
  }\
  outputFile << std::endl;\
  outputFile.close();}
#endif
#ifndef DEBUG
#define L2Flist(type, message, list)
#endif

