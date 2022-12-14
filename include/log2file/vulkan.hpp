#pragma once
#include <fstream>
#include <vulkan/vulkan.h>

#ifndef L2F_OUTPUT_FILE
#define L2F_OUTPUT_FILE "./output.log"
#endif

// version
#ifdef DEBUG
#define VkL2Fversion(vkVersion) {uint32_t funcMajor = 0, funcMinor = 0, funcPatch = 0;\
  funcMajor = VK_API_VERSION_MAJOR(vkVersion);\
  funcMinor = VK_API_VERSION_MINOR(vkVersion);\
  funcPatch = VK_API_VERSION_PATCH(vkVersion);\
  \
  std::fstream outputFile;\
  outputFile.open(L2F_OUTPUT_FILE, std::ios::app);\
  outputFile << "\t" << "version" << ": " << funcMajor << '.' << funcMinor << '.' << funcPatch << std::endl;\
  outputFile.close();}
#endif
#ifndef DEBUG
#define VkL2Fversion(message)
#endif

// version
#ifdef DEBUG
#define VkL2FsubVersion(vkVersion) {uint32_t funcMajor = 0, funcMinor = 0, funcPatch = 0;\
  funcMajor = VK_API_VERSION_MAJOR(vkVersion);\
  funcMinor = VK_API_VERSION_MINOR(vkVersion);\
  funcPatch = VK_API_VERSION_PATCH(vkVersion);\
  \
  std::fstream outputFile;\
  outputFile.open(L2F_OUTPUT_FILE, std::ios::app);\
  outputFile << "\t\t" << "version" << ": " << funcMajor << '.' << funcMinor << '.' << funcPatch << std::endl;\
  outputFile.close();}
#endif
#ifndef DEBUG
#define VkL2Fversion(message)
#endif

#ifdef DEBUG
#define VkL2Fextensions(message, vkExtensions) {\
  std::fstream outputFile;\
  outputFile.open(L2F_OUTPUT_FILE, std::ios::app);\
  outputFile << "\t" << message << std::endl;\
  for (auto& extension : vkExtensions) {\
    outputFile << "\t\t" << extension.extensionName << std::endl;\
  }\
  outputFile.close();}
#endif
#ifndef DEBUG
#define VkL2Fversion(message)
#endif

#ifdef DEBUG
#define VkL2FsubExtensions(message, vkExtensions) {\
  std::fstream outputFile;\
  outputFile.open(L2F_OUTPUT_FILE, std::ios::app);\
  outputFile << "\t\t" << message << std::endl;\
  for (auto& extension : vkExtensions) {\
    outputFile << "\t\t\t" << extension.extensionName << std::endl;\
  }\
  outputFile.close();}
#endif
#ifndef DEBUG
#define VkL2Fversion(message)
#endif

