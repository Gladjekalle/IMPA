#include <iostream>
using namespace std;
int main()
{
  int a{}, b{}, l{};
  cin >> l;
  for(int i = 0;i<l;i++)
    {
      cin >> a >> b;
      if (a<b)
	  cout << "<" << endl; 
      else if (a>b)
	  cout << ">" << endl;
      else
	cout << "=" << endl;
    }
  return 0;}
