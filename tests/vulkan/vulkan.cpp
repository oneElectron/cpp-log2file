#include <fstream>
#include "include/log2file/log2file.hpp"
#include "include/log2file/vulkan.hpp"
#include <vulkan/vulkan.h>

int main(){
  L2Fnewline();
  L2Fsection("Begin vulkan tests")
  uint32_t version;
  vkEnumerateInstanceVersion(&version);
  VkL2Fversion(version);
}
