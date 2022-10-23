#include <fstream>
#include <vulkan/vulkan.h>
#include <vector>

#ifndef L2F_OUTPUT_FILE
#define L2F_OUTPUT_FILE "./output.log"
#endif

namespace log2file {
namespace vulkan {

void version(uint32_t version) {
  uint32_t funcMajor = 0, funcMinor = 0, funcPatch = 0;
  funcMajor = VK_API_VERSION_MAJOR(version);
  funcMinor = VK_API_VERSION_MINOR(version);
  funcPatch = VK_API_VERSION_PATCH(version);

  std::fstream outputFile;
  outputFile.open(L2F_OUTPUT_FILE, std::ios::app);
  outputFile << "\t" << "version" << ": " << funcMajor << '.' << funcMinor << '.' << funcPatch << std::endl;
  outputFile.close();
}

template <class T> void extensions(std::string message, std::vector<T> extensions) {
  std::fstream outputFile;
  outputFile.open(L2F_OUTPUT_FILE, std::ios::app);
  outputFile << "\t" << message << ":" << "\n";
  for (VkExtensionProperties& iextension : extensions) {
      outputFile << "\t\t" << iextension.extensionName << "\n";
  }
  outputFile << std::endl;
  outputFile.close();
}


}  // namespace vulkan
}  // namespace log2file

// version
#ifdef DEBUG
#define VkL2Fversion(message) log2file::vulkan::version(message)
#endif
#ifndef DEBUG
#define VkL2Fversion(message)
#endif

// extensions
#ifdef DEBUG
#define VkL2Fextensions(message) log2file::vulkan::extensions(message)
#endif
#ifndef DEBUG
#define VkL2Fextensions(message)
#endif
