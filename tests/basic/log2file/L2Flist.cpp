#include "include/log2file/log2file.hpp"
#include <vector>

int main(){
  std::vector<std::string> strings = { "hello", "world" };
  L2Flist("L2Flist", strings);
}
