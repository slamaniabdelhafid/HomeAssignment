# Compiler
CXX = g++

# Compilation flags
CXXFLAGS = -Werror -Wpedantic -Wall -I/usr/include/gtest

# Source files
SOURCES = Transformer.cpp Autobot.cpp Decepticon.cpp
OBJECTS = $(SOURCES:.cpp=.o)

# Test files
TEST_SOURCES = test_transformers.cpp
TEST_OBJECTS = $(TEST_SOURCES:.cpp=.o)

# Executable files
TEST_TARGET = test_transformers

# Default rule
all: $(TEST_TARGET)

# Rule to build the test executable
$(TEST_TARGET): $(TEST_OBJECTS) $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^ -lgtest -lpthread

# Rule to compile .cpp files into .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

# Rule to clean compiled files
clean:
	rm -f $(OBJECTS) $(TEST_TARGET)

.PHONY: all clean