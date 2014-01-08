#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void mergeSort(vector<int> &vec)
{
  
}

int main()
{
  int ints[] = {32,71,12,45,26,88,53,33};
  vector<int> vec(ints, ints + sizeof(ints)/sizeof(int));

  cout << ints << endl;

  cout << "Sorted vector:";
  for(vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
  {
    cout << ' ' << *it;
  }

  cout << '\n';

  return 0;
}
