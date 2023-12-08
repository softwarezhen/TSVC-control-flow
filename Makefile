CC=/home/wz/gcc10.3.0/gcc10.3.0-bin/bin/gcc

vec-flag=-O3 -mavx2 #-ffast-math
novec-flag=-O3 -fno-tree-vectorize

dump-flag=-fopt-info-vec -fdump-tree-vect-details -fdump-tree-ifcvt-details
all:bin/tsvc-novec bin/tsvc-vec
#bin
bin/tsvc-novec:main.o tsvc-novec.o tsvc-verify.o
	$(CC) main.o tsvc-novec.o tsvc-verify.o -o bin/tsvc-novec
bin/tsvc-vec:main.o tsvc-vec.o tsvc-verify.o
	$(CC) main.o tsvc-vec.o tsvc-verify.o -o bin/tsvc-vec

#obj
main.o:main.c
	$(CC) -c $(novec-flag) main.c -o main.o
tsvc-verify.o:tsvc-verify.c
	$(CC) -c $(novec-flag) tsvc-verify.c -o tsvc-verify.o

tsvc-vec.o:tsvc.c
	$(CC) -c $(vec-flag)  tsvc.c -o tsvc-vec.o $(dump-flag)
tsvc-novec.o:tsvc.c
	$(CC) -c $(novec-flag) tsvc.c -o tsvc-novec.o

#clean
clean:
	rm -f *.o bin/tsvc-* tsvc.c.* *.s
