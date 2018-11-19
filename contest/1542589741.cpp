#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

string a[150];

int main()
{
    int h,m,s;
    cin >> h >> m >> s;
    h%=12;
    int t1,t2;
    cin >> t1 >> t2;
    double h1=h;h1+=0.5;
    double m2=m/5;m2+=0.5;
    double s2=s/5;s2+=0.5;
    vector<double> w={h1,m2,s2};
    sort(w.begin(),w.end());
    //cout << w[0] << ' ' << w[1] << ' ' << w[2] << endl;
    t1%=12;
    t2%=12;
    double x1=t1;
    double x2=t2;
    if (t1>t2){swap(t1,t2);}
    if (t1<w[0]&&t2>w[2]){cout << "YES";return 0;}
    if (w[0]<t1&&t1<w[1]&&w[0]<t2&&t2<w[1]){cout << "YES";return 0;}
    if (w[1]<t1&&t1<w[2]&&w[1]<t2&&t2<w[2]){cout << "YES";return 0;}
    if (t1<w[0]&&t2<w[0]){cout << "YES";return 0;}
    if (t1>w[2]&&t2>w[2]){cout << "YES";return 0;}
    cout << "NO";
    return 0;
}
