CXX = g++
CXXFLAGS = -std=c++17 -Wall

MAINFILE = separate-by-letter
FUNCTION = funciones

$(MAINFILE): $(MAINFILE).o $(FUNCTION).o
	$(CXX) $(CXXFLAGS) -o $@ $^

$(MAINFILE).o: $(MAINFILE).cc
	$(CXX) $(CXXFLAGS) -c $^



$(FUNCTION).o: $(FUNCTION).cc
	$(CXX) $(CXXFLAGS) -c $^

clean:
	rm $(MAINFILE) *.o 
