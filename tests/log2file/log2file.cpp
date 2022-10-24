#include <fstream>
#include <vector>
#include "include/log2file/log2file.hpp"
#include "newlines.hpp"

int main(){
  std::vector<std::string> stri = { "Hello", "World" };
  L2Fstart("Test has started");
  L2Fsection("Section");
  L2Flog("this is a log in a section");
  L2FsubSection("Sub section");
  L2FsubLog("this is a log in a subsection");
  printNewlines();
  L2Fsection("some values");
  L2Fvalue("[0]", stri[0]);
  L2FsubValue("[1]", stri[1]);
  L2Flist("here's a list", stri);
}
