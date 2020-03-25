#include <iostream>

using namespace std;

int main()
{
  string a{};
  string b{};
  int a_int{};
  int b_int{};
  int test_cases{};
  int j{};
  bool pallindrome{};
  
  cin >> test_cases;
  getline(cin, a);

  for (int k = 0; k < test_cases; ++k)
    {
      cin >> a;
      j = 0;
      pallindrome = true;
      while(pallindrome)
	{
	  for (int i = a.length(); i > 0; --i)
	    {
	      b += a[i-1];
	    }

	  if(a == b)
	    {
	      pallindrome = false;
	      b={};
	      if(a.length() == 1)
		a_int = stoi(a);
	    }
	  else
	    {
	      a_int = stoi(a);
	      b_int = stoi(b);
	      j++;
	      a_int += b_int;
	      a = to_string(a_int);
	      b = {};
	    }	  
	}
      cout << j << " " << a_int << endl;	      	      
    }
  return 0;
}
