#include <iostream>
#include <string>
using namespace std;

int main() {
    int h,m,s,t1,t2,p1,p2;
    int ph,pm,ps,n1=0,n2=0;

    cin >> h>>m>>s>>p1>>p2;

    if(h>=12) h-=12;
    if(p1>=12) p1-=12;
    if(p2>=12) p2-=12;

    ps = s*12*60;
    pm = m*12*60+s*12;
    ph = h*3600+m*60+s;

    if(p1 < p2 )
    {
        t1 = p1*3600;
        t2 = p2*3600;
    }
    else
    {
        t1=p2*3600;
        t2=p1*3600;
    }

/*    cout <<ph<<endl;
    cout <<pm<<endl;
    cout <<ps<<endl;
    cout <<t1<<endl;
    cout <<t2<<endl;
*/
    if(ps > t1 && ps < t2) n1++;
    if(pm > t1 && pm < t2) n1++;
    if(ph > t1 && ph < t2) n1++;

    if(ps < t1 || ps > t2) n2++;
    if(pm < t1 || pm > t2) n2++;
    if(ph < t1 || ph > t2) n2++;
/*    cout <<n1<<endl;
    cout <<n2 << endl;
*/

    if(n1 == 0 || n2 == 0)
        cout <<"YES\n";
    else
        cout <<"NO\n";
    return 0;
}
