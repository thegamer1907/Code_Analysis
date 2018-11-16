// Example program
#include <iostream>
#include <string>
 using namespace std;
int main()
{
    int noOfLines;
    int xSideCounter=0,ySideCounter=0,zSideCounter=0;
cin>>noOfLines;
int x,y,z;
for(int i=0;i<noOfLines;i++)
{
 cin>> x>>y>>z;
  xSideCounter += x;
 ySideCounter += y;
 zSideCounter += z;
 
    }
    if(xSideCounter == 0 && ySideCounter == 0 && zSideCounter == 0)
    {
        cout<<"YES"<<endl;
        
        }
        else{
            cout<<"NO"<<endl;
            }

}
