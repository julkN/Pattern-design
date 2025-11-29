#include <iostream>
#include "logic.h"


int main(){
  Car car1 = Car::Builder()
             .setMake("Honda")
             .setModel("Corolla")
             .setYear(2024)
             .setColor("Red")
             .build();
  car1.display();
  return 0;
}
