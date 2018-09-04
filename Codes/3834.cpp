#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    string s;
    cin>>s;
    int H[256]={};

    for(auto c : s)
        H[c]++;

    int B,S,C,cB,cS,cC;
    long long p;
    cin>>B>>S>>C>>cB>>cS>>cC>>p;

    if(H['B']==0)B=0;
    if(H['S']==0)S=0;
    if(H['C']==0)C=0;

    long long ats = 0;

    while(B >= H['B'] && S >= H['S'] && C >= H['C'])
    ats++,B-=H['B'],S-=H['S'],C-=H['C'];

    while(max({B,S,C}) > 0)
        {
            int need = 0;
            if(B<H['B'])need+=(H['B']-B)*cB, B=H['B'];
            if(S<H['S'])need+=(H['S']-S)*cS, S=H['S'];
            if(C<H['C'])need+=(H['C']-C)*cC, C=H['C'];

            if(need > p)break;
            p-=need;
            ats++;
            B-=H['B'],S-=H['S'],C-=H['C'];
        }

    ats+=p/(cB*H['B'] + cS*H['S'] + cC*H['C']);

    cout<<ats;

    return 0;
}
