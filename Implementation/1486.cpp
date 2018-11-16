#include <bits/stdc++.h>
#define rp(_s,_i,_n) for(int _s=_i;_s<_n;_s++)
#define sz(_itt) (int)_itt.size()
using namespace std;

int main()
{
    string s;
    cin >>s;
    int x=0,y=0;
    rp(i,0,sz(s)){
        if(s[i]=='0'){
            x++;
            y=0;
        }
        else{
            y++;
            x=0;
        }
        if(x>=7||y>=7){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}

