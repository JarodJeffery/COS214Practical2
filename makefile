run: main.o testable.o testDecorator.o beforeTest.o afterTest.o testBed.o test.o numericTest.o booleanTest.o calculator.o numericCalculator.o booleanCalculator.o
	g++ main.o testable.o testDecorator.o beforeTest.o afterTest.o testBed.o test.o numericTest.o booleanTest.o calculator.o numericCalculator.o booleanCalculator.o -o run

main: main.cpp testable.h beforeTest.h afterTest.h numericTest.h booleanTest.h numericCalculator.h booleanCalculator.h
	g++ -c main.cpp

testable: testable.cpp testable.h
	g++ -c testable.cpp

testDecorator: testDecorator.cpp testDecorator.h testable.h
	g++ -c testDecorator.
	
beforeTest: beforeTest.cpp beforeTest.h testDecorator.h
	g++ -c beforeTest.cpp

afterTest: afterTest.cpp afterTest.h testDecorator.h
	g++ -c afterTest.cpp

testBed: testBed.cpp testBed.h testable.h
	g++ -c testBed.cpp

test: test.cpp test.h testBed.h
	g++ -c test.cpp

numericTest: numericTest.cpp numericTest.h test.h
	g++ -c numericTest.cpp

booleanTest: booleanTest.cpp booleanTest.h test.h
	g++ -c booleanTest.cpp

calculator: calculator.cpp calculator.h
	g++ -c calculator.cpp

numericCalculator: numericCalculator.cpp numericCalculator.h calculator.h numericTest.h
	g++ -c numericCalculator.cpp

booleanCalculator: booleanCalculator.cpp booleanCalculator.h calculator.h booleanTest.h
	g++ -c booleanCalculator.cpp

clean:
	rm *.o run