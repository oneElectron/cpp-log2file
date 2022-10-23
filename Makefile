STD = -std=c++17
CXX = g++
ARGS = -DDEBUG

all: L2Fstart L2Fsection L2FsubSection L2Flist

test: all
	./L2Fstart
	./L2Fsection
	./L2FsubSection
	./L2Flist

clean:
	@if [ -a output.log ]; then rm output.log; touch output.log; fi;
	@if [ -a L2Fstart ]; then rm L2Fstart; fi;
	@if [ -a L2Fsection ]; then rm L2Fsection; fi;
	@if [ -a L2FsubSection ]; then rm L2FsubSection; fi;
	@if [ -a L2Flist ]; then rm L2Flist; fi;

L2Fstart:
	$(CXX) $(STD) $(ARGS) tests/log2file/L2Fstart.cpp -o L2Fstart

L2Fsection:
	$(CXX) $(STD) $(ARGS) tests/log2file/L2Fsection.cpp -o L2Fsection

L2FsubSection:
	$(CXX) $(STD) $(ARGS) tests/log2file/L2FsubSection.cpp -o L2FsubSection

L2Flist:
	$(CXX) $(STD) $(ARGS) tests/log2file/L2Flist.cpp -o L2Flist
