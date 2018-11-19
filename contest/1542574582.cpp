#include<bits/stdc++.h>
using namespace std;
int main()
{
    double  h,m,s,i,j,t1,t2,a[22];
    while(cin>>h>>m>>s>>t1>>t2)
	{
		m+=s/60;
		h+=m/60;
		if(h>12)
		{
			h=m/60;
		}
//		cout<<h<<" "<<m<<" "<<s<<endl;
		a[0]=h,a[1]=12*(m/60),a[2]=12*(s/60);
	//	printf("%lf\n",a[1]);
		sort(a,a+3);
	//printf("%lf %lf %lf\n",a[0],a[1],a[2]);
		int f1=0,f2=0;
		if(t1>a[0]&&t1<a[1]) f1=1;
		else if(t1>a[1]&&t1<a[2]) f1=2;
		if(t2>a[0]&&t2<a[1]) f2=1;
		else if(t2>a[1]&&t2<a[2]) f2=2;
	//	cout<<f1<<" "<<f2<<endl;
		if(f1==f2) puts("YES");
		else puts("NO");

	}
    return 0;
}
