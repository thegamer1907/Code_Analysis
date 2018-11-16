#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    int s=0;
    while(n!=m)
    {
        //cout << m;
        if(m<n)
        {
            m++;
            s++;
            continue;
        }
        if(m%2==0)
        {
            m/=2;
            s++;
            continue;
        }
        m+=1;
        m/=2;
        s+=2;
    }
    cout << s;
}
