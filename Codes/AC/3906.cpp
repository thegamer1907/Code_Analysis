#include <bits/stdc++.h>
using namespace std;
long long i , n , q , nb , ns , nc , pb , ps , pc , d , b , c , s , l , r ,m , f;
string a ;
int main()
{
    //ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>a>>nb>>ns>>nc>>pb>>ps>>pc>>d;
    for(i=0;i<a.size();i++){
        if(a[i]== 'B')
            b ++;
        if(a[i] == 'S')
            s ++ ;
        if(a[i] == 'C')
            c ++ ;
    }

    l = 0 ;
    r = 1e13;
    while(l + 1 < r){
        m = (l + r) / 2;
        f = max(m * b - nb , 0ll ) * pb + max(m * s - ns, 0ll) * ps + max(m * c - nc, 0ll) * pc ;
       // cout << "m = "<<m<<" sum = "<<f<<'\n';
        if(f <= d) l = m ;
        else r = m ;
    }
    cout << l ;
}
