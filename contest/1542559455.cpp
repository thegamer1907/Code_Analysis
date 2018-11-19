#include <iostream>
#include <stack>
#include <map>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
bool nott(vector<int> V,vector<int> G){
	for (int i = 0; i < V.size(); ++i)
	{
		V[i]+=G[i];
		if(V[i]==2)return false;
	}
	return true;
}
int main() {
	int n,k;cin>>n>>k;
	if(n==1){
		for (int i = 0; i < k; ++i)
		{
			int x;cin>>x;
			if(x==1){
				cout<<"NO";
				return 0;
			}
		}
		cout<<"YES";
		return 0;
	}
	set<vector<int>>V;
	for (int i = 0; i < n; ++i)
	{
		std::vector<int> T;
		for (int j = 0; j < k; ++j)
		{
			int x;cin>>x;
			T.push_back(x);
		}
		bool bol=false;
		
		for (int j = 0; j < (1<<k); ++j)
		{
			vector<int> G;
			for (int p = 0; p < k; ++p)
			{
				if(j & (1<<p))G.push_back(1);
				else G.push_back(0);
			}
			if(nott(T,G) && V.count(G)){
				bol=true;
				break;
			}
		}

		if(bol){
			cout<<"YES";
			return 0;
		}
		V.insert(T);
	}
	cout<<"NO";
    return 0;
}