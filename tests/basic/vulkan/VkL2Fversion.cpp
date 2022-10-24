#include "include/log2file/log2file.hpp"
#include "include/log2file/vulkan.hpp"
#include <vulkan/vulkan.h>

int main(){
  uint32_t version;
  vkEnumerateInstanceVersion(&version);
  VkL2Fversion(version);
}
