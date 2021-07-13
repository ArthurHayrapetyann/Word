
#This is a functional Bash instruction that combines all the files and executes them.

export EXE := ./bin/word
export source_files := $(wildcard ./src/*.cpp)
export obj_files := $(patsubst ./src/%.cpp, ./src/%.o, $(source_files))

$(EXE) : $(obj_files)
	g++ $^ -o $@
	rm ./src/*.o
./src/%.o : ./src/%.cpp
	g++ -c $^ -o $@
clean :
	rm -r  $(EXE)
