#include <bits/stdc++.h>

using namespace std;

int main()
{
  int i;
double h,m,s,t1,t2;
cin>>h>>m>>s>>t1>>t2;
h=(h==12?0:h);
t1=(t1==12?0:t1);
t2=(t2==12?0:t2);
vector<pair<double,double> > a(5);
a[0]=make_pair(t1/12,0);
a[1]=make_pair(t2/12,0);
a[2]=make_pair(h/12+m/(12*60)+s/(60*12*60),1);
a[3]=make_pair(m/60+s/(60*60),1);
a[4]=make_pair(s/60,1);
sort(a.begin(),a.end());
for(i=0;i<4;i++){
    if ((a[i].second==0)&&(a[i+1].second==0)) {
        cout<<"Yes";
        return 0;
    }
}
if ((a[0].second==0)&&(a[4].second==0)) {
    cout<<"Yes";
    return 0;
}
if ((a[0].second==0)&&(a[3].second==0)&&(a[4].first==a[3].first)) {
    cout<<"Yes";
    return 0;
}
cout<<"No"<<endl;
return 0;

}
