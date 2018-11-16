#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int x = 0; int y = 0;int z = 0;
	int xn,yn,zn;
	for(int i=0;i<n;++i){
		cin>>xn>>yn>>zn;
		x+=xn;
		y+=yn;
		z+=zn;
	}

	if(x==0&&y==0&&z==0){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
    return 0;
}
