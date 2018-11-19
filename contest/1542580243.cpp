#include<iostream>
#include<string.h>
using namespace std;
char* my_strrev(char* str)
{
    char* left = str;
    char* rigth = str;
    while (*str++);
    str -= 2;
    while (left < str)
    {
        char c = *left;
        *left++ = *str;
        *str-- = c;
    }
    return rigth;

}
int main()
{
	char **din = new char * [1];
	for (int i=0;i<1;i++) 
	{
     din[i] = new char[2];
	}
	
	for (int i=0; i<1; i++)
	{ 
	 cin>>din[i];
	}
	int n;
	cin >> n;   
	char **array = new char * [n];
	for (int i=0;i<n;i++) 
	{
     array[i] = new char[2];
	}
	
	for (int i=0; i<n; i++)
	{ 
	 cin>>array[i];
	}
	
	int c = 0;
	for(int i = 0; i<n;i++)
	{
		if(strncmp(my_strrev(array[i]), din[0],1) == 0)
		{
			c = 1;
		}
		array[i] = my_strrev(array[i]);
	}

	for(int i = 0; i<n;i++)
	{
		if(strcmp(array[i], din[0]) == 0)
		{
			cout<<"YES";
			return 0;
		}
	}
	din[0] = my_strrev(din[0]);
	int a = 0;
	for(int i = 0; i<n;i++)
	{
		if(strncmp(array[i], din[0],1) == 0)
		{
			a = 1;
		}
	}
	
		if(a == 1 && c == 1)
		{
			cout<<"YES";
		}
		else
		{
			cout<<"NO";	
		}
	return 0;
}