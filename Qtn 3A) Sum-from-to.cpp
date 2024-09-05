#include <iostream>
using std::cout;
using std::endl;

int sum_from_to(int first, int last) {

if (first > last)  {
cout << "Incorrect values entered";
return NULL;

 }

int sum = 0;
 for (int i = first; i <= last; i++) {
 sum += i;
  }
 return sum;

 }



int main() {
 //test function
cout << sum_from_to(4, 7) << endl;
cout << sum_from_to(-3, 1) << endl;
cout << sum_from_to(7, 9) << endl;
cout << sum_from_to(8, 9) << endl;
cout << sum_from_to(5, 8) << endl;

return 0;
 }
