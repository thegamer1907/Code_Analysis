#include<bits/stdc++.h>

using namespace std;

int h,m,s,t1,t2;

int main()
{
    cin >> h >> m >> s >> t1 >> t2;

    if(h == 12)
    {
        h = 0;
    }

    if(t1 == 12)
    {
        t1 = 0;
    }
    if(t2 == 12)
    {
        t2 = 0;
    }

    int counter = 0;

    if(t1 > t2)
        swap(t1,t2);

    if(h >= t1 && h < t2)
        counter++;

    if(m >= t1*5 && m < t2*5)
        counter++;

    if(s > t1*5 && s < t2*5)
        counter++;

    if(counter == 0 || counter == 3)
        cout << "YES";
    else{
        cout << "NO";
    }


    return 0;
}

