#include <fstream>
#include <vector> // for testing L2Flist
#include "include/log2file/log2file.hpp"
#include "newlines.hpp"

int main(){
  int x = 5;
  L2Fstart("Test has started");
  L2Fsection("Section");
  L2Flog("this is a log in a section");
  L2FsubSection("Sub section");
  L2FsubLog("this is a log in a subsection");
  printNewlines();

  L2Fvalue("x", x);
  L2FsubValue("x", x);
}
__cpp_lib_integral_constant_callablelllllllllllll
