# Compiler
CXX = g++

# Compilation flags
CXXFLAGS = -Werror -Wpedantic -Wall -I/usr/include/gtest

# Source files
SOURCES = Transformer.cpp Autobot.cpp Decepticon.cpp Minibot.cpp program.cpp
OBJECTS = $(SOURCES:.cpp=.o)

# Test files
TEST_SOURCES = test_transformers.cpp
TEST_OBJECTS = $(TEST_SOURCES:.cpp=.o)

# Executable files
TARGET = transformers
TEST_TARGET = test_transformers

# Default rule
all: $(TARGET) $(TEST_TARGET)

# Rule to build the main executable
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Rule to build the test executable
$(TEST_TARGET): $(TEST_OBJECTS) $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $(TEST_OBJECTS) Transformer.o Autobot.o Decepticon.o Minibot.o -lgtest -lpthread

# Rule to compile .cpp files into .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

# Rule to clean compiled files
clean:
	rm -f $(OBJECTS) $(TARGET) $(TEST_OBJECTS) $(TEST_TARGET)

.PHONY: all clean