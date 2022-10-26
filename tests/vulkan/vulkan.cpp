#include <fstream>
#include "include/log2file/log2file.hpp"
#include "include/log2file/vulkan.hpp"
#include <vulkan/vulkan.h>
#include <vector>

int main(){
  L2Fnewline();
  L2Fsection("Begin vulkan tests")
  uint32_t version;
  vkEnumerateInstanceVersion(&version);
  VkL2Fversion(version);

  uint32_t instanceExtensionCount = 0;

  std::vector<VkExtensionProperties> instanceExtensions;

  vkEnumerateInstanceExtensionProperties(NULL, &instanceExtensionCount, nullptr);
  instanceExtensions.resize(instanceExtensionCount);
  vkEnumerateInstanceExtensionProperties(nullptr, &instanceExtensionCount, instanceExtensions.data());

  VkL2Fextensions("availible instance extensions:", instanceExtensions);
  VkL2FsubExtensions("availible instance extensions", instanceExtensions);
}
