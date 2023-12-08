#include"common.h"
void test(
    mytype a[],
    mytype b[],
    mytype c[],
    mytype d[],
    mytype e[],
    mytype f[],
    mytype g[],
    mytype aa[nn][nn],
    mytype bb[nn][nn],
    mytype cc[nn][nn]
){
    for(int i=0;i<n;i++){
        if(a[i]>c[i]){
            b[i]=c[i];
        }
        else{
            d[i]=e[i];
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]>c[i]){
            f[i]=c[i];
            if (f[i]!=b[i]){
                printf("ERR\n");
                break;
            }
        }
        else{
            g[i]=e[i];
            if (g[i]!=d[i]){
                printf("ERR\n");
                break;
            }
        }
    }
    return;
}
/*
/home/wz/gcc10.3.0/gcc10.3.0-bin/bin/gcc -c -O3 -mavx2\
 -fdump-tree-vect-details -fopt-info-vec \
 test.c -o test-vec.o -wrapper gdb,--args
*/
//481有好多控制流循环向量化