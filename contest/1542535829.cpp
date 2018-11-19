#include<bits/stdc++.h>
using namespace std;

int main(){
	int h,m,s,t1,t2,i;
	double source;
	cin>>h>>m>>s>>t1>>t2;
	//solve it by angles man!!!
	double Hl,Hr,Ml,Mr,Sl,Sr,Destl,Destr;
	if((s/5)>=t1){
		Sr=((s/5)-t1)*30 + ((s%5)*6);
		Sl=360-Sr;
	}
	else{
		Sl=(t1-(s/5))*30 - ((s%5)*6);
		Sr=360-Sl;
	}
	
	
	if(h>=t1){
		Hr=(h-t1)*30 + ((double)m/(double)2)+((double)s/(double)120);
		Hl=360-Hr;	
	}
	else{
		Hl=(t1-h)*30 - ((double)m/(double)2)-((double)s/(double)120);
		Hr=360-Hl;
	}
	if((m/5)>=t1){
		Mr=((m/5)-t1)*30 + ((m%5)*6)+s*0.1;
		Ml=360-Mr;
	}
	else{
		Ml=(t1-(m/5))*30 - ((m%5)*6) - s*0.1;
		Mr=360-Ml;
	}
	if(t2>=t1){
		Destr=(t2-t1)*30;
		Destl=360-Destr;
	}
	else{
		Destl=(t1-t2)*30;
		Destr=360-Destl;
	}
	//cout<<Hr<<" "<<Hl<<" "<<Mr<<" "<<Ml<<" "<<Sr<<" "<<Sl<<" "<<Destr<<" "<<Destl<<" "<<endl;
	if( (Destr <= Hr && Destr <= Mr && Destr <= Sr) || (Destl <= Hl && Destl <= Ml && Destl <= Sl ) ){
		cout<<"YES";
		return 0;
	}
	cout<<"NO";
	return 0;
}
