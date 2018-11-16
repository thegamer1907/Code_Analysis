#include <bits/stdc++.h>
using namespace std;

    vector < vector < short > > graf;
    vector <short> mt(100,-1);
    vector <bool> use(100);

bool try_kuhn (short v)
{
	if (use[v])  return false;
	use[v] = true;
	for (short i=0; i<graf[v].size(); ++i)
	{
		int to = graf[v][i];
		if (mt[to] == -1 || try_kuhn (mt[to]))
		{
			mt[to] = v;
			return true;
		}
	}
	return false;
}
int
main ()
{
    short n,m;
    cin>>n;
    short a[n];
    for ( short i = 0 ; i < n ; i++ )
    {
        cin>>a[i];
    }
    cin>>m;
    short b[m];
    for ( short i = 0 ; i < m ; i++ )
    {
        cin>>b[i];
    }
    for ( short i = 0 ; i < n ; i++ )
    {
        graf.push_back(vector <short> ()); 
        for ( short j = 0 ; j < m ; j++ )
        {
            int h = a[i] - b[j];
            if(h >= -1 && h <= 1)
            {
                graf[i].push_back(j);
            }
        }
    }
    for ( short i = 0 ; i < n ; i++ )
    {
        use.assign(n,false);
        try_kuhn(i);
    }
    short k=0;
    for (short i = 0 ; i < m ; i++ )
    {
        if ( mt[i] != -1 )
            k++;
    }
    cout<<k;
  return 0;
}
