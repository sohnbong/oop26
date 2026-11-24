#include <iostream>
#include <algorithm>

using namespace std;

class MyClass {
  int val;
public:
  MyClass(int n) : val(n) {}
  MyClass() : val(10) {}
  int operator() (int x) { 
    return x+val;
  }
};

int main() {
  MyClass myfunctor(3);
  int arr[] = {1,2,3,4,5};
  int n = sizeof(arr)/sizeof(arr[0]);

  transform(arr,arr+n,arr,myfunctor);
  for (int i=0;i<n;i++) cout << arr[i] << " " ;
  cout << "\n";

  transform(arr,arr+n,arr,MyClass());
  for (int i=0;i<n;i++) cout << arr[i] << " " ;
  cout << "\n";

  transform(arr,arr+n,arr,MyClass(100));
  for (int i=0;i<n;i++) cout << arr[i] << " " ;
  cout << "\n";


  cout << myfunctor(100) << endl;
  return 0;
}

