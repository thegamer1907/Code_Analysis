#include <iostream>
#include <cstdio>

using namespace std;

int req[3], kit[3], pri[3];
long long int coins, low, high, mid,pay,s;

long long int sandiwch()
{
    low = 0, high = 1e12 + 5000;
    bool br;
    s = coins;
    while(low < high)
    {
        mid = low + (high - low + 1)/2;
        br = 0;
        coins = s;
        //cout << "low : " << low << " - high : " << high << " - mid : " << mid << endl;
        for(int i = 0; i < 3; i++)
        {
            if(req[i] == 0) continue;
            if(kit[i] / req[i] < mid)
            {
                pay = ((mid*req[i])-kit[i])*pri[i];
                if(pay > coins)
                {
                    br = 1;
                    high = mid - 1;
                    break;
                }
                else
                    coins -= pay;
            }
        }
        if(!br)
            low = mid;
    }
    return low;
}

int main()
{
    string x;
    cin >> x;
    for(int i = 0; i < x.length(); i++)
    {
        if(x[i] == 'B') ++req[0];
        else if (x[i] == 'S') ++req[1];
        else ++req[2];
    }
    scanf("%d%d%d",&kit[0],&kit[1],&kit[2]);
    scanf("%d%d%d",&pri[0],&pri[1],&pri[2]);
    scanf("%lld",&coins);
    printf("%lld",sandiwch());
    return 0;
}
