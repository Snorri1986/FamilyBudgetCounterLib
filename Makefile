# Variables
CC = g++
#CXXFLAGS = -Wall -std=c++11 -g
CXXFLAGS = -std=c++11 -Wall -I./crow
LDFLAGS = 
SRC_DIR = src
OBJ_DIR = obj
TARGET = FamilyBudgetCountLib
#INCLUDES = -I ./crow

# Source and object files
SRCS = functionslib.cpp main.cpp 
OBJS = $(SRCS:.cpp=.o)

# Libraries to link (Crow may depend on Boost and pthread)
LIBS = -lboost_system -lpthread

# Default target
all: $(TARGET)

# Linking
$(TARGET): $(OBJS)
	$(CXX) $(LDFLAGS) -o $@ $^

# Compiling
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

# Clean up
clean:
	rm -rf $(OBJ_DIR) $(TARGET)

# Phony targets
.PHONY: all clean
