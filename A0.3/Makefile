run-test: main.cpp foo.o bar.o
	g++ -std=c++11 -Wall -Werror main.cpp foo.o bar.o -o run-test
	./run-test

foo.o: foo.cpp
	g++ -std=c++11 -Wall -Werror -c foo.cpp

bar.o: bar.cpp
	g++ -std=c++11 -Wall -Werror -c bar.cpp

clean:
	-rm *.o run-test
