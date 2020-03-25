#include <iostream>
#include <algorithm>
#include <vector>

bool isZero(char x)
{
  return x == '0';
}

bool isOne(char x)
{
  return x == '1';
}

bool isQ(char x)
{
  return x == '?';
}

int main()
{
  int C{};
  std::string S{};
  std::string T{};
  int T_zeros = 0;
  int T_ones = 0;
  int S_zeros = 0;
  int S_ones = 0;
  int S_Qs = 0;

  std::cin >> C;

  for(int i = 0; i < C; i++)
    {
      std::cin >> S >> T;
      int j = 0;
      while(j < S.size())
	{
	  if(isOne(T[j]))
	    T_ones++;
	  else
	    T_zeros++;
	  if(isOne(S[j]))
	    S_ones++;
	  else if(isZero(S[j]))
	    S_zeros++;
	  else
	    S_Qs++;
	  j++;
	}

      if(S_ones > T_ones)
      	std::cout << -1 << std::endl;
      else
	{
	  j = 0;
	  while(j < S.size())
	    {
	      if(T[j] != S[j])
		S[j] = T[j];
	      j++;
	    }
	  std::cout << "S_ones: " << S_ones << "\nT_ones: " << T_ones << std::endl;
	}
    }
  
}
