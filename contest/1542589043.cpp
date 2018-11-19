/*




*/


/*




*/


/*




*/



#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<string>


using namespace std;

int N;
string mumu;




int main()
{
//	freopen("sample.txt","r",stdin);
	cin>>mumu;
	vector<string> ka;
	cin>>N;
	for( int n=0; n<N; n++)
	{
		string temp; cin>>temp;
		ka.push_back(temp);
	}

	bool result= false;
	vector<char> tempR;
	for( int i=0; i<ka.size(); i++)
	{
		tempR.push_back( ka[i][0] );
		tempR.push_back( ka[i][1] );
		for( int j=0; j<ka.size(); j++)
		{
			tempR.push_back( ka[j][0] );
			tempR.push_back( ka[j][1] );
			
			for( int ci=0; ci<tempR.size(); ci++)
			{
				int now=ci;
				int next=ci+1;
				if( next<tempR.size())
				{
					if( mumu[0] == tempR[now] && mumu[1] == tempR[next] )
					{
						result=true;
						break;
					}

				}
			}
			tempR.pop_back();
			tempR.pop_back();
		}
		tempR.pop_back();
		tempR.pop_back();
		if( result==true)
			break;
	}

	if( result==true)
		printf("YES\n");
	else
		printf("NO\n");


	return 0;
}
