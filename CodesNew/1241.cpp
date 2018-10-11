#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int ar[n];
	for (int i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	int mini=-1;
	for (int i=0;i<n;i++){
		ar[i]-=i;
		if (mini==-1||ar[i]<ar[mini]){
			mini=i;
		}
	}
	int shift=ar[mini]/n;
	int found=-1;
	for (int i=0;i<n;i++){
		ar[i]-=shift*n;
		if (ar[i]<=0){
			found=i;
			break;
		}
	}
	if (found==-1){
		for (int i=0;i<n;i++){
			ar[i]-=n;
			if (ar[i]<=0){
				found=i;
				break;
			}
		}
	}
	printf ("%d\n",found+1);
}