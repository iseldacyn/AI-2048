docs:
	doxygen Doxyfile

main: main.o grid.o block.o
	g++ -g -o main main.o grid.o block.o && rm *.o

main.o: src/main.cpp
	g++ -g -c src/main.cpp

block.o: src/block.cpp
	g++ -g -c src/block.cpp

grid.o: src/grid.cpp
	g++ -g -c src/grid.cpp

clean:
	rm -f main *.o *.csv
