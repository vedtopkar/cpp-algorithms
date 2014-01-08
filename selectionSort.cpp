#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void selectionSort(vector<int> &vec)
{
  int smallest;
  for(int i = 0; i < vec.size()-1; ++i)
  {
    smallest = i;

    // step through the vector to find the smallest item
    for(int j = i+1; j < vec.size(); ++j)
    {
      if(vec[j] < vec[smallest])
      {
        smallest = j;
      }
    }
    
    std::swap(vec[i], vec[smallest]);
  }
}

int main()
{
  int ints[] = {32,71,12,45,26,88,53,33, 1};
  vector<int> vec(ints, ints + sizeof(ints)/sizeof(int));

  selectionSort(vec);

  cout << "Sorted vector:";
  for(vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
  {
    cout << ' ' << *it;
  }

  cout << '\n';

  return 0;
}
