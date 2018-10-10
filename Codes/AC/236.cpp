#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define F first
#define S second
typedef pair<int,int>ii;
typedef pair<vector<int>,int>vii;
const int N=1000005;

int n;
int sol[N],a[N];
vector<int>qu[N];
int main()
{
    //freopen("test.in","r",stdin);
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    int q;
    scanf("%d",&q);
    for(int i=0;i<q;i++){
        int a;
        scanf("%d",&a);
        qu[a].pb(i);
    }
    int sum=1;
    for(int i=0;i<n;i++){
        for(int j=sum;j<sum+a[i];j++){
            for(int k=0;k<qu[j].size();k++)
                sol[qu[j][k]]=i+1;
        }
        sum+=a[i];
    }
    for(int i=0;i<q;i++)printf("%d\n",sol[i]);
    return 0;
}
