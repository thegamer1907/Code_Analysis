#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

double pi = acos(-1);
double h,m,s,t1,t2;


int main(){

cin>>h>>m>>s>>t1>>t2;

h = 2.0*pi/12.0 * h;
m = 2.0*pi/60.0 * m;
s = 2.0*pi/60.0 * s;

m+= s/60.0/12.0*pi;
h+= m/60.0/12.0*pi;

t1 = 2.0*pi/12.0 * t1;t2 = 2.0*pi/12.0 * t2;


if( t1 < t2 ){

    if( h < t1 || h > t2 )
    if( m < t1 || m > t2 )
    if( s < t1 || s > t2 ){
        cout<<"YES"<<endl;
        return 0;
    }

    if( h > t1 && h < t2 )
    if( m > t1 && m < t2 )
    if( s > t1 && s < t2 ){
        cout<<"YES"<<endl;
        return 0;
    }

    cout<<"NO"<<endl;
    return 0;
}

swap(t1,t2);

    if( h < t1 || h > t2 )
    if( m < t1 || m > t2 )
    if( s < t1 || s > t2 ){
        cout<<"YES"<<endl;
        return 0;
    }

    if( h > t1 && h < t2 )
    if( m > t1 && m < t2 )
    if( s > t1 && s < t2 ){
        cout<<"YES"<<endl;
        return 0;
    }

    cout<<"NO"<<endl;
    return 0;
}
