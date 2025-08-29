#include <iostream>
#include <stdlib.h>
#include "AnimalsInZoo.h"
using namespace std;

int main() {
   Animal *animal1 = new Animal("African Elephant", 1758);
   Animal animal2("Giant Panda", 1869);
   Animal animal3("Zebra", 1745);

   AnimalsInZoo *animalZoo = new AnimalsInZoo(animal3);

   delete animal1;
   animal1 = new Animal("Snow Leopard", 1777);

   animal2.display();
   animal1->display();
   animal3.display();

   animalZoo->display();

   delete animal1;
}
