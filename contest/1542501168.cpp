#include <iostream>
#include <vector>
#include <algorithm>
using std::cin; using std::cout; using std::endl;
using std::vector;

bool cmp (double ,double);

int main()
{
    double h, m, s, t1, t2;

    while (cin >> h >> m >> s >> t1 >> t2)
    {
        vector<double> time;

        if (h==12) h=0;
        if (t1==12) t1=0;
        if (t2==12) t2=0;

        time.push_back(t1*5);
        time.push_back(t2*5);
        time.push_back(s);
        time.push_back(m+s/60);
        time.push_back(h*5+m/60+s/3600);

        std::sort(time.begin(), time.end(), cmp);

        bool flag = false;
        for (int i=0; i!=4; ++i)
            if (!flag && time[i]+time[i+1] ==(t1+t2)*5)
            {
                cout << "yes" << endl;
                flag = true;
            }
        if (!flag && time[0]+time[4] == (t1+t2)*5)
            {
                cout << "yes" << endl;
            }
        else if (!flag) cout << "no" << endl;
    }
    return 0;
}

bool cmp (double a, double b)
{
    return a>=b;
}