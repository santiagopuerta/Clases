bin/programa:	obj/racional.o obj/programaracional.o
	g++ -o bin/programa obj/racional.o obj/programaconracional.o

obj/racional.o:	src/racional.cpp include/racional.h
	g++ -o obj/racional.o -c src/racional.cpp
	
obj/programaracional.o:	src/programaconracional.cpp include/racional.h
	g++ -o obj/programaconracional.o -c src/programaconracional.cpp -Iinclude

clean:
	rm obj/* bin/* lib/*
