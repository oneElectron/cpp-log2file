#include <fstream>
#include "include/log2file/log2file.hpp"
#include "newlines.hpp"

int main(){
  L2Fstart("Test has started");
  L2Fsection("Section");
  L2Flog("this is a log in a section");
  L2FsubSection("Sub section");
  L2FsubLog("this is a log in a subsection");
  printNewlines();
}
