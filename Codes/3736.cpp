#include <iostream>

using namespace std;

string rec;
long long int needed[3], owned[3], prices[3];
long long int low = 0, mid, high = 1e13, money, currMoney;

long long int maximumBurgers()
{
    while(low < high)
    {
        mid = low + (high - low + 1)/2;
        currMoney = 0;
        for(int i = 0; i < 3; i++)
        {
            if(mid * needed[i] > owned[i])
                currMoney += (mid * needed[i]  - owned[i]) * prices[i];
            //cout << currMoney << endl;
            if(currMoney > money)
                break;
        }
        //cout << currMoney << endl;
        if(currMoney > money)
            high = mid - 1;
        else
            low = mid;
    }
    return low;
}

int main()
{
	cin >> rec;
	for(int i = 0; i < 3; i++)
        cin >> owned[i];
	for(int i = 0; i < 3; i++)
        cin >> prices[i];
    cin >> money;
    for(int i = 0; i < (int)rec.length(); i++)
        if(rec[i] == 'B')
            ++needed[0];
        else if(rec[i] == 'S')
            ++needed[1];
        else
            ++needed[2];
    cout << maximumBurgers() << endl;
    return 0;
}


