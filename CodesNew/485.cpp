#include"cstdio"
#include"iostream"
using namespace std;
int main()
{
	int n , t;
	int a[100005];
	while(cin >> n >> t)
	{
		int i;
		int pl = 0;
		int x = 0;
		int qiu = 0;
		int max = 0 , sum = 0;
		for(i = 0;i < n;i ++)
		{
			cin >> a[i];
		}
		for(i = 0;i < n;i ++)
		{      
			if(qiu + a[i] > t&&pl == 0)
			{
				qiu = 0;
				continue;
			} 
			pl = 1;           
			sum++;      
			qiu = qiu + a[i];              
			if(qiu + a[i+1] > t)
			{
				qiu = qiu - a[x++];        
				if(sum > max)
				{
					max = sum;             
				} 
				sum = sum - 1;             
		 	}
		 	if(sum > max)
		 	{
	 			max = sum;
	 		}
		}
		cout << max << endl;
	}
	return 0;
} 
