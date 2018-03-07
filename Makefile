Ang: main.o file.o
	g++ -std=c++11 main.o file.o -o Ang

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

file.o: file.cpp file.h
	g++ -std=c++11 -c file.cpp

clean:
	rm *.o Ang
