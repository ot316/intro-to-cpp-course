
execute: TemperatureConverterSplit.o conversions.o
	g++ -g TemperatureConverterSplit.o conversions.o -o execute

TemperatureConverterSplit.o: TemperatureConverterSplit.cpp conversions.h
	g++ -Wall -g -c TemperatureConverterSplit.cpp

conversions.o: conversions.cpp conversions.h
	g++ -Wall -g -c conversions.cpp

clean:
	rm -f *.o execute
