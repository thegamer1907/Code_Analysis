#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    cout<<fixed;
    float mi = m + (float)s/60;
    float hr = h + mi/60;
    //cout<<setprecision(3)<< hr << endl;
    //cout<<setprecision(3)<< mi <<endl;
    //cout<<t1<<" "<<t2<<" "<<t1*5<<" "<<t2*5<<endl;
    int tmin = min(t1,t2);
    int tmax = max(t1,t2);
    t1 = tmin;
    t2 = tmax;
    int f = 0;
    if( ((hr > t1 && hr < t2) && (mi > t1*5 && mi < t2*5) && (s > t1*5 && s < t2*5) ))
    {
        cout<<"YES";
        return 0;
    }
    if((!(hr > t1 && hr < t2) && !(mi > t1*5 && mi < t2*5) && !(s > t1*5 && s < t2*5)))
    {
        cout<<"YES";
    }
    else cout<<"NO";
    return 0;
}
