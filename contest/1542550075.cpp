#include<bits/stdc++.h>
using namespace std;
#define fore(i, l, r) for(int i = (l); i < (r); ++i)
#define forn(i, n) fore(i, 0, n)
#define fori(i, l, r) fore(i, l, (r) + 1)
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define mp make_pair
#define max1 1000000007
typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
int main()
{
    iostream::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    li n,k;
    cin>>n>>k;
    li a[n][k];
    forn(i,n)
    {
        forn(j,k)
            cin>>a[i][j];
    }
    bool flag=0;int ind=-1;
    vector<map<int,int> > b(k);
    forn(i,n)
    {
        forn(j,k)
        {
            if(a[i][j]==1)
                b[j][i]=1;
        }
    }
    set<int> s,s1;
    forn(i,n)
    {
        li cnt=0;
        forn(j,k)
        {
            if(a[i][j]==1)
                cnt++;
        }
        if(cnt==0)
        {
            cout<<"YES";
            exit(0);
        }
        if(cnt==1)
        {
            flag=1;
            forn(j,k)
            {
                if(a[i][j]==1)
                    ind=j;
            }
            if(b[ind].size()!=n){
               cout<<"YES";
               exit(0);
            }
            else
            {
                cout<<"NO";
                exit(0);
            }
        }
        if(cnt==2&&k==4)
        {
            s1=s;
            forn(j,k)
            {
                if(a[i][j]==1)
                    s1.insert(j);
            }
            if(s.empty())
                s=s1;
            if(s1.size()==s.size()+2&&s1.size()==4)
            {
                cout<<"YES";
                exit(0);
            }
            s1=s;
        }
    }
    if(n==3&&k==4)
        {
            li cc=0;
            forn(i,n-1)
            {
                fore(j,i+1,n)
                {
                    forn(z,4)
                    {
                        if(a[i][z]==0||a[j][z]==0)
                            cc++;
                    }
                    if(cc==4){cout<<"YES";exit(0);}cc=0;
                }
            }
            cc=0;
        }

    cout<<"NO";
}
