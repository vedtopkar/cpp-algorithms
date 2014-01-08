#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Working bubble sort algorithm
void bubbleSort(vector<int> &vec)
{
  vector<int>::size_type vecSize = vec.size();
  bool swapped = true;
  for(int i = 1; i < vecSize && swapped; ++i)
  {
    swapped = false;
    for(int j = 0; j < vecSize - i; ++j)
    {
      if(vec[j] > vec[j+1])
      {
        swap(vec[j], vec[j+1]);
        swapped = true;
      }
    }
  }
}

int main()
{
  int ints[] = {32,71,12,45,26,88,53,33, 1};
  vector<int> vec(ints, ints + sizeof(ints)/sizeof(int));

  bubbleSort(vec);

  cout << "Sorted vector:";
  for(vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
  {
    cout << ' ' << *it;
  }

  cout << '\n';

  return 0;
}
