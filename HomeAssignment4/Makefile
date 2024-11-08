# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++17 -Wall -Wextra -Werror -Wpedantic

# Directories
SRCDIR = .
OBJDIR = .

# Source files
SRCS = main.cpp transformer.cpp autobot.cpp decepticon.cpp \
       minicon.cpp instrument.cpp blade.cpp blaster.cpp test.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Executable name
TARGET = transformers_program

# Default target
all: $(TARGET)

# Linking the program
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compiling source files to object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up
clean:
	rm -f $(OBJS) $(TARGET)

# Phony targets
.PHONY: all clean