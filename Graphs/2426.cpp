#include<bits/stdc++.h>
#define loop(i,a,b) for(int i=a;i<b;i++)
using namespace std;
/*-----------------------creator:soham mukherjee---------------------------------------------*/

const int N=2005;
vector<int>tree[N];
int parent[N];

int dfs(int s)
{
	int mxht=1;
	for(auto v:tree[s])
	{
		mxht=max(mxht,dfs(v)+1);
	}
	return mxht;
}
int main()
{
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int n;
  cin>>n;
  loop(i,1,n+1){
   cin>>parent[i];
   if(parent[i]!=-1)
   {
   	tree[parent[i]].push_back(i);
   }
  }
   int maxht=0;
   loop(i,1,n+1)
   {
   	if(parent[i]==-1)
   	{
   		int ht=dfs(i);
   		maxht=max(maxht,ht);
   	}
   }
 cout<<maxht;
  
  
  
  return 0;
  
}