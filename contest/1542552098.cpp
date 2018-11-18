#include <iostream>

using namespace std;

int main()
{
    int h,m,s,t,t1;
    cin>>h>>m>>s>>t>>t1;

    int ah = (h*60 + m)*60 + s, am = m * 60 + s, as = s;
    if(t>t1)swap(t,t1);
    if((t1*5<as || t*5>as) && (t1*5*60<am || t*5*60>am)&&(t1*3600<ah || t*3600>ah))
       {
           cout << "yes";
       }
       else
        if((t1*5>as && t*5<as) && (t1*5*60>am && t*5*60<am)&&(t1*3600>ah && t*3600<ah))
       {
           cout<<"yes";
       }
       else
       {
           cout<<"no";
       }
    return 0;
}
