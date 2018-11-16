#include <iostream>

using namespace std;

int main()
{

    string q;
    int n,s;
    cin >> s;
    cin >> n;
    cin >> q;
    s= q.size();
    int i=s-1;
    for (int x=n;x>=1;x--)
{
    i=s-1;
    while (i>=1)
    {
        if (q[i]=='G'&& q[i-1]=='B')
        {
            swap (q[i],q[i-1]);
            i=i-2;
        }
        else if((q[i]=='B'&& q[i-1]=='G')||(q[i]=='G'&& q[i-1]=='G')||(q[i]=='B'&& q[i-1]=='B'))
        {
            i--;
        }

    }
}
        cout << q;
}
