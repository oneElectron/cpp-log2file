STD = -std=c++17
CXX = g++
ARGS = -DDEBUG -I ./

default:
	@echo ""
	@echo "This is a makefile for testing purposes, if you are an end user you do not need this, just copy the include/log2file to your chosen include diretory or install it with a package manager"
	@echo ""
	@echo "make [test]"
	@echo ""
	@echo "tests:"
	@echo ""
	@echo "clean      > removes all test builds, and cleans output.log"
	@echo "all        > builds and runs all tests"
	@echo "log2file   > builds all log2file tests"
	@echo "vulkan     > builds all vulkan tests"

clean:
	@if [ -a output.log ]; then rm output.log; touch output.log; fi;
	@if [ -a log2file ]; then rm log2file; fi;
	@if [ -a vulkan ]; then rm vulkan; fi;

all: log2file vulkan
	./log2file
	./vulkan

log2file:
	$(CXX) $(STD) $(ARGS) -o log2file tests/log2file/log2file.cpp tests/log2file/newlines.cpp

vulkan: 
	$(CXX) $(STD) $(ARGS) -lvulkan tests/vulkan/vulkan.cpp -o vulkan

