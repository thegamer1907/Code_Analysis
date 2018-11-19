#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define sc(n) scanf("%d",&n)
#define scl(n) scanf("%lld",&n)
#define p(n) printf("%d",&n)
#define fi first
#define sec second
#define mp make_pair
#define pb push_back
int a[1000005];
int main()
{
	int i,j,k,l,m,n,t,r,cnt = 0;
	int flag = 0;
	ll ans = 0,an = 0;
	int h,s,t1,t2;
	cin >> h >> m >> s >> t1 >> t2;
	h = (h + 12-t1)%12;
	m = (m + 60 - t1*5)%60;
	s = (s + 60 - t1*5)%60;
	t2 = (t2 + 12-t1)%12;
//	cout << h << " " << m << " " << s << " " << t1 << " " << t2 << endl;
	int flag1 = 0,flag2 = 0;
	if(h <t2){
		flag1 = 1;
	}
	else{
		flag2 = 1;
	}
	if(m < t2*5){
		flag1 = 1;
	}
	else{
		flag2 = 1;
	}
	if(s < t2*5){
		flag1 = 1;
	}
	else{
		flag2 = 1;
	}
	if(flag1 == 1 && flag2 == 0){
		cout << "YES" << endl;
	}
	else if(flag1 == 0 && flag2 == 1){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
/*	t1 %= 12;
	t2 %= 12;
	i = t1;
	while(1){
		i %= 12;
		if(i == t2){
			flag = 2;
			break;
		}
		j = i+1;
		if(m >= i*5 && m<= j*5){
			flag = 1;
			break;
		}
		else if(s >= i*5 && s <= j*5){
			flag = 1;
			break;
		}
		else if(h >= i){
			flag = 1;
			break;
		}
		else{
			i = i+1;
		}
	}
	if(flag == 2){
		cout << "YES" << endl;
		return 0;
	}
	flag = 0;
	swap(t1,t2);
	i = t1;
	while(1){
                if(i == t2){
                        flag = 2;
                        break;
                }
                j = i+1;
                if(m >= i*5 && m<= j*5){
                        flag = 1;
                        break;
                }
                else if(s >= i*5 && s <= j*5){
                        flag = 1;
                        break;
                }
                else if(h >= i){
                        flag = 1;
                        break;
                }
                else{
                        i = i+1;
                }
        }
	if(flag == 2){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}*/
}
