	#include<bits/stdc++.h>
	#define x first
	#define y second
	#define m_p make_pair
	using namespace std;
	typedef long long LL;
	int main(void){
		char s1,s2;
		s1=getchar();
		s2=getchar();
		int n;
		scanf("%d",&n);
		bool h1=false,h2=false;
		for (int i=1;i<=n;i++){
			char c=getchar();
			char n1,n2;
			while(c==10){
				c=getchar();
			}
			n1=c;
			n2=getchar();
			if (n1==s1&&n2==s2){
				printf("YES");
				return 0;
			}
			if (n1==s2) h1=1;
			if (n2==s1) h2=1;
		}
		if (h1&&h2){
			printf("YES");
		}
		else{
			printf("NO");
		}
		return 0;
	}