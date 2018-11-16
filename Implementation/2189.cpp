#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	int x_cord,y_cord,z_cord,sum_x=0,sum_y=0,sum_z=0;
	for(int i=0;i<n;i++){
		cin>>x_cord;cin>>y_cord;cin>>z_cord;
		sum_x+=x_cord;
		sum_y+=y_cord;
		sum_z+=z_cord;
	}
	if(sum_x==0&&sum_y==0&&sum_z==0){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
	}
	
}
