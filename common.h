#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>
#define mytype int
#define n 65536
#define nn 256
#define run_times 10000

extern void s161(mytype[], mytype[], mytype[], mytype[], mytype[], mytype[nn][nn], mytype[nn][nn], mytype[nn][nn]);
extern void s161_verify(mytype[], mytype[], mytype[], mytype[], mytype[], mytype[nn][nn], mytype[nn][nn], mytype[nn][nn]);
extern void s1161(mytype[], mytype[], mytype[], mytype[], mytype[], mytype[nn][nn], mytype[nn][nn], mytype[nn][nn]);
extern void s1161_verify(mytype[], mytype[], mytype[], mytype[], mytype[], mytype[nn][nn], mytype[nn][nn], mytype[nn][nn]);
extern void s162(mytype[], mytype[], mytype[], mytype[], mytype[], mytype[nn][nn], mytype[nn][nn], mytype[nn][nn]);
extern void s162_verify(mytype[], mytype[], mytype[], mytype[], mytype[], mytype[nn][nn], mytype[nn][nn], mytype[nn][nn]);
extern void s271(mytype[], mytype[], mytype[], mytype[], mytype[], mytype[nn][nn], mytype[nn][nn], mytype[nn][nn]);
extern void s271_verify(mytype[], mytype[], mytype[], mytype[], mytype[], mytype[nn][nn], mytype[nn][nn], mytype[nn][nn]);
extern void s272(mytype[], mytype[], mytype[], mytype[], mytype[], mytype[nn][nn], mytype[nn][nn], mytype[nn][nn]);
extern void s272_verify(mytype[], mytype[], mytype[], mytype[], mytype[], mytype[nn][nn], mytype[nn][nn], mytype[nn][nn]);
extern void s273(mytype[], mytype[], mytype[], mytype[], mytype[], mytype[nn][nn], mytype[nn][nn], mytype[nn][nn]);
extern void s273_verify(mytype[], mytype[], mytype[], mytype[], mytype[], mytype[nn][nn], mytype[nn][nn], mytype[nn][nn]);
extern void s274(mytype[], mytype[], mytype[], mytype[], mytype[], mytype[nn][nn], mytype[nn][nn], mytype[nn][nn]);
extern void s274_verify(mytype[], mytype[], mytype[], mytype[], mytype[], mytype[nn][nn], mytype[nn][nn], mytype[nn][nn]);
extern void s275(mytype[], mytype[], mytype[], mytype[], mytype[], mytype[nn][nn], mytype[nn][nn], mytype[nn][nn]);
extern void s275_verify(mytype[], mytype[], mytype[], mytype[], mytype[], mytype[nn][nn], mytype[nn][nn], mytype[nn][nn]);
extern void s276(mytype[], mytype[], mytype[], mytype[], mytype[], mytype[nn][nn], mytype[nn][nn], mytype[nn][nn]);
extern void s276_verify(mytype[], mytype[], mytype[], mytype[], mytype[], mytype[nn][nn], mytype[nn][nn], mytype[nn][nn]);
extern void s277(mytype[], mytype[], mytype[], mytype[], mytype[], mytype[nn][nn], mytype[nn][nn], mytype[nn][nn]);
extern void s277_verify(mytype[], mytype[], mytype[], mytype[], mytype[], mytype[nn][nn], mytype[nn][nn], mytype[nn][nn]);
extern void s278(mytype[], mytype[], mytype[], mytype[], mytype[], mytype[nn][nn], mytype[nn][nn], mytype[nn][nn]);
extern void s278_verify(mytype[], mytype[], mytype[], mytype[], mytype[], mytype[nn][nn], mytype[nn][nn], mytype[nn][nn]);
extern void s279(mytype[], mytype[], mytype[], mytype[], mytype[], mytype[nn][nn], mytype[nn][nn], mytype[nn][nn]);
extern void s279_verify(mytype[], mytype[], mytype[], mytype[], mytype[], mytype[nn][nn], mytype[nn][nn], mytype[nn][nn]);
extern void s1279(mytype[], mytype[], mytype[], mytype[], mytype[], mytype[nn][nn], mytype[nn][nn], mytype[nn][nn]);
extern void s1279_verify(mytype[], mytype[], mytype[], mytype[], mytype[], mytype[nn][nn], mytype[nn][nn], mytype[nn][nn]);
extern void s2710(mytype[], mytype[], mytype[], mytype[], mytype[], mytype[nn][nn], mytype[nn][nn], mytype[nn][nn]);
extern void s2710_verify(mytype[], mytype[], mytype[], mytype[], mytype[], mytype[nn][nn], mytype[nn][nn], mytype[nn][nn]);
extern void s2711(mytype[], mytype[], mytype[], mytype[], mytype[], mytype[nn][nn], mytype[nn][nn], mytype[nn][nn]);
extern void s2711_verify(mytype[], mytype[], mytype[], mytype[], mytype[], mytype[nn][nn], mytype[nn][nn], mytype[nn][nn]);
extern void s2712(mytype[], mytype[], mytype[], mytype[], mytype[], mytype[nn][nn], mytype[nn][nn], mytype[nn][nn]);
extern void s2712_verify(mytype[], mytype[], mytype[], mytype[], mytype[], mytype[nn][nn], mytype[nn][nn], mytype[nn][nn]);