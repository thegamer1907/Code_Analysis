#include<bits/stdc++.h>
#define pb(x) push_back(x)
#define ppb() pop_back()
#define fastread ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define f(i, x, y) for(int i = x; i < y; i++)
#define fstl(i,a)	for(auto i=a.begin();i!=a.end();++i)
#define fstl2(i,a)	for(auto i=0;i<a.size();++i)
#define ll long long
#define llu unsigned long long int
#define key pair<int, int>
#define mp(x,y) make_pair(x,y)
#define keyd pair<double, double>
#define ff first
#define ss second
#define getmin(ar,size)		*min_element(ar,ar+size)
#define getmax(ar,size)		*max_element(ar,ar+size)
#define debug1(x) 			cout<<x<<endl
#define debug2(x,y)			cout<<x<<" "<<y<<endl
#define debug3(x,y,z)		cout<<x<<" "<<y<<" "<<z<<endl
#define debug4(x,y,z,zz)	cout<<x<<" "<<y<<" "<<z<<" "<<zz<<endl
#define inp1(x)				cin>>x
#define inp2(x,y)			cin>>x>>y
#define inp3(x,y,z)			cin>>x>>y>>z

int mod = 1e9+7;

using namespace std;

int main()
{
	llu n,m,k;
	inp3(n,m,k);
	llu sp[m] = {0};
	for(llu i =0;i<m;++i)	cin>>sp[i];
    
    //if(k==1)    {   cout<<m;    return 0;   }
    
	llu marker = k,h=0,t=0, c=0;
	while(t<m)
	{
	    if(sp[h]>marker){	llu inc1 = ((sp[h]-marker)/k)*k;
	    llu inc2 = (((sp[h]-marker)%k)?1:0)*k;
	    marker+=(inc1+inc2);
	    //debug2(inc1,inc2);
	    }
	    if(sp[h]<=marker){
		while(sp[t]<=marker)	++t;    //debug2(marker,sp[t]);
		marker+=(t-h);
		h=t;
	    }
	    //debug2(marker,sp[h]);
        ++c;	
    }
	cout<<c<<endl;
}