INCLUDE = $(shell pkg-config --cflags opencv)
LIBS = $(shell pkg-config --libs opencv)
SOURCES = main.cpp
OBJECTS = $(SOURCES:.cpp=.o)
TARGET = test
$(TARGET):$(OBJECTS)
	g++ -o $(TARGET) $(OBJECTS) $(INCLUDE) $(LIBS)
$(OBJECTS):$(SOURCES)
	g++ -c $(SOURCES)
clean:
	rm $(TARGETS) $(OBJECTS)
%.o:%.cpp
	g++ $(INCLUDE) -o $@ -c $<
