/***
 *
 *
 *    DDDDDDDDDDDDD                                                  iiii lllllll 222222222222222        000000000     222222222222222
 *    D::::::::::::DDD                                              i::::il:::::l2:::::::::::::::22    00:::::::::00  2:::::::::::::::22
 *    D:::::::::::::::DD                                             iiii l:::::l2::::::222222:::::2 00:::::::::::::002::::::222222:::::2
 *    DDD:::::DDDDD:::::D                                                 l:::::l2222222     2:::::20:::::::000:::::::2222222     2:::::2
 *      D:::::D    D:::::D    eeeeeeeeeeee vvvvvvv           vvvvvviiiiiii l::::l            2:::::20::::::0   0::::::0           2:::::2
 *      D:::::D     D:::::D ee::::::::::::eev:::::v         v:::::vi:::::i l::::l            2:::::20:::::0     0:::::0           2:::::2
 *      D:::::D     D:::::De::::::eeeee:::::ev:::::v       v:::::v  i::::i l::::l         2222::::2 0:::::0     0:::::0        2222::::2
 *      D:::::D     D:::::e::::::e     e:::::ev:::::v     v:::::v   i::::i l::::l    22222::::::22  0:::::0 000 0:::::0   22222::::::22
 *      D:::::D     D:::::e:::::::eeeee::::::e v:::::v   v:::::v    i::::i l::::l  22::::::::222    0:::::0 000 0:::::0 22::::::::222
 *      D:::::D     D:::::e:::::::::::::::::e   v:::::v v:::::v     i::::i l::::l 2:::::22222       0:::::0     0:::::02:::::22222
 *      D:::::D     D:::::e::::::eeeeeeeeeee     v:::::v:::::v      i::::i l::::l2:::::2            0:::::0     0:::::2:::::2
 *      D:::::D    D:::::De:::::::e               v:::::::::v       i::::i l::::l2:::::2            0::::::0   0::::::2:::::2
 *    DDD:::::DDDDD:::::D e::::::::e               v:::::::v       i::::::l::::::2:::::2       222220:::::::000:::::::2:::::2       222222
 *    D:::::::::::::::DD   e::::::::eeeeeeee        v:::::v        i::::::l::::::2::::::2222222:::::200:::::::::::::002::::::2222222:::::2
 *    D::::::::::::DDD      ee:::::::::::::e         v:::v         i::::::l::::::2::::::::::::::::::2  00:::::::::00  2::::::::::::::::::2
 *    DDDDDDDDDDDDD           eeeeeeeeeeeeee          vvv          iiiiiiilllllll22222222222222222222    000000000    22222222222222222222
 *
 ***/


#include<bits/stdc++.h>

typedef long long int lll;
typedef long int ll;
typedef int l;
typedef double dd;
typedef char cc;

#define f(i,n) for(i=0;i<n;i++)
#define fi(i,a,n) for(i=a;i<n;i++)
#define ve vector <int>
#define fd(i,n) for(i=n-1;i>=0;i--)
#define si(a) scanf("%d",&a)
#define w(i,n) while(i<n)
#define sc(a) scanf("%c",&a);
#define sl(a) scanf("%lld",&a);
#define pi(a) printf("%d",a);
#define ps(a) printf("%s",a);
#define pl(a) printf("%lld",a);

using namespace std;

int main(){
	l i,j=0,k=0;
	/*#ifndef ONLINE_JUDGE
		freopen("./input.txt","r",stdin);
		freopen("./output.txt","w",stdout);
	#endif*/
	string s1,s;
	cin>>s1;
	l n;
	cin>>n;
	f(i,n)
	{
		cin>>s;
		if(s==s1)
		j=1,k=1;
		if(s1[0]==s[1])
		j=1;
		if(s1[1]==s[0])
		k=1;
	}
	if(j&&k)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	
}


