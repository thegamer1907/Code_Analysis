#include<bits/stdc++.h>

using namespace std;
const int inf=0x7f7f7f7f;
const int maxn=5050;
const int maxm=5000050;

int main()
{
    //ios::sync_with_stdio(true);
    //ios::sync_with_stdio(false);
	//freopen("","r",stdin);
	//freopen("","w",stdout);

	int h,m,s;
	int t1,t2;
	cin>>h>>m>>s>>t1>>t2;

	h*=5;
	t1*=5;
	t2*=5;


	h%=60;
	m%=60;
	s%=60;
	t1%=60;
	t2%=60;

	if(t1>t2)
        swap(t1,t2);
    int tmp=0;
    for(int i=t1;i<t2;i++)
    {
        if(i==h)
            tmp++;
        if(i==m)
            tmp++;
        if(i==s)
            tmp++;
    }

    if(tmp==0||tmp==3)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
	return 0;
}

