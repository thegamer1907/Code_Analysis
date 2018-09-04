#include <iostream>
#include <string>
#include <vector>

int main()
{
  std::string s;
  std::cin >> s;

  std::vector<int> z (s.size(), 0);
  std::string::size_type L = 0, R = 0;

  for (std::string::size_type i = 1; i < s.size(); i++)
  {
    if (i > R)
    {
      L = i;
      R = i;

      while (R < s.size() && s[R-L] == s[R])
        R++;

      z[i] = R-L;
      R--;
    }
    else
    {
      auto k = i-L;

      if (z[k] < R-i+1)
      {
        z[i] = z[k];
      }
      else
      {
        L = i;

        while (R < s.size() && s[R-L] == s[R])
          R++;

        z[i] = R-L;
        R--;
      }
    }
  }

  int maxz = 0, result = 0;
  for (std::vector<int>::size_type i = 1; i < z.size(); i++)
  {
    if (z[i] == s.size()-i && maxz >= z[i])
    {
      result = s.size()-i;
      break;
    }

    maxz = std::max(maxz, z[i]);
  }

  if (result == 0)
    std::cout << "Just a legend\n";
  else
    std::cout << s.substr(s.size()-result) << '\n';

  return 0;
}
