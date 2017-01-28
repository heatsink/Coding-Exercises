#include <iostream>
using namespace std;

int main()
{
   int arr[10];
   int i;
   for (i = 0; i < 10; i++) {
      arr[i] = i;
   }
   for (i = 0; i < 10; i++) {
      cout << "arr[";
      cout << + i;
      cout << "]: ";
      cout << arr[i];
      cout << "\n";
   }
   cout << "Hello world! I'm written in C++!\n";
   return 0;
}
