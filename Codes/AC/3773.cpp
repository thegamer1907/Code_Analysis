#include <bits/stdc++.h>
using namespace std;

#define clr(i, j)     memset(i, j, sizeof(i))
#define pb            push_back
#define mp            make_pair
typedef long long     ll;
ll cost[3], need[3], have[3], r, cnt;
int main()
{
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == 'B')
            need[0]++;
        if(s[i] == 'S')
            need[1]++;
        if(s[i] == 'C')
            need[2]++;
    }
    for(int i=0; i<3; i++)
        cin >> have[i];

    for(int i=0; i<3; i++)
        cin >> cost[i];
    cin >> r;
    while(true)
    {
        int tot = 0, c = 0;
        for(int i=0; i<3; i++)
        {
            if(have[i] == 0 || need[i] == 0)
                    c++;
            if(have[i] < need[i])
            {
                tot += (need[i]-have[i])*cost[i];
                have[i] = need[i];
            }
        }
        if(c >= 3 || r < tot)
            break;

        for(int i=0; i<3; i++)
            have[i] -= need[i];
        r -= tot;
        cnt++;
    }
    int tot = 0;
    for(int i=0; i<3; i++)
        tot += need[i]*cost[i];
    cout << cnt + r/tot << endl;
}
