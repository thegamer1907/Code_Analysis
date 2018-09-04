#include <bits/stdc++.h>
using namespace std;


vector<pair<long long , long long > > v;

int bs(int xx , int yy , int x)
{
    int l = xx , h = yy , mid ;
    int ans = 0 ;
    while(l<=h)
    {
        mid = (l+h)/2;

        if(x >= v[mid].first && x <= v[mid].second)
        {
            ans = mid+1;
            break;
        }
        else if(x > v[mid].second)
        {
            l = mid+1;
        }
        else if(x < v[mid].first)
        {
            h = mid-1;
        }
    }
    return ans ;
}


int main()
{

    int n ;
    cin >> n;

    long long start = 1;
    long long num ;
    while(n--)
    {
        cin >> num ;
        v.push_back({start , start+num-1});
        start += num;
    }

    int m ;
    cin >> m;

    while(m--)
    {
        cin >> num;
        cout << bs(0 , v.size() -1 , num) << endl ;
    }



    return 0 ;
}
