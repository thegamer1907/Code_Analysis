#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int mx = 4e5+10;

string ss;
ll x,y,z,n1,n2,n3,p1,p2,p3;
ll r,nol= 0,money;

bool can(ll mid) {
    ll temp1 = max(mid*x-n1,nol),temp2=max(mid*y-n2,nol),temp3=max(mid*z-n3,nol);
    money=r;
    //cout << temp1 << " " << temp2 << " " << temp3 << endl;

    temp1 *= p1;
    temp2 *= p2;
    temp3 *= p3;
    /*
    if(temp1) {
        if(temp1%x) temp1 = (temp1/x+1)*p1;
        else temp1 = (temp1/x)*p1;
    }
    if(temp2) {
        if(temp2%y) temp2 = (temp2/y+1)*p2;
        else temp2 = (temp2/y)*p2;
    }
    if(temp3) {
        if(temp3%z) temp3 = (temp3/z+1)*p3;
        else temp3 = (temp3/z)*p3;
    }
    */
    //cout << temp1 << " " << temp2 << " " << temp3 << endl;
    if(temp1 <= money) money -= temp1;
    else return 0;
    if(temp2 <= money) money -= temp2;
    else return 0;
    if(temp3 <= money) money -= temp3;
    else return 0;

    return 1;
}

int main() {
    x = y = z = 0;
    ll a,b,mid;
    cin >> ss;
    scanf("%I64d %I64d %I64d",&n1,&n2,&n3);
    scanf("%I64d %I64d %I64d",&p1,&p2,&p3);
    scanf("%I64d",&r);
    for(int i=0;i<ss.length();i++) {
        if(ss[i] == 'B') x++;
        else if(ss[i] == 'S') y++;
        else z++;
    }
    a = 0;
    b = r/min(min(p1,p2),p3)+1000;
    while(b-a > 1) {
        mid = (a+b)/2;
        //cout << mid << " = ";
        if(can(mid)) a = mid;
        else b = mid-1;
        //cout << (a == mid?"CAN":"NO") << endl;
        //cout << money << endl;
    }
    if(can(b)) a = b;
    printf("%I64d\n",a);
}

