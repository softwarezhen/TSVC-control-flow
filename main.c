#include"common.h"
int main(){
    mytype a[n],b[n],c[n],d[n],e[n],f[n],g[n],aa[nn][nn],bb[nn][nn],cc[nn][nn];
    for(int i=0;i<n;i++){
        a[i]=rand();b[i]=rand();c[i]=rand();d[i]=rand();e[i]=rand();f[i]=rand();g[i]=rand();
    }
    for(int i=0;i<nn;i++){
        for(int j=0;j<nn;j++){
            aa[i][j]=rand();bb[i][j]=rand();cc[i][j]=rand();
        }
    }
    struct timeval start,end;
    gettimeofday(&start,NULL);
    for(int i=0;i<run_times;i++){
        test(a,b,c,d,e,f,g,aa,bb,cc);
    }
    gettimeofday(&end,NULL);
    long timeuse=1000000*(end.tv_sec-start.tv_sec) + end.tv_usec-start.tv_usec;
    printf("time:%fs\n",timeuse/1000000.0);
    return 0;
}