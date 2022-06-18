#include "Ising_2d.hpp"

Lattice::Lattice(int L, double beta) : L_(L), beta_(beta), config_(L_, std::vector<int > (L, 1)) {
}

int Lattice::L(){
  return L_;
}

