#include <bits/stdc++.h>
using namespace std;
int h,m,s,t1,t2;
double H,M,S,T1,T2;
int main()
{
    scanf("%d %d %d %d %d",&h,&m,&s,&t1,&t2);
    h%=12;
    H=360.0/12*h+360.0/(60*12)*m+360.0/(60*12*60)*s;
    M=360.0/60*m+360.0/(60*60)*s;
    S=360.0/60*s;
    T1=30.0*t1;
    T2=30.0*t2;
    vector<pair<double,int>> V;
    V.push_back({H,1});
    V.push_back({M,1});
    V.push_back({S,1});
    V.push_back({T1,0});
    V.push_back({T2,0});
    sort(V.begin(),V.end());
    if(V[0].second==0&&V[4].second==0)
    {
	printf("YES");
	return 0;
    }
    for(int i=0;i<4;i++)
	if(V[i].second==0&&V[i+1].second==0)
	{
	    printf("YES");
	    return 0;
	}
    printf("NO");
    return 0;
}
