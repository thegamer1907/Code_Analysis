#include <bits/stdc++.h>
using namespace std;

#define f(i, num) for(int i=0; i<num; i++) //0 - based indexing
#define f1(i, num) for(int i=1; i<=num; i++) //1 - based indexing
#define F(i, lower, upper, step) for(int i=lower; i<upper; i+=step)
#define F_(i, upper, lower, step) for(int i=upper; i>lower; i-=step)

#define read(num) scanf("%d", &num)
#define read2(num1, num2) scanf("%d%d", &num1, &num2)
#define read3(num1, num2, num3) scanf("%d%d%d", &num1, &num2, &num3)
#define reads(str) scanf("%s", str)
#define readc(ch) scanf("%c", &ch)

#define M 1000000007
#define pb push_back
#define mp make_pair

#define pii pair<int, int>
#define vi vector<int>
#define ll long long

int main()
{
	int h, m, s, t1, t2;
	int f1=1, f2=1;
	double a, b;

	cin>>h>>m>>s;
	read2(t1, t2);

	if(h >= 12)
        h -= 12;

	double d2 = (s*1.0/60)*12;
	double d1 = ((m + (s / 60.0))*1.0/60)*12;
    double d0 = (h + ((m + (s / 60.0)) / 60.0));

	a = min(t1, t2);
	b = max(t1, t2);

    if(d0 > a && d0 < b)
        f1 = 0;
    if(d2 > a && d2 < b)
        f1 = 0;
    if(d1 > a && d1 < b)
        f1 = 0;

    if(d0 > b && d0 < 12)
        f2 = 0;
    if(d2 > b && d2 < 12)
        f2 = 0;
    if(d1 > b && d1 < 12)
        f2 = 0;

    if(d0 >= 0 && d0 < a)
        f2 = 0;
    if(d2 >= 0 && d2 < a)
        f2 = 0;
    if(d1 >= 0 && d1 < a)
        f2 = 0;

    //cout<<d0<<" "<<d2<<" "<<d1<<" "<<a<<" "<<b<<endl;
    //cout<<f1<<" "<<f2<<endl;

    if(f1 == 1 || f2 == 1)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
