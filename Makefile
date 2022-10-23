STD = -std=c++17

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
	g++ $(STD) tests/log2file/L2Fstart.cpp -o L2Fstart -DDEBUG

L2Fsection:
	g++ $(STD) tests/log2file/L2Fsection.cpp -o L2Fsection -DDEBUG

L2FsubSection:
	g++ $(STD) tests/log2file/L2FsubSection.cpp -o L2FsubSection -DDEBUG

L2Flist:
	g++ $(STD) tests/log2file/L2Flist.cpp -o L2Flist -DDEBUG
