#include <stdlib.h>
#include <iostream>
#include "AnimalsInZoo.h"
using namespace std;

AnimalsInZoo::AnimalsInZoo(Animal animal)
{
  this->animal=animal;
  numAnimals=1;
}

AnimalsInZoo::AnimalsInZoo()
{
  numAnimals=0;
}

void AnimalsInZoo::display()
{
  if (numAnimals==1)
  {
    cout << "Num of animals:" << numAnimals << ", "; 
    animal.display();
  }
  else
  cout << "Num of animals:" << numAnimals;
}