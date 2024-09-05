#include <iostream>
using namespace std;

long long aga(long a, long long b) {

if(a%b==0)
return b;
if(b%a==0)
return a;

if(a>b)
return aga(a%b,b);
else
return aga(a,b%a);
}
int reduce(long long&num,long long&denom) {
long long agaFrac;
if((agaFrac = aga(num,denom)) !=1) {
num/=agaFrac;
denom/=agaFrac;
return 1;
}
else {
  return 0;
}
}
int main(){
long long num, denom;
cout << "Please enter numerator: ";
cin >> num;
cout << "Please denominator: ";
cin >> denom;
if(reduce(num,denom)){
cout << "The Reduced Fraction is " << num << "/" << denom;
}
else {
 cout << "0";
}
}
