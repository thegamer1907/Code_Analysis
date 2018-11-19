# include <bits/stdc++.h>

#define fr first
#define sc second
#define mk make_pair
#define pb push_back
#define ll long long

using namespace std;


int main()
{
    double h, m, s, t1, t2;
    int c = 0;
    cin >> h >> m >> s >> t1 >> t2;
    h = (h + (m / 60) + (s / 3600));
    m = (m + (s / 60)) / 5;
    s /= 5;
    if (t1 == t2){
        cout << "YES";
        return 0;
    }
    if (t1 > t2)swap(t1, t2);
    if (h > t1 && h < t2)
     c++;
    if (m > t1 && m < t2)
     c++;
    if (s > t1 && s < t2)
     c++;
    if (c % 3 == 0)
        cout <<"YES";
    else cout << "NO";
   return 0;
}


