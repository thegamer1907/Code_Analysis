/*
codeforce
problem- 500A - New Year Transportation
tags -dfs and similar, graphs, implementation

*/
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
typedef unsigned int uint;      // u
typedef unsigned long long ulong;  //use %I64d for read/write
#define MAX(a,b) ((a) > (b) ? a : b)
#define MIN(a,b) ((a) < (b) ? a : b)

bool SolveCase(ulong CaseNo)
{
    uint n,t;
    scanf("%u %u",&n,&t);
    uint *p = new uint[n];
    for (int i = 0; i < n-1; ++i)
     {
        scanf("%u",&p[i]);
     } 
     //uint *v= new uint[n];
     //memset(v,0,n*sizeof(uint));

     uint pos = 0;
     bool can=false;
     t--;
     while(true)
     {
        pos+=p[pos];
        if(pos>t)
            break;
        if(pos==t)
        {
            can=true;
            break;
        }
     }
     (can)?printf("YES\n"):printf("NO\n");
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