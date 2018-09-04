#include <iostream>
#include <algorithm>
#include <cstring>
#include <map>
#include <stdio.h>

#define INF  -1000000009

using namespace std ;

int main()
{
	int n,inp,q,start,end,mid;
    scanf("%d",&n);
    int in[n];
    for(int i = 0 ; i < n ; i++)
    {
        if(i==0)
        {
            scanf("%d",&in[i]);
        }
        else
        {
            scanf("%d",&inp);
            in[i] = in[i-1] + inp ;
        }
    }
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d",&inp);
        if(inp<=in[0])
        {
            cout << "1" << "\n";
        }
        else
        {
            start = 0 ;
            end = n-1 ;
            while(start<end)
            {
                mid = (start+end)/2 ;
                if(in[mid]<inp && in[mid+1]>=inp)
                {
                    printf("%d\n",mid+2);
                    break;
                }
                else if(in[mid]<inp && in[mid+1]<inp)
                {
                    start = mid ;
                }
                else
                {
                    end = mid ;
                }
            }
        }
    }
}