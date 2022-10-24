STD = -std=c++17
CXX = g++
ARGS = -DDEBUG -I ./
L2F = ./tests/basic/log2file/
VkL2F = ./tests/basic/vulkan/

basic: L2Fstart L2Fsection L2FsubSection L2Flist L2Fvalue

vulkan: VkL2Fversion

test: basic
	./L2Fstart
	./L2Fsection
	./L2FsubSection
	./L2Flist
	./L2Fvalue

clean:
	@if [ -a output.log ]; then rm output.log; touch output.log; fi;
	@if [ -a L2Fstart ]; then rm L2Fstart; fi;
	@if [ -a L2Fsection ]; then rm L2Fsection; fi;
	@if [ -a L2FsubSection ]; then rm L2FsubSection; fi;
	@if [ -a L2Flist ]; then rm L2Flist; fi;
	@if [ -a L2Fvalue ]; then rm L2Fvalue; fi;

L2Fstart:
	$(CXX) $(STD) $(ARGS) $(L2F)L2Fstart.cpp -o L2Fstart

L2Fsection:
	$(CXX) $(STD) $(ARGS) $(L2F)L2Fsection.cpp -o L2Fsection

L2FsubSection:
	$(CXX) $(STD) $(ARGS) $(L2F)L2FsubSection.cpp -o L2FsubSection

L2Flist:
	$(CXX) $(STD) $(ARGS) $(L2F)L2Flist.cpp -o L2Flist

L2Fvalue:
	$(CXX) $(STD) $(ARGS) $(L2F)L2Fvalue.cpp -o L2Fvalue

# Vulkan
VkL2Fversion:
	$(CXX) $(STD) $(ARGS) -lvulkan $(VkL2F)VkL2Fversion.cpp -o VkL2Fversion
