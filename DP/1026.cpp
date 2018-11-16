#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, x = 0, y = 0, a[100];
    cin >> n;
    int count = 0, maxsum;
    for(i=0; i<n; i++)
    cin >> a[i];
    if(a[0] == 1)
    maxsum = -1;
    else
    maxsum = 1;
    for(i=0; i<n; i++)
    {
        int thissum = 0;
        for(j=i; j<n; j++)
        {
            if(a[j] == 0)
            thissum += 1;
            else
            thissum -= 1;
            
            if(thissum > maxsum)
            {
                maxsum = thissum;
                x = i;
                y = j;
            }
        }
    }
    
    for(i=0; i<n; i++)
    {
        if(i <= y && i >= x)
        {
            count += 1 - a[i];
        }
        else
        count += a[i];
    }
    
    cout << count;
}