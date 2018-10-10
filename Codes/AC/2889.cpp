#include<bits/stdc++.h>
using namespace std;
string a,b;
int n,m,l,r;
int z[2000001];
bool check;
bool checK(int mid){
	 if (z[n-mid] >= mid){
            for (int i = 1; i<n-mid; i++){
                if (z[i] >= mid){
                     check = true;
                    return true;
                }
            }
        }
        return false;
}
int main(){
	cin>>a;
	n=a.length();
	z[0]=n;
	l=0;r=0;
	for(int i=1;i<n;++i){
		if(i>r){
			l=r=i;
			while(r<n&&a[r]==a[r-l])
				r++;
			z[i]=r-l;
			r--;	
		}
		else{
			int k=i-l;
			if(z[k]<r-i+1)
				z[i]=z[k];
			else{
				l=i;
				while(r<n&&a[r]==a[r-l])
					r++;
				z[i]=r-l;
				r--;	
			}	
		}
	}
	l=1;r=n;
	while(l<=r){
		int mid=(l+r)/2;
		if(checK(mid))
			l=mid+1;
		else
			r--;
	}
	if (!check) 
		cout << "Just a legend";
    else 
		cout << a.substr(0, r);
    return 0;
}