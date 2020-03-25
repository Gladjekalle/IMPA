#include <iostream>
#include <iomanip>
#include "math.h"
#include <vector>

int main()
{
  int p{};
  int a{};
  int b{};
  int c{};
  int d{};
  int n{};

  std::vector<double> price;
  double cost{};
  double dec = 0;
  double high{};

  std::cin >> p >> a >> b >> c >> d >> n;

  for(int i = 1; i <= n; i++)
    {
      cost = p*(sin(a*i + b) + cos(c*i + d) + 2);
      price.push_back(cost);
    }

  high = price.front();
  
  for (int j = 1; j < price.size(); j ++)
    {
      if (high < price[j])
	{
	  high = price[j];
	}
      else if (high - price[j] > dec)
	dec = high - price[j];
      
    }
  std::cout << std::fixed << std::setprecision(8) << dec << std::endl;
}
