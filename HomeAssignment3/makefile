# Compiler
CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra -I/usr/include/gtest -pthread

# Directories
SRC_DIR = src
TEST_DIR = test
BUILD_DIR = build

# Source files
TRANSFORMER_SRC = $(SRC_DIR)/Transformer.cpp
AUTOBOT_SRC = $(SRC_DIR)/Autobot.cpp
DECEPTICON_SRC = $(SRC_DIR)/Decepticon.cpp
VEHICLETRANSFORMER_SRC = $(SRC_DIR)/VehicleTransformer.cpp
TEST_SRC = $(TEST_DIR)/test_transformers.cpp

# Object files
TRANSFORMER_OBJ = $(BUILD_DIR)/Transformer.o
AUTOBOT_OBJ = $(BUILD_DIR)/Autobot.o
DECEPTICON_OBJ = $(BUILD_DIR)/Decepticon.o
VEHICLETRANSFORMER_OBJ = $(BUILD_DIR)/VehicleTransformer.o
TEST_OBJ = $(BUILD_DIR)/test_transformers.o

# Executable names
TEST_EXEC = test_transformers

# Targets
all: $(TEST_EXEC)

# Create build directory if it doesn't exist
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Compile object files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(BUILD_DIR)/%.o: $(TEST_DIR)/%.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Link the test executable
$(TEST_EXEC): $(TRANSFORMER_OBJ) $(AUTOBOT_OBJ) $(DECEPTICON_OBJ) $(VEHICLETRANSFORMER_OBJ) $(TEST_OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Clean up build files
clean:
	rm -rf $(BUILD_DIR) $(TEST_EXEC)

.PHONY: all clean