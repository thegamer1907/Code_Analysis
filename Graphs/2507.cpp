#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<pair<int,int> > edges (n+1,pair<int,int>(0,0));
    for (int i=2; i<=n; i++)
    {
        int temp;
        cin>>temp;
        edges[i]=(pair<int,int>(i,temp));
    }
    vector<int> color(n+1,-1);
    for (int i=1; i<=n; i++)
    {
        int temp;
        cin>>temp;
        color[i]=temp;
    }
    int ans=0;
    for (int i=2; i<=n; i++)
    {
        if (color[edges[i].first]!=color[edges[i].second])
        ans++;
    }
    cout<<ans+1;
	// your code goes here
	return 0;
}
