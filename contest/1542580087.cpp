#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <cmath>


#define pb push_back
#define mp make_pair

using namespace std;



int main()
{
 ios_base::sync_with_stdio(false);

    int h,m,s,t1,t2;
    cin >> h >>m >> s >> t1>> t2;
  //  h*=5;
    t1*=5;
    t2*= 5;
double hh = h, mm =m;
    if( t1 > t2 ) swap( t1,t2 );

    hh = 5*h + (double)m/60 + (double) s/3600;
    while( hh >= 60 ) hh-=60;
    mm += (double)s/60;
    while( mm >=60 ) mm-=60;

    //cout <<hh << " "<<mm << endl;
  //cout  << hh << " " << mm << " " << s<<" " << t1 << " " << t2 << " " <<endl;
    if(  hh > t1  && hh < t2  )
    {
        if( mm > t2 || mm < t1 )
            cout << "NO" << endl;
        else if( s > t2 || s < t1 )
            cout << "NO" << endl;
            else cout << "YES" <<endl;

    }
else if( hh < t1 || hh > t2 )
{
//    cout << " dada " << endl;
    if( mm  > t1 && mm < t2 )
        cout <<"NO" << endl;
    else if( s > t1 && s < t2 )
        cout <<"NO" << endl;
    else cout << "YES" << endl;
}

return 0;
}






















