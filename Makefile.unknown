# Compiler
CXX := g++

# Compiler flags
CXXFLAGS := -std=c++11 -Wall -Wextra -O2

# Target executable
TARGET := hybrid_sort

# Source files
SRCS := main.cpp \
        Heapsort_Lib.cpp \
        Hybridsort.cpp \
        InsertionSort_Lib.cpp \
        Mergesort_Lib.cpp \
        Quicksort_Lib.cpp

# Header files
HDRS := Heapsort_Lib.h \
        Hybridsort.h \
        InsertionSort_Lib.h \
        Mergesort_Lib.h \
        Quicksort_Lib.h

# Object files
OBJS := $(SRCS:.cpp=.o)

# Default target
all: $(TARGET)

# Link the target executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Compile source files to object files
%.o: %.cpp $(HDRS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up build files
clean:
	rm -f $(TARGET) $(OBJS)

# Phony targets
.PHONY: all clean