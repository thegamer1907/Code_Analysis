#include <bits/stdc++.h>
using namespace std;


long long n,m,k,x;
vector<long long> v;
int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

    cin>>n>>m>>k;
    for(int i=0;i<m;i++)
    {

        cin>>x;
        v.push_back(x);
    }
    long long cnt = 0 , i =0 , deleted=0 ;
    while(i<m)
    {




        int group = ceil((v[i]-deleted)/(1.0*k)) ;
        long long u=deleted;
        while( (v[i]-deleted)>(group-1)*k and (v[i]-deleted)<=group*k)
        {
            u++;
            i++;
        }
        deleted= u;


        cnt++;

    }
    cout<<cnt<<endl;


	return 0;
}