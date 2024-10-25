# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++11 -Wall -g

# Google Test flags
GTEST_LIBS = -lgtest -lpthread

# Source files
SRCS = Transformer.cpp Autobot.cpp Decepticon.cpp test_transformers.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Executable name
TARGET = transformers

# Default rule
all: $(TARGET)

# Linking the object files to create the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(GTEST_LIBS)

# Compiling source files to object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up
clean:
	rm -f $(OBJS) $(TARGET)

# Run tests
run: $(TARGET)
	./$(TARGET)

.PHONY: all clean run