#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  char a[256];
  char b[256];
  int c{};
  cin.getline(a, 256);
  while(!cin.eof()) 
    {
      cin.getline(b, 256);
      cout << abs(b - a) << endl;
    }
  return 0;
}

