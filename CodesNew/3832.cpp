#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int a1, a2;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if(i == 0)
        {
            a1 = a;
            a2 = a;
        }
        else
        {
            a1 = max(a1,(long long)a);
            a2 += a;
        }
    }
    if(a2%(n-1) == 0) a2 /= (n-1);
    else
    {
        a2 /= (n-1);
        a2++;
    }
    cout << max(a1,a2);
    return 0;
}