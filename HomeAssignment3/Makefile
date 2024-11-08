# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++17 -Wall -Wextra -I.

# Linker flags
LDFLAGS =

# Project name
TARGET = transformers

# Source files
SRCS = main.cpp transformer.cpp autobot.cpp decepticon.cpp \
       minicon.cpp instrument.cpp blaster.cpp blade.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Test source files (if you want to add Google Test later)
TEST_SRCS = test.cpp
TEST_OBJS = $(TEST_SRCS:.cpp=.o)

# Default target
all: $(TARGET)

# Linking the main executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

# Compiling source files to object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Test target (placeholder - modify if using Google Test)
test: $(TARGET)
	@echo "Running tests..."
	./$(TARGET)

# Clean up
clean:
	rm -f $(OBJS) $(TEST_OBJS) $(TARGET)

# Phony targets
.PHONY: all clean test