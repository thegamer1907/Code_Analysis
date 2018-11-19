#include <bits/stdc++.h>
#include <cstring>
#include <climits>
using namespace std;
#define ll long long 
#define VI vector<ll>
#define VII vector<VI>
#define MAX_INT INT_MAX
#include <iterator>


int main(int argc, char const *argv[])
{
	int n,k;
	cin>>n>>k;
	set<int> s;
	for (int i = 0; i < n; ++i)
	{
		int num=0;
		for (int j = 0; j < k; ++j)
		{
			int x;
			cin>>x;
			num=2*num+x;

		}
		s.insert(num);
	}
	int flag=0;
	for (auto itr = s.begin(); itr != s.end(); ++itr)
    {
        int num1=*itr;
        
        for (auto itr2 = s.begin(); itr2 != s.end(); ++itr2)
	    {
	    	int num2=*itr2;
	    	//cout<<num1<<":"<<num2<<":"<<(num2&num1)<<endl;
	        int n=num2&num1;
	        if(n==0)flag=1;
	    }
    }
    if(flag)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;


	return 0;
}