#include <iostream>
using namespace std;

int main() {
  const int *ptr; // 不允许修改指针指向的值
  int val = 3;
  ptr = &val; // ok
  // val = 4;  // ok
  // *ptr = 5; // error
  // cout << *ptr << endl;

  int *ptr1 = &val;
  *ptr1 = 4; // OK
  cout << *ptr << endl;
  return 0;
}
