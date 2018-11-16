#include <iostream>
using namespace std;

int main() {
	// your code goes here
	string pos;
	cin>>pos;
	int count=1;
	char cur_play = pos[0];
	for(int i=1;i<pos.length();i++)
	{
	    if(pos[i]==cur_play)
	    {
	        count++;
	    }
	    else
	    {
	        cur_play=pos[i];
	        count=1;
	    }
	    if(count==7)
	    {
	        cout<<"YES"<<endl;
	        return 0;
	    }
	}
	cout<<"NO"<<endl;
	return 0;
}
