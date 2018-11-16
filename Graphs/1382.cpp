#include<iostream>
using namespace std;
int main()
{
    long long n,t,i,j,a[100000];
    cin >> n >> t;
    for(i = 1 ; i < n ; i++)
    {
        cin >> a[i];
    }
    long long counter = 1;
    i = 1;
    while(counter <= t)
    {
        if(counter == t)
        {
            cout << "YES";
            return 0;
        }
        else if(counter < t)
        {
            counter += a[i];
            i = counter;
        }
    }
    cout << "NO";
    return 0;
}
