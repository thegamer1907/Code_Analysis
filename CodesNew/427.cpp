
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	map<ll, ll>mp;
	ll a, b, c, n,m, x,y, res = 0;
	vector<ll>v;
	//vector<pair<ll, ll>>p;
	cin >> n>>a;

	for (int i = 0; i < n; i++)
	{
	cin >> x;
	v.push_back(x);
	}
	ll l=0,r=0,sum=0,ans=0;
	while((l<n)&&(r<n))
    {
        if(sum+v[r]<=a)
      {

       sum+=v[r];
        r++;
        res++;
      //  cout<<"res="<<sum<<endl;
        }else
       {
           sum-=v[l];
           l++;

            res--;

       }
        if(ans<res)
                ans=res;
    }
    cout<<ans<<endl;
/*	for (int i = 0; i < n; i++)
	{
		cin >> x>>y;
		p.push_back(make_pair(x,y));
	}*/
	//sort(v.begin(),v.end());
	//reverse(v.begin(), v.end());
	string s,t;
	//cin >> s;
	/*
	n = s.size();
	for (int i = 0; i < n; i++)
	{

	}
	*/

	cout << endl;



	return 0;
}
