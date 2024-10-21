# Compiler
CXX = g++
CXXFLAGS = -std=c++14 -Wall -Wextra -Iinclude

# Source files
TRANSFORMER_SRC = Transformer.cpp
AUTOBOT_SRC = Autobot.cpp
DECEPTICON_SRC = Decepticon.cpp
GUN_SRC = Gun.cpp  # Assuming you have a Gun class
WEAPON_SRC = Weapon.cpp  # Assuming you have a Weapon class

# Object files
TRANSFORMER_OBJ = Transformer.o
AUTOBOT_OBJ = Autobot.o
DECEPTICON_OBJ = Decepticon.o
GUN_OBJ = Gun.o
WEAPON_OBJ = Weapon.o

# Executable
EXECUTABLE = transformers

# Targets
all: $(EXECUTABLE)

$(EXECUTABLE): $(TRANSFORMER_OBJ) $(AUTOBOT_OBJ) $(DECEPTICON_OBJ) $(GUN_OBJ) $(WEAPON_OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(EXECUTABLE) $(TRANSFORMER_OBJ) $(AUTOBOT_OBJ) $(DECEPTICON_OBJ) $(GUN_OBJ) $(WEAPON_OBJ)

.PHONY: all clean