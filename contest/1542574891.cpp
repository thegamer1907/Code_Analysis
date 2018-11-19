#include <iostream>

using namespace std;

int main()
{
    int h,m,s,t1,t2;
    cin >> h >> m >> s >> t1 >> t2;
    h=(h*5)%60;
    t1=(t1*5)%60;
    t2=(t2*5)%60;
    if (t1>t2)
        swap(t1, t2);
    if (s>t1 && s<t2)
    {
        if (h>=t1 && h<t2 && m>=t1 && m<t2)
        {
            cout << "YES";
            return 0;
        }
    }
    else if (s>t2 || s<t1)
    {
        if (s==0 && m==0)
        {
            if ((h>t2 || h<t1) && (m>t2 || m<t1))
            {
                cout << "YES";
                return 0;
            }
        }
        else
        {
            if ((h>=t2 ||h<t1) && (m>=t2 || m<t1))
            {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
}
