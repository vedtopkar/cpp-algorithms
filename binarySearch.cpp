#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool binarySearch(vector<int> vec, int value)
{
  int left = 0;
  int right = vec.size() - 1;
  while(left < right)
  {
    int mid = (right + left)/2;

    int cvalue = vec[mid];

    if(cvalue == value)
    {
      return true;
    }
    else if(cvalue > value)
    {
      right = mid;
    }
    else if(cvalue < value)
    {
      left = mid;
    }
  }
  return false;
}

int main()
{
  int value = 0;

  int ints[] = {0,1,5,3,2,6,7,3,5};
  vector<int> vec(ints, ints + sizeof(ints)/sizeof(int));

  // First, we sort the vector
  sort(vec.begin(), vec.end());

  cout << "Sorted vector:";
  for(vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
  {
    cout << ' ' << *it;
  }

  cout << '\n';

  if(binarySearch(vec, value))
  {
    cout << "Value is in vector";
  } else {
    cout << "Value is NOT in vector";
  }

  cout << '\n';

  return 0;
}
