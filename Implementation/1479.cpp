/*
						   _________________
					  ____/:::::::::::::::::\_____
				   __/::::::::::::::::::::::::::::\___
				 _/:::::::::::::::::::::::::::::::::::\__
			   _/::::::::::::::::::::::::::::::::::::::::\_
			  /::::::::::::::::::::::::::::::::::::::::::::\
			 |::::::::::::::::::::::::::::::::::::::::::::::\
			/::::::::::::::::::::::::::::::::::::::::::::::::\
		   |:::/.:::::::;:::::::::::::::::::::::::::::::::::::|
		  /:::/.:::::::/..:::::::::::::::::::::::::::::::::::::\
		 |:::|.::::::;/.::::::::::::::::::::::::::::::::::::::::|
		 |::/.::::::/..:::::::;;'.::::::::::::::::::::::::::::::|
		 |:|.::::/./.::::::;;/..:::::::::::::::::::::::::::::::::|
		 `:|.:::|.|.:::::;/..;;;;;;-'.:;;;-':::::::::::::::::::::|
		  \|.:::|.|.:::;/.;;/  -..::'''...:::::::::::::::::::::::|
		   \;;::|.|.::/.;/--__      |::::::::::::::::::::::::::::|
			  \;;\\::/|/ =-__ --_  /::::::::::::::::::::::::::::::
				  \\/    /|  -.   |.::::::::::::::::::::::::::::::
				 _.'    /|'   /=  ||::::::::::::::::::::::::::::::
			 _.-'      //'        ||::::::::::::::::::::::::::::::
			(          -          `|::::::::::::::::::::::::::::::
			 \                      \:::::::::::::::::::::::::::::
			  |  (c)Kolansburg      \::::::::::::::::::::::::::::
			 /                      __/:::::::::::::::::::::::::::
			 \                   __/::;::;;:::::::::::::::::::::::
			 (`                 /;;;;/::|  \::::::::::::::::::::::
			 |                 |'_,::::/ \ |::::::::::::::::::::::
			.'                _/::::::/  / /:::::::::::::::. .::::
			|                /.::;;:-'_)/_/::::::::::::::::...::::
 ----.__    |               |.::|   \___/::::::::::::::::::...::::
 :::::::`----\_____          \:::\.-'::::::::::::::::::::::...::::
 ;;;;;:::::::::::::`------     \:::::::::::::::::::::::::::...::::
	  `-------:::::::\         /:::::::::::::::::::::::::::...::::
 ___.--------'::::::::\       |::::::::::::::::::::::::::::...::::
 :::::;;;:--:::::::::::|      /::::::::::::::::::::::::::::...::::
 ----'  _,-:.:::::::::::\    |.::::::::::::::::::::::::::::...::::
	 __/.::::::::::::::::|   |.::::::::::::::::::::::::::::...::::
  __/.:::;;::::::::;/.:::|   |.::::::::::::::::::::::::::::. .::::
 /.::::;/ /.:::::;/ |.::::|   \_.:::::::::::::::::::::::::::::::::
 :::::/  /.:::::/  /.:::::|     \__.::::::::::::::::::::::::::::::
 ::::|  |.:::::/  /.:::::.|        \,::::::::::::::::::::::::::::
 ::::|  |.::::|   |.:::::/|       __/::::::::::::::::::::::::::::
 \.:::\  \.:::|   |.::::||| __.--::::::::::::::::::::::::::::::::
  \.:::\_ \.:::\   \.:::'/.::::::::::::::::::::::::::::::::::::::
   \.::::\ \.:::\   \.::::::::::::::::::::::::::::::::::::::::::*/
#include<stdalign.h>
#include<iostream>
#include<stdio.h>
#include<cstring>
#include<cmath>
#include<map>
#include<algorithm>
using namespace std;
int p[1000000];
bool vis[100000+10];
int main()
{
    bool f=0;
    string s;
    int ct=0;
    cin>>s;
    char curp = '0';
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==curp)ct++;
        else ct=1;
        curp = s[i];
        if(ct==7)f=1;
    }
    if(f)cout<<"YES"<<endl;
    if(!f)cout<<"NO"<<endl;
    return 0;
}
