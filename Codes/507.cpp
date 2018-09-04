#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,sum;
    cin >> n;
    i = 19;
    while(n)
    {
        j = i;
        sum = 0;
        while(j)
        {
            sum += j%10;
            j/= 10;
        }
        if(sum == 10)
            n--;
        if(n == 0)
            break;
        i += 9;
    }
    cout << i << endl;
    return 0;
}
