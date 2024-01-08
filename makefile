#automate the.o xw<x build process
#.o file depends on .c file

# file1.o : file1.c // file1.o depends on file1.c this is called a rule
# c++ fike.cpp // explain how to generare file1.o 

#file we are going to create (a.out)

intra: intra.o
	c++ intra.cpp -o intra

intra.o: intra.cpp
	c++ -c intra.cpp

#c is a flag

clean:
	rm intra.o intra
