all: test_main standard_main
test_main: test_main.cpp
	g++ -std=c++11 String.cpp test_main.cpp -o test_main
standard_main: standard_main.cpp
	g++ -std=c++11 String.cpp standard_main.cpp -o standard_main
