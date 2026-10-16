/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include "as2.hpp"
#include <iostream>

using namespace homework;

int main() { 
  int a{2};
  int b{4};
  int c{6};
  homework::swap_ptr(&a, &b, &c);
  std::cout << a << b << c << std::endl;

  homework::UniqueData unique(33);
  std::cout << "Get uniqueData " << unique.get() << std::endl;
  unique.set(66);
  std::cout << "Get uniqueData " << unique.get() << std::endl;

  homework::Knight knight{"The knight "};
  knight.setWeapon(" spear");
  knight.attack();

  homework::Sorcerer sorcerer("The sorcerer");
  sorcerer.setAbility(" fly");
  sorcerer.attack();
}

