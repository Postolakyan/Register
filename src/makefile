export E:=register
export C_files := $(wildcard *.cpp)
export o_files := $(patsubst %.cpp, %.o, $(C_files))

$E :$(o_files) 
	g++ $^ -o $E

%.o : %.cpp
	g++ -c $^ -o $@

clean :
	rm -r *.o $(Exe)
