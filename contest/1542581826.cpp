#include <iostream>
#include <cstring>
using namespace std;
int time[1000000];
int main()
{
    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2 ;
    if(t1 > t2)swap(t1, t2);
    memset(time, 0, sizeof(time));
    if(h*5*60*60+m*60+s >= 60*60*60)time[60*60*60-h*5*60*60+m*60+s] = 1;
    else    time[h*5*60*60+m*60+s] = 1;
    time[m*60*60+s*60] = 1;
    time[s*60*60] = 1;
    int ok = 0;
    int l = 0;
    int r = 0;

    for(int i = t1*5*60*60; i <= t2*5*60*60; i++)
    {
        if(time[i] == 1)l = 1;
    }
    for(int i = 0; i <= t1*5*60*60; i++)
    {
        if(time[i] == 1)r = 1;
    }
    for(int i = t2*5*60*60; i < 60*60*60; i++)
    {
        if(time[i] == 1)r = 1;
    }
    if(l == 0 || r == 0)ok = 1;
    if(ok == 1)cout << "YES" << endl;
    else cout << "NO" << endl;
}
