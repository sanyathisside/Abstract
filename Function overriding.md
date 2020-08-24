## Function Overriding:
 * Function overriding is a feature that allows us to have a same function in child class which is already present in the parent class. A child class inherits the data members and member functions of parent class, but when you want to override a functionality in the child class then you can use function overriding. It is like creating a new version of an old function, in the child class.

### Function Overriding Example:
 * To override a function you must have the same signature in child class. By signature I mean the data type and sequence of parameters. Here we don’t have any parameter in the parent function so we didn’t use any parameter in the child function.


### Code:

#include <iostream>

using namespace std;

class BaseClass {

public:

   void disp(){

      cout<<"Function of Parent Class";

   }

};

class DerivedClass: public BaseClass{

public:

   void disp() {

      cout<<"Function of Child Class";

   }

};

int main() {

   DerivedClass obj = DerivedClass();

   obj.disp();

   return 0;

}


Output: Function of Child Class.

 * Note: In function overriding, the function in parent class is called the overridden function and function in child class is called overriding function.

