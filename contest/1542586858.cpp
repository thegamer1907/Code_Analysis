#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define fir first
#define sec second
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n, k, cur;
    cin >> n >> k;
    vector < pair <int, vector <int> > > V(n);
    for(int i=0; i<n; i++){
        V[i].sec.resize(k);
        cur=0;
        for(int j=0; j<k; j++){
            cin >> V[i].sec[j];
            cur+=(V[i].sec[j]);
        }
        V[i].fir=cur;
    }
    sort(V.begin(),V.end());
    int e=unique(V.begin(),V.end()) - V.begin();
    bool good = (V[0].fir==0);
    for(int j=1; j<(1<<e) && !good; j++){
        int kj=j, ind=0, num, siz=0; bool p=true; vector <int> Pos;
        while(kj>0){
            if(kj%2==1)
                Pos.push_back(ind);
                kj/=2, ind++;
        }
        siz=Pos.size();
        for(int l=0; l<k && p; l++){
            num=0;
            for(int i=0; i<siz; i++)
                num+=(V[Pos[i]].sec[l]);
            p = (2*num<=siz);
        }
        good=p;
    }
    (good) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}
