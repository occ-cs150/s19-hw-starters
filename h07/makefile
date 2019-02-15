EXE = h07
CXX = @g++
CXXFLAGS = -ggdb3 -O0 -std=c++14 -Wall -Wextra -Wshadow
LIBS = $(EXE)
SRC = $(EXE).cpp
OBJS = $(EXE).o

$(EXE): $(OBJS) makefile
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS) -L./ -l$(LIBS)

# Remove object files from folder
clean:
	rm -f core $(EXE) *.o

lint:
	clang++ --analyze $(EXE).cpp

run: $(EXE)
	./$(EXE)

debug: $(EXE)
	debug50 ./$(EXE)

stest: $(EXE)
	./$(EXE)  < test-input

test: $(EXE)
	@git add $(SRC) > /dev/null 2> errors.txt; true
	@git commit -m "auto commit `date +"%x %X"`"  > /dev/null 2>> errors.txt; true
	@cat errors.txt 2> /dev/null; true
	./$(EXE) -t
	@rm -f errors.txt 2> /dev/null; true

submit: $(EXE)
	@./$(EXE) -t 1> /dev/null 2> results.txt
	@git add $(SRC) results.txt > /dev/null 2> errors.txt
	@git commit -m "auto commit `date +"%x %X"`"  > /dev/null 2>> errors.txt
	@git push > /dev/null 2>> errors.txt
	@cat errors.txt 2> /dev/null
	@curl -A "$$CS150KEY" --data "id=$$CS150USER&sid=$$CS150SID&data=`tail -n 1 results.txt`" https://cs170-console.appspot.com/update
	@rm -rf errors.txt 2> /dev/null
