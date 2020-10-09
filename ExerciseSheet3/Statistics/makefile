
execute: statistics_test.o statistics.o
	g++ -g statistics_test.o statistics.o -o execute

statistics_test.o: statistics_test.cpp statistics.h
	g++ -Wall -g -c statistics_test.cpp

statistics.o: statistics.cpp statistics.h
	g++ -Wall -g -c statistics.cpp

clean:
	rm -f *.o execute
