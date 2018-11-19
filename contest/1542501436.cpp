#include <bits/stdc++.h>

using namespace std;

#define rep(i , l , r) for(int i = (l) , ___ = (r) ; i <= ___ ; ++i )
#define per(i , r , l) for(int i = (r) , ___ = (l) ; i >= ___ ; --i )

typedef long long LL;

template<typename Type>
inline bool chkmin(Type &x , const Type &y) { return x > y ? (x = y , 1) : 0; }
template<typename Type>
inline bool chkmax(Type &x , const Type &y) { return x < y ? (x = y , 1) : 0; }

template<typename Type>
inline Type read(Type &f)
{
    f = 0; int x = 1 ; char c = getchar();
    while(!isdigit(c))
        x = (c == '-' ? -1 : 1) , c = getchar();
    while(isdigit(c))
        (f *= 10) += c & 15 , c = getchar();
    return f = x * f;
}

const int N = 100000 + 5;

int n , m , A[N] , nL = 1 , nR , cnt[N];
LL f[N] , g[N] , now;

void modify(int l , int r)
{
    while(nR < r)
        nR++ , now += cnt[A[nR]] , cnt[A[nR]]++;
    while(nL > l)
        nL-- , now += cnt[A[nL]] , cnt[A[nL]]++;
    while(nR > r)
        cnt[A[nR]]-- , now -= cnt[A[nR]] , nR--;
    while(nL < l)
        cnt[A[nL]]-- , now -= cnt[A[nL]] , nL++;
}

void solve(int l , int r , int L , int R)
{
    if(l == r)
    {
        per(i , min(R , r) , L)
        {
            modify(i + 1 , l);
            chkmin(f[l] , g[i] + now);
        }
        return ;
    }
    int mid = (l + r) >> 1 , p = 0;
    per(i , min(mid - 1 , R) , L)
    {
        modify(i + 1 , mid);
        if(chkmin(f[mid] , now + g[i])) p = i;
    }
    if(p != 0)
        solve(l , mid , L , p) , solve(mid + 1 , r , p , R);
    else
        solve(mid + 1 , r , L , R);
}

int main()
{
    read(n) , read(m);
    rep(i , 1 , n) read(A[i]);
    memset(f , 0x3f , sizeof f);
    memset(g , 0x3f , sizeof g);
    g[0] = 0;
    rep(i , 1 , n)
        g[i] = g[i - 1] + cnt[A[i]] , cnt[A[i]]++;
    memset(cnt , 0 , sizeof cnt);
    rep(i , 2 , m)
    {
        solve(1 , n , 1 , n);
        swap(f , g);
    }
    cout << g[n] << endl;
    return 0;
}


