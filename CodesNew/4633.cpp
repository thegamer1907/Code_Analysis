#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);

    for(int i=0;i<n;i++){
        cin >> vec[i];
    }

    sort(vec.begin(),vec.end());
    int pt=n/2;
    int ans=n;
    for(int i=0;i<n/2;i++)
    {
        for(;;)
        {
            if(vec[i]*2<=vec[pt])
            {
                ans--;
                pt++;
                break;
            }
            else
            {
                pt++;
            }
            if(pt==n)
            {
                break;
            }
        }
        if(pt==n)
        {
            break;
        }
    }
    cout <<ans<< endl;
    return 0;
}