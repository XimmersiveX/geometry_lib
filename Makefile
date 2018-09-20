INC = -Iinclude/

test: test.o geometry_lib.o
	g++ test.o geometry_lib.o -o test

test.o: test.cpp
	g++ $(INC) -c test.cpp -o test.o

geometry_lib.o: src/geometry_lib.cpp include/geometry_lib.h
	g++ $(INC) -c src/geometry_lib.cpp -o geometry_lib.o

clean:
	rm *.o