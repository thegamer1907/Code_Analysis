#include <iostream>
using namespace std;

int main() {

int i,j,l,m;

cin>>i>>j;
char line [i];
cin>>line;
for(l=1;l<=j;l++)
{
    for(m=0;m<i-1;m++)
    {
        if (line[m]=='B'&&line[m+1]=='G')
        {
            line[m]='G';
            line[m+1]='B';
            m++;
        }
    }
}
cout<<line;

return 0;
	
}