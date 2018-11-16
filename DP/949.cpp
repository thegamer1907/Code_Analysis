#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector < int > arr(n);
    
    int temp;
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        if(temp)
            arr[i] = -1;
        else
            arr[i] = 1;
    }
    
    int globalMax = arr[0];
    int currMax = arr[0];
    int first = 0, last = 0;
    int first2 = -1;
    for(int i = 1; i < n; i++)
    {
        if((currMax + arr[i]) > arr[i])
        {
            currMax += arr[i];
        }
        else
        {
            currMax = arr[i];
            first2 = i;
        }
        if(currMax > globalMax)
        {
            globalMax = currMax;
            last = i;
            first = first2;
        }
    }
    
    int c = 0;
    for(int i = 0; i < first; i++)
        if(arr[i] == -1)
            c++;
    for(int i = first; i <= last; i++)
        if(arr[i] == -1)
            c++;
    c += globalMax;
    //cout << globalMax << endl;
    for(int i = last + 1; i < n; i++)
        if(arr[i] == -1)
            c++;
            
    cout << c;
}