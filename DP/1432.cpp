#include <iostream>
#include <bits/stdc++.h>


using namespace std;



int main(){



	int k;

	cin>>k;

	int a[k];


	for(int i=0;i<k;i++){

		cin>>a[i];
	}

	int ans = 0;
	int count = 0;
	int m=-1, n=-1, m1=-1, n1=-1;
	int ans1 = 0;
	if(a[0]==0){
		count++;
		ans++;
		m = 0;
		n = 0;
		m1 = 0;
		n1 = 0;
	}

	for(int i=1;i<k;i++){


		if(a[i]==0){
			if(m1==-1)
				m1 = i;
			n1 = i;
			count++;
		}
		else
			count--;

		if(count < 0){
			m1 = -1;
			n1 = -1;
			count = 0;
		}else{

			n = n1;
		}

		if(ans < count){
			m = m1;
			n = n1;
			ans = count;
		}


	}

	//cout<<m<<" "<<n<<"\n";

	if(m==-1 && n==-1){
		if(k==1)
			cout<<"0\n";
		else
			cout<<k-1<<"\n";
	}
	else{

		for(int i=0;i<m;i++)
			if(a[i]==1)
				ans1++;
		ans1 += ans;

		for(int i=m;i<=n;i++)
			if(a[i]==1)
				ans1++;

		for(int i=n+1;i<k;i++)
			if(a[i]==1)
				ans1++;


		cout<<ans1<<"\n";
	}

	return 0;

}