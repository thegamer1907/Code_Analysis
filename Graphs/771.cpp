# include<bits/stdc++.h>
using namespace std;


main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int a,b;
	cin>>a>>b;
	string c;
	cin>>c;
	
	if(a==1)
	cout<<c;
          else
          {
          int i,j;
          j=b;
            while(j--)
           {for(i=0;i<a-1;i++)
           {
           	if(c[i]=='B' and c[i+1]=='G')
           	{
           		c[i]='G';
           		c[i+1]='B';
           		i++;
           	}
           }
           }	
          	cout<<c;
          }

	
	
}