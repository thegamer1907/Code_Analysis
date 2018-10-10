#include <stdio.h>
#define ll long long
ll n,hold,A,B,ini,fin,md,half;
int main()
{
    scanf("%I64d",&n);
    half=(n%2)?(n+1)/2:n/2;
    ini=1; fin=n;
    while(ini!=fin)
    {
        md=(ini+fin)/2;
        hold=n; A=0; B=0;
        while(hold)
        {
            if(hold < md )
            {
                A+=hold;
                hold=0;
            }
            else
            {
                hold-=md;
                A+=md;
            }
            if(!hold) break;
            B+=(hold / 10);
            hold-=(hold / 10);
        }
        if(A >= half )
            fin=md;
        else
            ini=md+1;
    }
    printf("%I64d",fin);
    return 0;
}
