CC=/home/wz/gcc10.3.0/gcc10.3.0-bin/bin/gcc
target=tsvc
DIR=bin
vec-flag=-O3 -mavx2 #-ffast-math
novec-flag=-O3 -fno-tree-vectorize
dump-flag=-fopt-info-vec -fdump-tree-vect-details -fdump-tree-ifcvt-details
all:$(DIR)/$(target)-novec $(DIR)/$(target)-vec
#bin
$(DIR)/$(target)-novec:main.o $(target)-novec.o
	$(CC) main.o $(target)-novec.o -o $(DIR)/$(target)-novec
$(DIR)/$(target)-vec:main.o $(target)-vec.o
	$(CC) main.o $(target)-vec.o -o $(DIR)/$(target)-vec

#obj
main.o:main.c
	$(CC) -c main.c -o main.o

$(target)-vec.o:$(target).c
	$(CC) -c $(vec-flag)  $(target).c -o $(target)-vec.o $(dump-flag)
$(target)-novec.o:$(target).c
	$(CC) -c $(novec-flag) $(target).c -o $(target)-novec.o

#clean
clean:
	rm -f *.o $(DIR)/$(target)-* $(target)-* $(target).c.* *.s
