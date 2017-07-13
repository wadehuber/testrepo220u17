#include<iostream>
#include<string>
#include<stdio.h>

using namespace std;

// C++ class
class myClass {
  public:
    int a;
    string c;
    myClass(int x, string y) {
       a = x;
       c = y;
    }
};

int main() {
  myClass cls(15, "World");
  char * k = (char *) &cls;

  cout << " myClass size=" << sizeof(myClass) << "  a=" << cls.a <<
              "  c=" << cls.c << endl;

  int ii;
  cout << endl << "myClass: " << endl;
  for(ii=0;ii<sizeof(myClass);ii++) {
     printf("%3d: %5c %5x %5d\n", ii, *(k+ii), *(k+ii), *(k+ii));
  }

  return 0;
}
