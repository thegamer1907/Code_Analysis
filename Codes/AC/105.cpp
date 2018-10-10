#include <iostream>
#include <cstdio>

using namespace std;

int count[1000000];

int main()
{
    int n;
    long long sum=0;
    scanf( "%d",&n);
    int ara[n];
    for( int i=0; i<n; i++ )
    {
        scanf( "%d", &ara[i] );
        sum += ara[i];
    }
    if(sum%3) cout<<"0\n"<<endl;
    else
    {
        long long newsum=sum/3,part1=0,part2=0,fn1=0,fn2=0,pos1[n],pos2[n];
        long long pairs=0;
        for ( int j = n-1 ; j >=0 ; j-- )
        {
            part2 += ara[j];
            if( part2 == newsum )
            {
                count[j] = 1;
            }
        }
        for ( int i = n-2 ; i >= 0 ; i-- )
        {
            count[i] += count[i+1];
        }
        long long s=0;
        for ( int i = 0 ; i < n-2 ; i++)
        {
            s += ara[i];
            if(s == newsum ) pairs += count[i+2];
        }
        cout<<pairs<<endl;
    }
    return 0;
}