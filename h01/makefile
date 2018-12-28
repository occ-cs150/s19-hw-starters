EXE = h01
CXX = @clang++
CXXFLAGS = -ggdb3 -O0 -std=c++14 -Wall -Wextra -Wshadow
LIBS = $(EXE)
SRC = $(EXE).cpp
OBJS = $(EXE).o

$(EXE): $(OBJS) makefile
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS) -L./ -l$(LIBS)

# Remove object files from folder
clean:
	rm -f core $(EXE) *.o

run: $(EXE)
	./$(EXE)

stest: $(EXE)
	@./$(EXE) $(EXE).tests

test: $(EXE)
	@./$(EXE) -t

submit: $(EXE)
	@./$(EXE) -t 1> /dev/null 2> junk.txt
	@curl -A "$$CS150KEY" --data "id=$$CS150USER&sid=$$CS150SID&data=`tail -n 1 junk.txt`" https://cs170-console.appspot.com/update
