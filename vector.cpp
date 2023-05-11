#include <iostream>
#include <vector>

using namespace std;

int main()
{

  vector<int> a(5, 1);
  cout << "print a" << endl;
  for (int i : a)
  {
    cout << i << " ";
  }
  cout << endl;

  vector<int> last(a) ;
   cout << "Print last" << endl;
  for (int i : last)
  {
    cout << i << " ";
  }
  cout << endl;

  vector<int> v;
  cout << "Capacity: " << v.capacity() << endl;

  v.push_back(1);
  cout << "Capacity: " << v.capacity() << endl;

  v.push_back(3);
  cout << "Capacity: " << v.capacity() << endl;

  v.push_back(5);
  cout << "Capacity: " << v.capacity() << endl;
  cout << "Size: " << v.size() << endl;
  cout << "Before Pop" << endl;
  for (int i : v)
  {
    cout << i << " ";
  }
  cout << endl;

  v.pop_back();

  cout << "After Pop" << endl;
  for (int i : v)
  {
    cout << i << " ";
  }
  cout << endl;

  cout << "at operation: " << v.at(1) << endl;

  cout << "Element at front: " << v.front() << endl;
  cout << "Element at back: " << v.back() << endl;
}