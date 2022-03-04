cmdReader: driver.o
	g++ -o cmdReader main.o
driver.o: main.cpp
	g++ -c main.cpp
clean:
	rm *.o cmdReader
