#include <bits/stdc++.h>
using namespace std;
int  main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n,i,r=1,r1=0,r2=0;
    char a,b,c,d,e,f,g;
    scanf("%c%c%c",&a,&b,&c);
    scanf("%d",&n);
    scanf("%c",&g);
    for(i=0;i<n;i++)
    {
    	scanf("%c%c%c",&d,&e,&f);
    	if(a==d&&b==e){r=0;}
    	if(d==b){r1=1;}
    	if(e==a){r2=1;}
    }
    if(r==0){cout<<"YES"<<endl;}
    else
    {
    	if(r1+r2==2){cout<<"YES"<<endl;}
    	else{cout<<"NO"<<endl;}
    }
    return 0;
}
