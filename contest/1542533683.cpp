#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <queue>
using namespace std;
#define ll long long int

int main(){
    double hh,mm,ss,t1,t2;
    cin>>hh; cin>>mm; cin>>ss; cin>>t1; cin>>t2;
    double sdeg, mdeg, hdeg;
    sdeg = (ss/60.0)*12.0;
    mdeg = ((mm+ss/60.0)/60.0)*12.0;
    hdeg = hh + mm/60.0 + ss/(3600.0);
    
    if (t1 > t2)
    {
        t1 += t2;
        t2 = t1 - t2;
        t1 = t1 - t2;
    }
    int count = 0;
    //cout<<sdeg<<" "<<mdeg<<" "<<hdeg<<endl;
    if (sdeg > t1 && sdeg < t2) count++;
    if (mdeg > t1 && mdeg < t2) count++;
    if (hdeg > t1 && hdeg < t2) count++;
    if (count % 3 == 0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}