#include <iostream>

using namespace std;

bool g(double a, double b, double h, double m, double s)
{
    if(a <= b){
        if(a <= h && h <= b)
            return false;
        if(a <= m && m <= b)
            return false;
        if(a <= s && s <= b)
            return false;
    }
    else{
        if((a <= h && h <= 60) || (0 <= h && h < b))
            return false;
        if((a <= m && m <= 60) || (0 <= m && m < b))
            return false;
        if((a <= s && s <= 60) || (0 <= s && s < b))
            return false;
    }
    return true;
}
int main()
{
    double h, m, s, a, b;
    cin >> h >> m >> s >> a >> b;
    h *= 5; a *= 5; b *= 5;
    m += s / 60; h += m / 60;
    if(h >= 60)h -= 60;if(m >= 60)m -= 60;if(s >= 60)s -= 60;if(a >= 60)a -= 60;if(b >= 60)b -= 60;
    if(g(a, b, h, m, s) || g(b, a, h, m, s))
        cout << "yes";
    else
        cout << "no";
return 0;
}
