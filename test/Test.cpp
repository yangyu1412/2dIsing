#include <gtest/gtest.h>
#include "Ising_2d.hpp"

TEST(Ising, ConfigSetup){
  Lattice Ising(10, 1.0);
  int L = Ising.L();
  for(int i = 0; i < L; i++) {
    for(int j = 0; j < L; j++) {
      EXPECT_EQ(Ising.config()[i][j], 1);
    }
  }
}

TEST(Ising, Observable){
  int L=10;
  double tol = 1.e-10;
  Lattice Ising(L,1.0);
  double E=Ising.get_E();
  EXPECT_NEAR(E, -2.0*L*L, tol);
  double M=Ising.get_M();
  EXPECT_NEAR(M, 1.0*L*L, tol);
  
  Ising.flip(0,0);
  EXPECT_NEAR(Ising.get_E(), -2 * L * L + 8.0, tol);
  EXPECT_NEAR(Ising.get_M(), 1.0 * L * L - 2.0, tol);  
}
