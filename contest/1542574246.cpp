#include <bits/stdc++.h>
using namespace std;
int h, m, s, t1, t2;
#define eps 0.0000001
void debug()
{
    double xx1 = 0.1;
    double xx2 = 0.000001;
    if(xx1 < xx2) cout<<"ddddd"<<endl;
}
int main()
{
    while(~scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2))
    {
        t1 %= 12;
        t2 %= 12;
        h %= 12;
        double ss = 6.0 * s;
        double mm = 6.0 * m + 0.1 * s;
        double hh = 30.0 * h + m / 2.0 + s / 120.0;
        double tt1 = t1 * 30.0;
        double tt2 = t2 * 30.0;
        //cout<<"ss == "<<ss<<endl;
        //cout<<"mm == "<<mm<<endl;
        //cout<<"hh == "<<hh<<endl;
        //cout<<"tt1 == "<<tt1<<endl;
        //cout<<"tt2 == "<<tt2<<endl;
        bool flag = false;
//        double Min = min(ss, mm);
//        double Max = max(ss, mm);
//        if(tt1 - Min > eps && tt1 - Max < eps && tt2 - Min > eps && tt2 - Max < eps) flag = true;
//        Min = min(ss, hh);
//        Max = max(ss, hh);
//        if(tt1 - Min > eps && tt1 - Max < eps && tt2 - Min > eps && tt2 - Max < eps) flag = true;
//        Min = min(hh, mm);
//        Max = max(hh, mm);
//        if(tt1 - Min > eps && tt1 - Max < eps && tt2 - Min > eps && tt2 - Max < eps) flag = true;
//
//        Max = max(ss, hh);
//        Min = min(ss, hh);
//        Max = max(Max, mm);
//        Min = min(Min, mm);
//debug();
        double x[4];
        x[1] = hh;
        x[2] = mm;
        x[3] = ss;
        sort(x + 1, x + 4);
        //for(int i = 1; i <= 3; i++) printf("x[%d] == %.5lf\n", i, x[i]);
        //printf("tt1 == %.5lf\n", tt1);
        //printf("tt2 == %.5lf\n", tt2);
        //cout<<tt2 - x[1]<<endl;
        if((tt1 - x[1] < eps) && (tt2 - x[1] < eps))
        {
            //cout<<tt2 - x[1]<<endl;
            flag = true;
            //cout<<"xxxxx"<<endl;
        }
        //if(flag) cout<<"test1"<<endl;
        if(tt1 - x[1] > eps && tt1 - x[2] < eps && tt2 - x[1] > eps && tt2 - x[2] < eps) flag = true;
        //if(flag) cout<<"test2"<<endl;
        if(tt1 - x[2] > eps && tt1 - x[3] < eps && tt2 - x[2] > eps && tt2 - x[3] < eps) flag = true;
        //if(flag) cout<<"test3"<<endl;
        if(tt1 - x[3] > eps && (tt2 - x[3] > eps || tt2 - x[1] < eps)) flag = true;
        //if(flag) cout<<"test4"<<endl;
        if(tt2 - x[3] > eps && (tt1 - x[3] > eps || tt1 - x[1] < eps)) flag = true;
        //if(flag) cout<<"test5"<<endl;
        if(flag) printf("YES\n");
        else printf("NO\n");

    }
    return 0;
}
