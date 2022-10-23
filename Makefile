STD = -std=c++17

all: l2fvector

test: all
	./l2fvector

clean:
	rm output.log
	touch output.log
	rm l2fvector

l2fvector:
	g++ $(STD) tests/log2file/l2fvector.cpp -o l2fvector -DDEBUG
