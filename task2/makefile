run: main.o individual.o component.o orgStructure.o
	g++ main.o individual.o component.o orgStructure.o -o run

main: main.cpp individual.h component.h orgStructure.h
	g++ -c main.cpp

component: component.cpp component.h
	g++ -c component.cpp

individual: individual.cpp individual.h component.h
	g++ -c individual.cpp

orgStructure: orgStructure.cpp orgStructure.h component.h
	g++ -c orgStructure.cpp
	
clean:
	rm *.o run