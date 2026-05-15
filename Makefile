CXX ?= c++
CXXFLAGS ?= -std=c++17 -Wall -Wextra -pedantic -O2
LDFLAGS ?=

BIN := office-outline
SRC := src/office_outline.cpp src/xml.cpp
OBJ := $(SRC:.cpp=.o)

.PHONY: all clean test-docx

all: $(BIN)

$(BIN): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) $(LDFLAGS) -o $@

%.o: %.cpp src/xml.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

test-docx: $(BIN)
	bash scripts/test_docx.sh ./$(BIN)

clean:
	rm -f $(BIN) $(OBJ)
