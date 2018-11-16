#include<bits/stdc++.h>
using namespace std;
//queue<int> q;
#define lli long long int
#define li long int
#define si stack<int>
#define spi stack<pair<int,int> >
#define sli stack<long int>
#define mp make_pair
#define vi vector<int>
#define vlli vector<long long int>
#define vpi vector<pair<int,int> >
#define vli vector<long int>
#define pi pair<int,int>
#define pli pair<long int,long int>
#define qi queue<int>
#define qli queue<long int>
#define pb push_back
#define qpi queue<pair<int,int> >
#define pq priority_queue<>
#define vpli vector<pair<long int,long int> >
#define vulli vector<unsigned long long int>
#define vuli vector<unsigned long int>
#define ulli unsigned long long int
#define uli unsigned long int
#define vb vector<bool>

 //ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
int main()
{   


	string s;
	cin>>s;
	vli v(s.size()+5);
	int n;
	cin>>n;
	for(int i=s.size()-2;i>=0;i--)
	{
		if(s[i]==s[i+1])
			v[i+1]=v[i+2]+1;
		else v[i+1]=v[i+2];



	}
int l,r;
while(n--)
{
	cin>>l>>r;
	cout<<v[l]-v[r]<<"\n";

}

    



    }






