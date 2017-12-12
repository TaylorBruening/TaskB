#makefile for Taylor Bruening PartB

all: count

count: counter.o
	g++ -o count counter.o

counter.o: counter.cc
	g++ -c counter.cc
doc:
	doxygen Doxyfile
	rm -r latex/
clean :
	rm -f *.o Counter
