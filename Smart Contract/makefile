CXX = g++
CXXFLAGS = -std=c++11 -Wall

# List of object files
OBJS = Accepted.o Completed.o Contract.o Negotiation.o Rejected.o TentativelyAccepted.o main.o

# Default target
all: main

main: $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) main
