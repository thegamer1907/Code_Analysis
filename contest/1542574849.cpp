/*input
6 0 1 6 7
1 0 41 12 1
11 2 53 10 4
5 41 11 5 8
9 38 22 6 1
11 19 28 9 10
10 22 59 6 10
3 47 0 4 9
12 30 45 3 11
3 1 13 12 3
*/
#include <iostream>
#include <stdio.h>
#include <algorithm>
//

using namespace std;

int main()
{
float h, m, s, t1, t2;
cin>>h>>m>>s>>t1>>t2;

if(h==12) h=0;
float theta_hh=(h*60*60+m*60+s)/120, theta_mm=(h*60*60+m*60+s)/10, theta_ss=(int)(6*(h*60*60+m*60+s))%360, theta_t1=1.0*((int)(t1*30)%360), theta_t2=1.0*((int)(t2*30)%360);
//cout<<theta_hh<<" "<<theta_mm<<" "<<theta_ss<<"  "<<theta_t1<<" "<<theta_t2<<endl;

theta_hh-=360*(int)(theta_hh/360); theta_mm-=360*(int)(theta_mm/360); 

float x=min(theta_t1, theta_t2), y=max(theta_t1, theta_t2);
t1=x; t2=y;

//cout<<theta_hh<<" "<<theta_mm<<" "<<theta_ss<<"  "<<theta_t1<<" "<<theta_t2<<endl;

float arr[5]={theta_hh, theta_mm, theta_ss, theta_t1, theta_t2};

sort(arr, arr+5);
int sol=0;

for(int i=0;i<5;i++)
{
	if((arr[i]==theta_t1 && arr[(i+1)%5]==theta_t2)||(arr[i]==theta_t2 && arr[(i+1)%5]==theta_t1))
	{
		sol=1;
		break;
	}
}

// if(arr[0]==t1 && arr[4]==t2)
// 	sol=1;

if(sol)
	cout<<"YES"<<endl;
else cout<<"NO"<<endl;

return 0;
}
