#include <iostream>

using namespace std;

int n, k;
int nr1[10], nr0[10], f[200];


int main()
{
    int i, j, p, las, lBd, uBd, conf, cmp, x, schimb;
    cin>>n>>k;
    for(i=1; i<=n; ++i)
    {
        conf=0;
        for(j=1, p=1; j<=k; ++j, p*=2)
        {
            cin>>x;
            if(x==1)
                ++nr1[j];
            else
                ++nr0[j];
            conf+=(p*x);
        }
        ++f[conf];
    }


    if(f[0])
    {
        cout<<"YeS";
        return 0;
    }

    for(j=1, p=2; j<k; ++j, p*=2);

    for(conf=0; conf<p; ++conf)
    if(f[conf])
    {
        for(cmp=0; cmp<p; ++cmp)
            if((cmp&conf)==0 && f[cmp])
            break;
        if(cmp!=p)
            break;
    }
    if(conf!=p)
        cout<<"YeS";
    else
        cout<<"NO";
    return 0;
}

		 	 		  			  	 				 		 	  	  	