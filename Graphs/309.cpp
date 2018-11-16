#include <bits/stdc++.h>

using namespace std;

int main() 
{
    vector<char> arr;
    int n, t;
    cin >> n >> t;
    for(int i = 0; i<n; i++)
    {
        char x;
        cin>>x;
        arr.push_back(x);
    }    
    for(int i = 0; i<t; i++)
    {
        for(int j = 0; j<arr.size()-1;)
        {
            if(arr[j] == 'B' && arr[j+1] == 'G')
            {
                swap(arr[j],arr[j+1]);
                j+=2;
            }
            else
            {
                j++;
            }
        }
    }
    for(int i = 0; i<arr.size(); i++)
        cout<<arr[i];
}