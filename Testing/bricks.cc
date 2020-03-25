#include <iostream>

using namespace std;

int main()
{
  int stacks{};
  int height_per_stack{};
  int min_steps{};
  int set_counter{};
  int sum{};
  
  cin >> stacks;

  while (stacks != 0)
    {
      set_counter++;
      int heights[stacks];

  
      for(int i = 0; i < stacks; i++)
	{
	  cin >> heights[i];
	  sum += heights[i];
	}

      height_per_stack = sum/stacks;

      for(int j = 0; j < stacks; j++)
	{
	  if(heights[j] > height_per_stack)
	    {
	      min_steps += heights[j] - height_per_stack;
	      heights[j] = height_per_stack;
	    }
	  else if(heights[j] < height_per_stack)
	    heights[j] = height_per_stack;
  
	}
      cout << "Set #" << set_counter << "\n";
      cout << "The minimum number of moves is "<< min_steps << ".\n";
      cout << "\n";

      sum = 0;
      min_steps = 0;
      
      cin >> stacks;
    }
}
