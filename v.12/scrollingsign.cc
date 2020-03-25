#include <iostream>
#include <string>

int main()
{
  int n{};
  int k{};
  int w{};
  int shifted{};
  std::string str1{};
  std::string str2{};
  std::string str3{};
  
  std::cin >> n;
  for (int i = 0; i < n; i++)
    { 
      std::cin >> k >> w;
      shifted = k;
      std::cin >> str1;
      for (int j = 1; j < w; j++)
	{
	  std::cin >> str2;
	  str3 = str2;
	  for (int l = 0; l < k; l++)
	    {
	      if(str1 != str2)
		{
		  str1.erase(0,1);
		  str2.pop_back();
		  shifted++;
		}
	      else
		break;
	    }
	  str1 = str3;
	}
      std::cout << shifted << std::endl;
    }
}
