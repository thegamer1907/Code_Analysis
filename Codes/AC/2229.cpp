#include <iostream>
#include <cmath>
#include <algorithm>
#include <utility>
#include <string>
#include <vector>
#include <set>
#include <math.h>
#include <map>
#include <iomanip>
#include <functional>
#include <list>
#include <random>
#include <deque>
#include <queue>
#include <regex>
#include <bitset>
#include <cstdio>
#include <numeric>

using namespace std;

typedef long long int64;
typedef unsigned long long uint64;
typedef long double double64;
typedef vector<int64> Edges_t;

template <typename T> void alert(const T& t) { cout << t; exit(0); }
template<typename T> inline void alert(vector<T> &t, char delim = ' ') { for (T const& ti : t) cout << ti << delim; exit(0); }


#define TASKNAME "TASKNAME"




int main()
{
#ifdef _DEBUG
	freopen("ReadMe.txt", "r", stdin);
#else
	{
		/*	ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(0);*/
		if (TASKNAME != "TASKNAME")
		{
			freopen(TASKNAME".in", "r", stdin);
			freopen(TASKNAME".out", "w", stdout);
		}
		else if (TASKNAME == "1")
		{
			freopen("input.txt", "r", stdin);
			freopen("output.txt", "w", stdout);
		}
	}
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(0);

	int64 n;
	cin >> n;
	
	vector<int64> vec(n);
	
	for(int64 i=0; i<n;i++)
	{
	    cin >>vec[i];
	    if(i>0)
	        vec[i]+=vec[i-1];
	}
	
	int64 ma=0;
	
	for(int64 i=0; i<n;i++)
	{
	    int64 l=i, r=n-1;
	    int64 sum1=vec[i];
	    while(r-l>5)
	    {
	        int64 mid=(r+l)/2;
	        
	        int64 sum3=vec.back()-vec[mid];
	        
	        if(sum3>sum1)
	        {
	            l=mid+1;
	        }
	        else
	        {
	            r=mid;
	        }
	    }
	    
	    for(int64 j=l;j<=r;j++)
	    {
	        int64 sum3=vec.back()-vec[j];
	        if(sum1==sum3)
	        {
	            ma=max(ma, sum1);
	        }
	    }
	}
	
	cout << ma;
	return 0;
}