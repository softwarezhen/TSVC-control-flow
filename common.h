#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<sys/time.h>
#define mytype int
#define n 100000
#define nn 300
#define run_times 40000
extern void test(
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
);