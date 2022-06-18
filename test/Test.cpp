#include <gtest/gtest.h>
#include "Ising_2d.hpp"

TEST(Ising, ConfigSetup){
  Lattice Ising(10, 1.0);
 // Ising.setup_config();
  int L = Ising.L();
  for(int i = 0; i < L; i++) {
    for(int j = 0; j < L; j++) {
      EXPECT_EQ(Ising.config()[i][j], 1);
    }
  }
  
}

