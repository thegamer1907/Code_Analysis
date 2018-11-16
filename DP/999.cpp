/*
codeforce
problem- 327A - Flipping game
tags - brute force , dp , implimentation

*/
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
typedef unsigned int uint;      //u
typedef unsigned long long ulong;  //use %I64d for read/write
#define MAX(a,b) ((a) > (b) ? a : b)
#define MIN(a,b) ((a) < (b) ? a : b)

bool SolveCase(ulong CaseNo)
{
    int n,t;
    scanf("%d",&n);
    int a[101];
    int b[101];
    a[0]=b[0]=0;
    for (int i = 1; i <= n; ++i)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 1; i <= n; ++i)
    {
        b[i] = b[i-1]+a[i];
    }
    // brute force
    int max = 0;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = i; j <= n; ++j)
        {
            int num = j-i+1;
            int pos = b[j]-b[i-1];
            int flip = num - pos;
            if(flip>pos)
               max = ((flip - pos)>max)? (flip - pos) :max;
        }
    }
    if(max==0)
        max=-1;
    printf("%d\n", b[n]+max);
    return true;
}

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
    // disable buffering on stdout completely
    setbuf(stdout, NULL);
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);
   
#endif
    int TestCases = 1;
    //scanf("%d",&TestCases);
    ulong T=1;

    while(TestCases--/*true*/)
    {
        if(!SolveCase(T));
            break;
        T++;
    }
    return 0;
}