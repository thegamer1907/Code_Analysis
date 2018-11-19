#include<bits/stdc++.h>

#define ll long long
#define ld long double
#define pb push_back
#define pl pop_back
#define pf push_front
#define pp pop_front
#define f first
#define s second
#define PI 3.141592653589

using namespace std;

ll i , R , n , j , k , color[500000] , a , b , c , d , e , t1 , t2;
ld x , y , z , w , u;

ld lo(ld x)
{
    while (x >= 360.0)
        x -= 360.0;
    return x;
}

int main()
{
    ///ios_base::sync_with_stdio(0) , cin.tie(NULL) , cout.tie(NULL);
    cin>>a>>b>>c>>t1>>t2;
    w = t1 * 30.0;
    u = t2 * 30.0;
    x = (1.0 * (a * 3600.0 + b * 60.0 + c)) / 120.0;
    y = (1.0 * (b * 60.0 + c * 1.0)) / 10.0;
    z = c * 6.0;
    ///cout<<x<<" "<<y<<" "<<z<<" "<<u<<" "<<w<<'\n';
    x = lo(x) , y = lo(y) , z = lo(z) , w = lo(w) , u = lo(u);
    ///cout<<x<<" "<<y<<" "<<z<<" "<<u<<" "<<w<<'\n';
    k = 0;
    if (w > u)
        swap(u , w);
    if (u > x && w < x)
        k ++;
    if (u > y && w < y)
        k ++;
    if (u > z && w < z)
        k ++;
    ///cout<<k<<'\n';
    ///cout<<x<<" "<<y<<" "<<z<<" "<<u<<" "<<w<<'\n';
    if (k % 3 == 0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
