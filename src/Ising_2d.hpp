#include <iostream>
#include <vector>

class Lattice{

public:
  Lattice(int L, double beta );
  
  const std::vector < std::vector < int > > config() const{return config_;};
  int L();

private:
  int L_;
  double beta_;
  std::vector < std::vector < int > > config_; 
}; 



