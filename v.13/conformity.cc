#include <iostream>
#include <vector>
#include <algorithm>
#include <map>



class frosh
{
public:
  
  std::vector<int> courses;

  void add_to_courses(int course)
  {
    courses.push_back(course);
  }
  
  void sort_courses()
  {
    std::sort(courses.begin(), courses.end());
  }

  void print_courses()
  {
    for(int i = 0; i < courses.size(); i++)
      std::cout << courses[i] << " ";
    std::cout << std::endl;
  }

  std::vector<int> get_courses()
  {
    return courses; 
  }
  
};


  
int main()
{
  int n{};
  int c{};

  std::vector<frosh> frosh_vec;
  std::cin >> n;
  std::map<std::vector<int>, int> popularity_map;
  
  for(int i = 0; i < n; i++)
    {
      frosh new_frosh;
      for(int j = 0; j < 5; j++)
 	{
	  std::cin >> c;
	  new_frosh.add_to_courses(c);
	}
      new_frosh.sort_courses();
      popularity_map[new_frosh.courses] += 1;
      
    }

  auto max_popularity = std::max_element(popularity_map.begin(),
					 popularity_map.end(),
					 [](const std::pair<std::vector<int>, int>& p1,
					    const std::pair<std::vector<int>, int>& p2){
					   return p1.second < p2.second;
					 });

					       
  auto popularity = std::count_if(std::begin(popularity_map),
			     std::end(popularity_map),
			     [max_popularity](std::pair<std::vector<int>,int> const &p)
   			     {
			       return p.second == max_popularity->second;
			     });

  std::cout << popularity * max_popularity->second << std::endl;
}
