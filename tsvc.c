#include "common.h"

void s161(mytype a[], mytype b[], mytype c[], mytype d[], mytype e[], mytype ff[nn][nn], mytype gg[nn][nn], mytype hh[nn][nn])
{
    for (int i = 0; i < n - 1; ++i)//vec
    {
        if (b[i] < (mytype)0.)
        {
            goto L20;
        }
        a[i] = c[i] + d[i] + e[i];
        goto L10;
    L20:
        c[i + 1] = a[i] + d[i] + d[i];
    L10:;
    }
}
void s1161(mytype a[], mytype b[], mytype c[], mytype d[], mytype e[], mytype ff[nn][nn], mytype gg[nn][nn], mytype hh[nn][nn])
{
    for (int i = 0; i < n - 1; ++i)//vec
    {
        if (c[i] < (mytype)0.)
        {
            goto L20;
        }
        a[i] = c[i] + d[i] + e[i];
        goto L10;
    L20:
        b[i] = a[i] + d[i] + d[i];
    L10:;
    }
}
void s162(mytype a[], mytype b[], mytype c[], mytype d[], mytype e[], mytype ff[nn][nn], mytype gg[nn][nn], mytype hh[nn][nn])
{
    for (int i = 0; i < n - 1; i++)//vec
    {
        a[i] = a[i] + b[i] + c[i];
    }
}
void s271(mytype a[], mytype b[], mytype c[], mytype d[], mytype e[], mytype ff[nn][nn], mytype gg[nn][nn], mytype hh[nn][nn])
{
    for (int i = 0; i < n; i++)//vec
    {
        if (b[i] > (mytype)0.)
        {
            a[i] += b[i] + c[i];
        }
    }
}
void s272(mytype a[], mytype b[], mytype c[], mytype d[], mytype e[], mytype ff[nn][nn], mytype gg[nn][nn], mytype hh[nn][nn])
{
    for (int i = 0; i < n; i++)//vec
    {
        if (e[i] >= (mytype)500.)
        {
            a[i] += c[i] + d[i];
            b[i] += c[i] + c[i];
        }
    }
}
void s273(mytype a[], mytype b[], mytype c[], mytype d[], mytype e[], mytype ff[nn][nn], mytype gg[nn][nn], mytype hh[nn][nn])
{
    for (int i = 0; i < n; i++)//vec
    {
        a[i] += d[i] + e[i];
        if (a[i] < (mytype)0.)
            b[i] += d[i] + e[i];
        c[i] += a[i] + d[i];
    }
}
void s274(mytype a[], mytype b[], mytype c[], mytype d[], mytype e[], mytype ff[nn][nn], mytype gg[nn][nn], mytype hh[nn][nn])
{
    for (int i = 0; i < n; i++)//vec
    {
        a[i] = c[i] + e[i] + d[i];
        if (a[i] > (mytype)0.)
        {
            b[i] = a[i] + b[i];
        }
        else
        {
            a[i] = d[i] + e[i];
        }
    }
}
void s275(mytype a[], mytype b[], mytype c[], mytype d[], mytype e[], mytype ff[nn][nn], mytype gg[nn][nn], mytype hh[nn][nn])
{
    for (int i = 0; i < nn; i++)//novec
    {
        if (ff[0][i] > (mytype)0.)
        {
            for (int j = 1; j < nn; j++)
            {
                ff[j][i] = ff[j - 1][i] + gg[j][i] + hh[j][i];
            }
        }
    }
}
void s276(mytype a[], mytype b[], mytype c[], mytype d[], mytype e[], mytype ff[nn][nn], mytype gg[nn][nn], mytype hh[nn][nn])
{
    for (int i = 0; i < n; i++)//novec
    {
        if (i + 1 < n / 2)
        {
            a[i] += b[i] + c[i];
        }
        else
        {
            a[i] += b[i] + d[i];
        }
    }
}
void s277(mytype a[], mytype b[], mytype c[], mytype d[], mytype e[], mytype ff[nn][nn], mytype gg[nn][nn], mytype hh[nn][nn])
{
    for (int i = 0; i < n - 1; i++)//novec
    {
        if (a[i] >= (mytype)0.)
        {
            goto L20;
        }
        if (b[i] >= (mytype)0.)
        {
            goto L30;
        }
        a[i] += c[i] + d[i];
    L30:
        b[i + 1] = c[i] + d[i] + e[i];
    L20:;
    }
}
void s278(mytype a[], mytype b[], mytype c[], mytype d[], mytype e[], mytype ff[nn][nn], mytype gg[nn][nn], mytype hh[nn][nn])
{
    for (int i = 0; i < n; i++)//vec
    {
        if (a[i] > (mytype)0.)
        {
            goto L20;
        }
        b[i] = -b[i] + d[i] + e[i];
        goto L30;
    L20:
        c[i] = -c[i] + d[i] + e[i];
    L30:
        a[i] = b[i] + c[i] + d[i];
    }
}
void s279(mytype a[], mytype b[], mytype c[], mytype d[], mytype e[], mytype ff[nn][nn], mytype gg[nn][nn], mytype hh[nn][nn])
{
    for (int i = 0; i < n; i++)//vec
    {
        if (a[i] > (mytype)0.)
        {
            goto L20;
        }
        b[i] = -b[i] + d[i] * d[i];
        if (b[i] <= a[i])
        {
            goto L30;
        }
        c[i] += d[i] + e[i];
        goto L30;
    L20:
        c[i] = -c[i] + e[i] + e[i];
    L30:
        a[i] = b[i] + c[i] + d[i];
    }
}
void s1279(mytype a[], mytype b[], mytype c[], mytype d[], mytype e[], mytype ff[nn][nn], mytype gg[nn][nn], mytype hh[nn][nn])
{
    for (int i = 0; i < n; i++)//vec
    {
        if (a[i] < (mytype)0.)
        {
            if (b[i] > a[i])
            {
                c[i] += d[i] + e[i];
            }
        }
    }
}
void s2710(mytype a[], mytype b[], mytype c[], mytype d[], mytype e[], mytype ff[nn][nn], mytype gg[nn][nn], mytype hh[nn][nn])
{
    for (int i = 0; i < n; i++)//novec
    {
        if (a[i] > b[i])
        {
            a[i] += b[i] + d[i];
            if (n > 10)
            {
                c[i] += d[i] + d[i];
            }
            else
            {
                c[i] = d[i] + e[i] + (mytype)1.;
            }
        }
        else
        {
            b[i] = a[i] + e[i] + e[i];
            if (c[n / 2] > (mytype)0.)
            {
                c[i] = a[i] + d[i] + d[i];
            }
            else
            {
                c[i] += e[i] + e[i];
            }
        }
    }
}
void s2711(mytype a[], mytype b[], mytype c[], mytype d[], mytype e[], mytype ff[nn][nn], mytype gg[nn][nn], mytype hh[nn][nn])
{
    for (int i = 0; i < n; i++)//vec
    {
        if (b[i] != (mytype)0.0)
        {
            a[i] += b[i] + c[i];
        }
    }
}
void s2712(mytype a[], mytype b[], mytype c[], mytype d[], mytype e[], mytype ff[nn][nn], mytype gg[nn][nn], mytype hh[nn][nn])
{
    for (int i = 0; i < n; i++)//vec
    {
        if (a[i] > b[i])
        {
            a[i] += b[i] + c[i];
        }
    }
}