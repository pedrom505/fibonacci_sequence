main: main.cpp
	g++ -o fibonacci.o main.cpp fibonacci.cpp

clean:
	rm fibonacci.o