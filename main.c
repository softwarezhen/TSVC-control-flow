#include "common.h"
mytype a[n], b[n], c[n], d[n], e[n], ff[nn][nn], gg[nn][nn], hh[nn][nn];
mytype va[n], vb[n], vc[n], vd[n], ve[n], vff[nn][nn], vgg[nn][nn], vhh[nn][nn];
void init_arr()
{
    srand(time(0));
// -1000 ~ 1000
#define VAL (rand() % 2000 - 1000)

    for (int i = 0; i < n; i++)
    {
        a[i] = VAL;
        b[i] = VAL;
        c[i] = VAL;
        d[i] = VAL;
        e[i] = VAL;
        va[i] = a[i];
        vb[i] = b[i];
        vc[i] = c[i];
        vd[i] = d[i];
        ve[i] = e[i];
    }
    for (int i = 0; i < nn; i++)
    {
        for (int j = 0; j < nn; j++)
        {
            ff[i][j] = VAL;
            gg[i][j] = VAL;
            hh[i][j] = VAL;
            vff[i][j] = ff[i][j];
            vgg[i][j] = gg[i][j];
            vhh[i][j] = hh[i][j];
        }
    }
#undef VAL
}
int verify_arr()
{
    for (int i = 0; i < n; i++)
    {
        if (va[i] != a[i] || vb[i] != b[i] || vc[i] != c[i] || vd[i] != d[i] || ve[i] != e[i])
        {
            return 0;
        }
    }
    for (int i = 0; i < nn; i++)
    {
        for (int j = 0; j < nn; j++)
        {
            if (vff[i][j] != ff[i][j] || vgg[i][j] != gg[i][j] || vhh[i][j] != hh[i][j])
            {
                return 0;
            }
        }
    }
    return 1;
}
void run_tsvc(void (*func)(mytype[], mytype[], mytype[], mytype[], mytype[], mytype[nn][nn], mytype[nn][nn], mytype[nn][nn]),
              void (*func_verify)(mytype[], mytype[], mytype[], mytype[], mytype[], mytype[nn][nn], mytype[nn][nn], mytype[nn][nn]),
              const char *out)
{
    init_arr();
    struct timeval start, end;
    printf("%s : ", out);

    gettimeofday(&start, NULL);
    for (int i = 0; i < run_times; i++)
        func(a, b, c, d, e, ff, gg, hh);
    gettimeofday(&end, NULL);

    long timeuse = 1000000 * (end.tv_sec - start.tv_sec) + end.tv_usec - start.tv_usec;
    float val = timeuse / 1000000.0;

    for (int i = 0; i < run_times; i++)
        func_verify(va, vb, vc, vd, ve, vff, vgg, vhh);

    if (verify_arr())
    {
        printf("%f\n", val);
    }
    else
    {
        printf("ERROR\n");
    }
}
int main()
{
    run_tsvc(s161, s161_verify, "s161");
    run_tsvc(s1161, s1161_verify, "s1161");
    run_tsvc(s162, s162_verify, "s162");
    run_tsvc(s271, s271_verify, "s271");
    run_tsvc(s272, s272_verify, "s272");
    run_tsvc(s273, s273_verify, "s273");
    run_tsvc(s274, s274_verify, "s274");
    run_tsvc(s275, s275_verify, "s275");
    run_tsvc(s276, s276_verify, "s276");
    run_tsvc(s277, s277_verify, "s277");
    run_tsvc(s278, s278_verify, "s278");
    run_tsvc(s279, s279_verify, "s279");
    run_tsvc(s1279, s1279_verify, "s1279");
    run_tsvc(s2710, s2710_verify, "s2710");
    run_tsvc(s2711, s2711_verify, "s2711");
    run_tsvc(s2712, s2712_verify, "s2712");
    return 0;
}