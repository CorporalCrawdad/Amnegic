amnegic : amnegic.o
	g++ amnegic.o -o amnegic

amnegic.o : amnegic.cpp
	g++ -c amnegic.cpp

clean :
	rm amnegic amnegic.o
