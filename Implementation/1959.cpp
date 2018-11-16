#include <iostream>

int main()
{
	int x,y,z,n,xres = 0,yres = 0,zres = 0;
	std::cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		std::cin >> x >> y >> z;
		xres += x;
		yres += y;
		zres += z;
	}
	
	if(xres == 0 and yres == 0 and zres == 0) std::cout << "YES\n";
	else std::cout << "NO\n";
}
