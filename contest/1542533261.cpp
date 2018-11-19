#include<bits/stdc++.h>
using namespace std;
const int MAX_N = 1e3 + 9;
const int MOD = 998244353;
double vec[10];
int N,M,x;
int main()
{
    double h,m,s,t1,t2;
    cin>>vec[1]>>vec[2]>>vec[3]>>t1>>t2;
    vec[0] = 0.0;
    vec[4] = 12.0;
    vec[2] /= 5.0;
    vec[3] /= 5.0;
    sort(vec+1,vec+4);
    bool flag = false;

    //for(int i=0;i<4;i++) cout<<".."<<vec[i]<<endl;
    //cout<<".."<<t1<<endl<<".."<<t2<<endl;

    for(int i=1; i<=4; i++)
    {
        if(vec[i] >= t1 && vec[i] >= t2 && vec[i-1] < t1 && vec[i-1] < t2) flag = true;
    }
    int temp = 0;
    if(t1>vec[3] || t2>vec[3]) temp++;
    if(t1<=vec[1] || t2<=vec[1]) temp++;
    if(temp == 2) flag = true;
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
