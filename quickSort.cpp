#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void quickSortRecursive(vector<int> &vec, int left, int right)
{
  int i = left;
  int j = right;
  int pivot = vec[(left + right)/2];
  cout << "Pivot: " << pivot << endl;

  while(i <= j)
  {
    while(vec[i] < pivot)
    {
      ++i;
    }
    while(vec[j] > pivot)
    {
      --j;
    }
    if(i <= j)
    {
      swap(vec[i], vec[j]);
      ++i;
      --j;
    }
  }
  if(left < j)
  {
    quickSortRecursive(vec, left, j);
  }
  if(i < right)
  {
    quickSortRecursive(vec, i, right);
  }
}

void quickSort(vector<int> &vec)
{
  int right = vec.size() - 1;
  quickSortRecursive(vec, 0, right);
}

int main()
{
  int ints[] = {32,71,12,45,26,88,53,33};
  vector<int> vec(ints, ints + sizeof(ints)/sizeof(int));

  quickSort(vec);

  cout << "Sorted vector:";
  for(vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
  {
    cout << ' ' << *it;
  }

  cout << '\n';

  return 0;
}
