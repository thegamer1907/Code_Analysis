#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int n,s,e,q,lookFor,high,low,mid;
vector<pair<int,int> > v;

int binarySearch()
{
    low = 0, high = n-1;
    while(low <= high)
    {
        mid = low + (high-low)/2;
        //cout << mid << " - " << lookFor << endl;
        if(v[mid].first <= lookFor && v[mid].second >= lookFor)
            return mid+1;
        else if(v[mid].second < lookFor)
            low = mid+1;
        else if(v[mid].first > lookFor)
            high = mid - 1;
    }
}

int main()
{
    scanf("%d",&n);
    s = 1;
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&e);
        v.push_back({s,e+s-1});
        s = v[i].second+1;
    }
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d",&lookFor);
        printf("%d\n",binarySearch());
    }
    return 0;
}
