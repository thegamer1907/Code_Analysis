#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<functional>
#include<string>
#include<cstring>
#include<cstdlib>
#include<queue>
#include<utility>
#include<fstream>
#include<sstream>
#include<cmath>
#include<stack>
#include<iterator>
#include<unordered_map>
#include<unordered_set>
#include<assert.h>
using namespace std;

int main(){
    int h,m,s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    pair <double, char> p;
    vector <pair <double,char > > vp;
    h = h%12;
    t1 = t1%12;
    t2 = t2%12;
    double hh = (h * 3600 + m*60+ s)/(12.0*3600);
    double mm = (m*60+s)/3600.0;
    double ss = (s%60)/(60*1.0);
    double tt1 = t1/12.0;
    double tt2 = t2/12.0;
    vp.push_back(make_pair(hh,'N'));
    vp.push_back(make_pair(mm,'N'));
    vp.push_back(make_pair(ss,'N'));
    vp.push_back(make_pair(tt1,'S'));
    vp.push_back(make_pair(tt2,'D'));
    sort(vp.begin(),vp.end());
    
    int u = find(vp.begin(),vp.end(),make_pair(tt1,'S'))-vp.begin();
    int bef = (u+vp.size()+1) %vp.size();
    int aft = (u+vp.size()-1) %vp.size();
    if(vp[bef].second == 'D' || vp[aft].second== 'D'){
        cout << "YES" << endl;
    }
    else cout<< "NO" << endl;
    
    
    
    
    
    
    
    return 0;
}
