#include <stdlib.h>
using namespace std;


class Animal {
   public:
      Animal(string speciesName, unsigned int discoveryYear);

      Animal();

      void display();

  string species;
  unsigned int year_discovered;
};