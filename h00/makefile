EXE = h00
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
	@git add .*cpp .*h junk.txt > /dev/null 2 > errors.txt
	@git commit -m "auto commit `date +"%x %X"`"  > /dev/null 2 >> errors.txt
	@cat errors.txt 2> /dev/null
	@./$(EXE) -t
	@rm -rf errors.txt 2> /dev/null

submit: $(EXE)
	@./$(EXE) -t 1> /dev/null 2> junk.txt
	@git add .*cpp .*h junk.txt > /dev/null 2 > errors.txt
	@git commit -m "auto commit `date +"%x %X"`"  > /dev/null 2 >> errors.txt
	@git push > dev/null 2 >> errors.txt
	@cat errors.txt 2> /dev/null
	@curl -A "$$CS150KEY" --data "id=$$CS150USER&sid=$$CS150SID&data=`tail -n 1 junk.txt`" https://cs170-console.appspot.com/update
	@rm -rf errors.txt 2> /dev/null
