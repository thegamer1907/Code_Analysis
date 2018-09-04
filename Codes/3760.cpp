#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
#include<math.h>
#include<iomanip>
#include<string.h>
#include<limits>
#include<queue>
typedef long long int llt;
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string s1;
	cin>>s1;
	llt nb,ns,nc,i;
	llt pb,ps,pc;
	llt b=0,c=0,s=0;
	cin>>nb>>ns>>nc>>pb>>ps>>pc;
	llt r;
	cin>>r;
	for(i=0;i<s1.size();i++){
		if(s1[i]=='B')
			b++;
		else if(s1[i]=='S')
			s++;
		else if(s1[i]=='C')
			c++;	
	}
	llt a[3]={0};
	if(b!=0)
		a[0]=nb/b;
	if(s!=0)
		a[1]=ns/s;
	if(c!=0)
		a[2]=nc/c;
	llt l[3]={0};
	if(b!=0)
		l[0]=nb%b;
	if(s!=0)
		l[1]=ns%s;
	if(c!=0)
		l[2]=nc%c;
	if(b==0)
		a[0]=max(a[1],a[2]);
	if(c==0)	
		a[2]=max(a[1],a[0]);
	if(s==0)
		a[1]=max(a[0],a[2]);
		
	//cout<<r<<" "<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<l[0]<<" "<<l[1]<<" "<<l[2]<<endl;
	while(r>0&&(a[0]!=a[1]||a[1]!=a[2])){
		llt x;
		if(a[0]<=a[1]&&a[0]<=a[2]&&b!=0){
			x=b-l[0];
			r=r-pb*x;
			if(r<0)
				break;
			else{
				l[0]=0;
				a[0]+=1;
			}
		}
		else if(a[1]<=a[2]&&a[1]<=a[0]&&s!=0){
			x=s-l[1];
			r=r-ps*x;
			if(r<0)
				break;
			else{
				l[1]=0;
				a[1]+=1;
			}
		}
		else if(a[2]<=a[1]&&a[2]<=a[0]&&c!=0){
			x=c-l[2];
			r=r-pc*x;
			if(r<0)
				break;
			else{
				l[2]=0;
				a[2]+=1;
			}
		}
	}
	//cout<<r<<endl;
	if(r!=0){
		r=r+pb*l[0]+pc*l[2]+ps*l[1];
		r=r/(b*pb+c*pc+s*ps);
	}
	cout<<min(a[2],min(a[0],a[1]))+r;
}
