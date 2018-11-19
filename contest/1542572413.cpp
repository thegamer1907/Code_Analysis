#include<bits/stdc++.h>
using namespace std;

struct dat{
    int id; vector<int> v;
}tem[100001];

int num[100001][5], cnt[100001], K[5];
bool cmp(dat a, dat b){
    if( a.v.size() != b.v.size() )return a.v.size() < b.v.size();
    int s1 = 0, s2 = 0;
    for(int i:a.v)s1 += cnt[i]-1;
    for(int i:b.v)s2 += cnt[i]-1;
    return s1 < s2;
}

int main(){
    int n, k;
    cin >> n >> k;
    for(int i=1;i<=n;i++){
        tem[i].id = i;

        for(int j=1;j<=k;j++){
            cin >> num[i][j];   
            if(num[i][j]==1)tem[i].v.push_back(j);
        }
        if(tem[i].v.size()==0){
            cout << "YES";
            return 0;
        }
    }

    for(int j=1;j<=4;j++)
        for(int i=1;i<=n;i++)
            if(num[i][j]==1)cnt[j]++;

    sort(tem+1,tem+1+n,cmp);
    
    for(int i:tem[1].v)K[i]++;

    for(int i=2;i<=n;i++){
        bool chk = 1;
        for(int j:tem[i].v)if(K[j]==1){chk = 0; break;}
        if(chk==1){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}