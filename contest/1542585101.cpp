
#include <map>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
long long n,k;
long long MOD = 1000000007;
string a[200];
int main() {
    int h, m , s,t1,t2;

    cin >> h >> m >> s >> t1 >> t2;
    if(t1>12)t1-=12;
    if(t2>12)t2-=12;
    double H = h;
    if(m>0 || s > 0){
        H+=0.5f;
    }

    double M = m/5;
    if(m%5!=0)M+=0.5f;
    else
    if( s > 0){
        M+=0.5f;
    }
    double S = s/ 5;
    if(s%5!=0)S+=0.5f;
    if(H>12)H-=12;
//    cout << H << M << S << endl;
    double d[10];
    d[0] = H;
    d[1] = M;
    d[2] = S;
    sort(d,d+3);
//    d[3 ] = t1;
//    d[3] = t2;
    int ok = 0;
//    cerr<<d[0]<<d[1]<<d[2]<<endl;
//    cout << t1 << t2<<endl;
    if(t1<=d[0] && t2<=d[0] ){cerr<<1<<endl; ok = 1;}
    if(t1<=d[0] && t2>=d[2] ){cerr<<2<<endl; ok = 1;}
    if(t1>=d[2] && t2<=d[0] ){cerr<<3<<endl; ok = 1;}
    if(t1>=d[2] && t2>=d[2] ){cerr<<4<<endl; ok = 1;}
    if(t1<=d[1] && t1>=d[0] && t2<=d[1] && t2>=d[0]){cerr<<5<<endl; ok = 1;}
    if(t1<=d[2] && t1>=d[1] && t2<=d[2] && t2>=d[1]){cerr<<6<<endl; ok = 1;}
    if(ok){
        cout <<"YES"<<endl;
    }
    else{
        cout <<"NO"<<endl;
    }
    return 0;
}