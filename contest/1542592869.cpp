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
	string mi;
	cin>>mi;
	int n;
	cin>>n;

	bool fir=false;
	bool sec=false;
	bool all=false;

	for(int i=0;i<n;i++)
    {
        string ba;
        cin>>ba;
        if(ba==mi)
            all=true;
        if(ba[1]==mi[0])
            fir=true;
        if(ba[0]==mi[1])
            sec=true;
    }

    if(all || (fir&&sec))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

	return 0;
}
