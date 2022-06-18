#include <iostream>
#include <vector>

class Lattice{

public:
  Lattice(int L, double beta );
  
  const std::vector < std::vector < int > > config() const{return config_;};
  int L();
  void update_E();
  void update_M();
  const double get_E() const{ return E_;}
  const double get_M() const{ return M_;}
  void flip( int i, int j);

private:
  int L_;
  double beta_;
  std::vector < std::vector < int > > config_; 
  double E_;
  double M_;
}; 



