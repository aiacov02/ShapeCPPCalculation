CXX = g++
CXXFlags = -Wextra -Wall -std=c++11

TARGET = my_program

SRCS = main.cpp circle.cpp rectangle.cpp
OBJS = main.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
