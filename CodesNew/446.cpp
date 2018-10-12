#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std ;

int book[101000] ;
int main()
{
    int n,t ;
    while(scanf("%d %d",&n,&t)!=EOF)
    {
        for(int i = 0 ; i < n ; i++)
        scanf("%d",&book[i]) ;
        int sum = 0 , cnt = 0 ,time = 0,count = 0;
        for(int i = 0 ; i < n ; i++)
        {
            if(time+book[i] > t)
            {
                time -= book[cnt] ;
                cnt++ ;
                i-- ;
                sum--;
            }
            else
            {
                time += book[i] ;
                sum++ ;
                count = max(sum,count) ;
            }
        }
        cout<<count<<endl ;
    }
    return 0 ;
}