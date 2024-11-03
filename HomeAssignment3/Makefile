IDIR=.
CXX=g++
CXXFLAGS=-I$(IDIR) -std=c++11
LDFLAGS=-lgtest -lgtest_main -lpthread
OBJECT_FILES=Vehicle.o Car.o Truck.o Engine.o main.o test.o
PROJECT=main test
DEPS=Vehicle.h Car.h Truck.h Engine.h

default: all

all: $(PROJECT)

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

main: $(OBJECT_FILES)
	$(CXX) -o $@ $(filter-out test.o, $^) $(LDFLAGS)

test: $(OBJECT_FILES)
	$(CXX) -o $@ $(filter-out main.o, $^) $(LDFLAGS)

clean:
	rm -f $(PROJECT) *.o