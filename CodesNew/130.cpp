#include <iostream>
#include <algorithm>
#include <set>
#include <iomanip>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    double n , l,x,mini = 0;
    set < double > lanterns;
    set < double > :: iterator it,it1;
    cin >> n >> l;
    for (int i = 0 ; i < n ; i++)
    {
        cin >> x ;
        lanterns.insert(x);
    }
    it = --lanterns.end();
    it1 = --(--lanterns.end());
    for (; it != --lanterns.begin() ;it-- , it1--)
    {
        mini = max (mini , ((((*it)-(*it1)))*0.5));
    }
    it = lanterns.begin();
    mini = max (*it , mini);
    it = --lanterns.end();
    mini = max (mini , ( l - (*it)));
    cout << fixed << setprecision(10) << mini << endl;
    return 0;
}
