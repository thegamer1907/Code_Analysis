#include<iostream>
using namespace std;
int main()
{
     int i,j,n;
	 double x=0,y=0,z;
     double l,z1;
     double k=0;
    cin>>n>>l;
	long long int a[10000]; 
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    for(j=0;j<n-1;j++)
    if(a[j]>a[j+1])
    {
        z=a[j];
        a[j]=a[j+1];
        a[j+1]=z;
    }
    
     for(i=0;i<n-1;i++)
    {   
        z=a[i+1]-a[i];
        if(k<z)
        {
            k=z;
        }
    }
    k=k/2.0000000000;
    x=a[0]-0.000000000;    
    y=(double)l-a[n-1];
          
    cout.precision(9);
    if(y>x&&y>k){
    	
	cout<<y; 
	return 0;
	}
	 if(y==x&&y>k){
    
	cout<<y; 
	return 0;
	}
	if(x>y&&x>k){ cout<<x; return 0;
}
    cout<<k; 
}