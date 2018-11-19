    /*Design by Dinh Viet Anh(JOKER)*/
//___________________________________$$$$$$$$$
//___________________________________$$$___$
//___________________________$$$____$$$$
//_________________________$$$$$$$__$$$$$$$$$$$
//_______________________$$$$$$$$$___$$$$$$$$$$$
//_______________________$$$___$______$$$$$$$$$$
//________________$$$$__$$$$_________________$$$
//_____________$__$$$$__$$$$$$$$$$$_____$____$$$
//__________$$$___$$$$___$$$$$$$$$$$__$$$$__$$$$
//_________$$$$___$$$$$___$$$$$$$$$$__$$$$$$$$$
//____$____$$$_____$$$$__________$$$___$$$$$$$
//__$$$$__$$$$_____$$$$_____$____$$$_____$
//__$$$$__$$$_______$$$$__$$$$$$$$$$
//___$$$$$$$$$______$$$$__$$$$$$$$$
//___$$$$$$$$$$_____$$$$___$$$$$$
//___$$$$$$$$$$$_____$$$
//____$$$$$$$$$$$____$$$$
//____$$$$$__$$$$$___$$$
//____$$$$$___$$$$$$
//____$$$$$____$$$
//_____$$$$
//_____$$$$
//_____$$$$
#include <bits/stdc++.h>
#define maxn 100005
#define maxm 10000005
#define maxc 1000000007
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define pii pair<int, int>
#define fort(i, a, b) for(int i = (a); i <= (b); i++)
#define ford(i, a, b) for(int i = (a); i >= (b); i--)
#define Task ""
#define stop1 {cout << "-1\n"; return;}
#define stop2 {cout << "NO\n"; return;}
#define stop3 {cout << "YES\n"; return;}
#define fast ios_base::sync_with_stdio(0);cin.tie();cout.tie();
#define ll long long
#define mid (l+r)/2

using namespace std;

string mk, s[maxn*2];
int n;

void setup()
{
    cin >> mk >> n;
    fort(i, 1, n)
    {
        cin >> s[i];
        if(s[i] == mk) stop3
        s[i+n] = s[i];
    }
    n= n*2;
    fort(i, 1, n)
        fort(j, 1, n)
            if(i != j)
                if(s[i][1] == mk[0] && s[j][0] == mk[1])
                    stop3
    stop2
}

void work()
{

}

int main()
{
    fast
 //   freopen(Task".inp", "r", stdin);
 //   freopen(Task".out", "w", stdout);
    setup();
    work();
    return 0;
}
