#include <bits/stdc++.h>
using namespace std;
signed main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int qr[3]={0},q[3],p[3];
	long long int r;
    cin>>q[0]>>q[1]>>q[2]>>p[0]>>p[1]>>p[2]>>r;
    for(int i=0;i<s.length();i++)
    {
    	if(s[i]=='B')
    	qr[0]++;
    	else if(s[i]=='S')
    	qr[1]++;
    	else if(s[i]=='C')
    	qr[2]++;
    }
    long long int m=0,w;
    if(qr[0]==0)
    q[0]=0;
    if(qr[1]==0)
    q[1]=0;
    if(qr[2]==0)
    q[2]=0;
    while(1)
    {
    	w=0;
    	if(q[0]>=qr[0])
    	q[0]-=qr[0];
    	else
    	{
    		w+=(qr[0]-q[0])*p[0];
			q[0]=0;
		}
		if(q[1]>=qr[1])
    	q[1]-=qr[1];
    	else
    	{
    		w+=(qr[1]-q[1])*p[1];
			q[1]=0;
		}
		if(q[2]>=qr[2])
    	q[2]-=qr[2];
    	else
    	{
    		w+=(qr[2]-q[2])*p[2];
			q[2]=0;
		}
		if(r<w)
		break;
		else
		{
		    r-=w;
			m++;
		}
		if(q[0]==0&&q[1]==0&&q[2]==0)
		break;
	}
	w=r/(p[0]*qr[0]+p[1]*qr[1]+p[2]*qr[2]);
	m+=w;
	cout<<m;
}