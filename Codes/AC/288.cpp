#include<iostream>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cstdio>
#include<vector>
#include<set>
#include<map>
#include<cmath>
#include<utility>
#include<queue>
#include<stack>
#include<sstream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    int n,tmp=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
    	int a;
    	cin>>a;
    	tmp+=a;
    	v[i]=tmp;
    }

    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
    	int src;
    	cin>>src;
    	cout<< lower_bound(v.begin(),v.end(),src)-v.begin() +1<<endl;
    }
	return 0;
}
