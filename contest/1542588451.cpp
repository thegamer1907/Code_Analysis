#include <bits/stdc++.h>
using namespace std;

double h[5];
int main()
{
	int hh,m,s,t1,t2;
	cin>>hh>>m>>s>>t1>>t2;
	h[1]=s,h[2]=1.0*s/60+m,h[3]=1.0*s/3600+1.0*m/60+hh*5;
    t1*=5;
    t2*=5;
    if (h[2]>60) h[2]-=60;
    if (h[3]>60) h[3]-=60;
    if (h[1]>h[2]) swap(h[1],h[2]);
    if (h[2]>h[3]) swap(h[2],h[3]);
    if (h[1]>h[2]) swap(h[1],h[2]);
    h[4]=h[1]+60;
    bool flag=0;
    for (int i=1;i<=3;i++)
    {
        //cout<<h[i]<<' '<<h[i+1]<<' '<<t1<< ' '<<t2<<endl;
        if (i==3) if (t1<h[1]) t1+=60;
        if (i==3) if (t2<h[1]) t2+=60;
        if (h[i]<=t1&&t1<=h[i+1])
        {
            if (h[i]<=t2&&t2<=h[i+1])
                flag=1;
        }
    }
    puts(flag?"Yes":"NO");
	return 0;
}
