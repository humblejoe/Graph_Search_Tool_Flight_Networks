 #Executable names:
EXE = graphs
TEST = test

#Add all object files needed for compiling:
EXE_OBJ = main.o 
OBJS = main.o file_read.o BFS.o

#Generated files

#Use the cs225 makefile template:
include cs225/make/cs225.mk 	