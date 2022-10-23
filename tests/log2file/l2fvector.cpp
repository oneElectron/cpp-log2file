#include "../../include/log2file/log2file.hpp"
#include <vector>

int main(){
  L2Fstart("Hello");
  std::vector<std::string> strings = { "hello", "world", "!" };

  L2Flist(std::vector<std::string>, "strings", strings);
}
