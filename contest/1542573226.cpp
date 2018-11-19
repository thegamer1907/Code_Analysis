    /*Design by Dinh Viet Anh(JOKER)*/
//_____________________________________$$$$$__
//___________________________________$$$$$$$$$
//___________________________________$$$___$$
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
#define pii pair<long long, long long>
#define fort(i, a, b) for(int i = (a); i <= (b); ++i)
#define ford(i, a, b) for(int i = (a); i >= (b); --i)
#define Task ""
#define stop1 {cout << "-1\n"; return;}
#define stop2 {cout << "NO\n"; return;}
#define stop3 {cout << "YES\n"; return;}
#define fast ios_base::sync_with_stdio(0);cin.tie();cout.tie();
#define ll long long
#define mid (l+r)>>1

using namespace std;

int n, cnt[maxn], k;

void setup()
{
    cin >> n >> k;
    for(int i = 1; i <= n; ++i)
    {
        int x, a = 0;
        fort(j, 1, k)
        {
            cin >> x;
            a += (x << (k-j));
        }
        cnt[a]++;
    }
        
}

void work()
{
    if(n == 1 && cnt[0]) stop3
    else if(n == 1 && !cnt[0]) stop2
    if(cnt[0] >= 2 ) stop3
    fort(i, 0, (1 << k) - 1)
        fort(j, 0, (1 << k) - 1)
            if(i != j && cnt[i] && cnt[j] && !(i &j)) stop3
    stop2
}

int main()
{
    fast
  //  freopen(".inp", "r", stdin);
   // freopen("amazon.out", "w", stdout);
    setup();
    work();
    return 0;
}