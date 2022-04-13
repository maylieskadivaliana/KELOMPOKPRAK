#include <iostream>

#include "input.h"
#include "proses.h"
#include "output.h"

using namespace std;

int main() {
  Stukas n;
  n.input();
  
  n.SetZero();
  n.HitungSisa();
  n.HitungTotal();
  
  n.output();
}
