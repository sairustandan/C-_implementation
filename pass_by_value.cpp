#include <iostream>
using namespace std;
void swap(int first, int second); // prototype
int main()
{
int x = 2;
int y = 9;
cout << "\nBefore: x = " << x << " y = "<< y;
swap(x, y);
 
cout << "\nAfter: x = " << x << " y = " << y
<< endl;
return 0;
}
void swap(int first, int second) {
int temp;
temp = first;
first = second;
second = temp;
}



