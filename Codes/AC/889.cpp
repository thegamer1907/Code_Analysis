#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
	string a;
	cin>>a;
	int A[n], B[n];
	for (int i=0; i<n; i++){
        if (a[i]=='a'){
            A[i]=1;
            B[i]=0;
        }
        else{
            B[i]=1;
            A[i]=0;
        }
	}
	for (int i=1; i<n; i++){
        A[i]+=A[i-1];
        B[i]+=B[i-1];
	}
	int ans = 0;
	int l1=0, r1=n-1;
	if (B[r1]<=k){
        ans=n;
	}
	else{
        while(r1-l1>1){
            int mid = (r1+l1)/2;
            if (B[mid]>k){
                r1=mid;
            }
            else{
                l1=mid;
            }
        }
	}
	ans=max(ans, l1+1);
	l1=0, r1=n-1;
	if (A[r1]<=k){
        ans=n;
	}
	else{
        while(r1-l1>1){
            int mid = (r1+l1)/2;
            if (A[mid]>k){
                r1=mid;
            }
            else{
                l1=mid;
            }
        }
	}
	ans=max(ans, l1+1);
	for (int i=0; i<n; i++){
        if (a[i]=='a'){
            int x = i==0 ? 0 : B[i-1];
            int y = x+k+1;
            int l = i, r = n-1;
            if (B[r]<y){
                ans=max(ans, n-i);
            }
            else{
                while (r-l>1){
                    int m = (r+l)/2;
                    if (B[m]>=y){
                        r=m;
                    }
                    else{
                        l=m;
                    }
                }
                ans=max(ans, l-i+1);
            }
        }
        else{
            int x = i==0 ? 0 : A[i-1];
            int y = x+k+1;
            int l = i, r = n-1;
            if (A[r]<y){
                ans=max(ans, n-i);
            }
            else{
                while (r-l>1){
                    int m = (r+l)/2;
                    if (A[m]>=y){
                        r=m;
                    }
                    else{
                        l=m;
                    }
                }
                ans=max(ans, l-i+1);
            }
        }
	}
	cout<<ans;
	return 0;
}
