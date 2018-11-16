#include <ctype.h>
#include <iostream>
#include <cmath>
#include <algorithm>
#include<vector>
#include <iomanip>
using namespace std;
long long k=0,n,check=0,prev,m=-1,summa;
vector<int> use ;

vector < vector <int > > out;
vector<long long> cost;
vector<int> order;

void dfs(int s,long long dist)
{
   use[s]=1;
   for(int i=0;i<out[s].size();i++)
   {
       if(use[out[s][i]]==0)
        dfs(out[s][i],dist+1);
   }
	if(dist>m)
	    m=dist;
}
int main()
{
    vector < int> roots;
   long long n,t;
   cin>>n;
   out.resize(n);
   use.resize(n);
   for(long long  i=0;i<n;i++)
   {
        cin>>t;
        t--;
        if(t!=-2)
            out[t].push_back(i);
         else
            roots.push_back(i);
   }
 
   for(long long i=0;i<roots.size();i++)
   {
       dfs(roots[i],1);
   }
   cout<<m;
    return 0;
}