#include "Ising_2d.hpp"

Lattice::Lattice(int L, double beta) : L_(L), beta_(beta), config_(L_, std::vector<int > (L, 1)), E_(-2.0 * L * L), M_(1.0 * L * L) {
}

int Lattice::L(){
  return L_;
}

void Lattice::update_E(){
 double sum=0.0;
 for (int i=0; i<L_; i++){
   for(int j=0;j<L_;j++){
       sum+=-1.0*config_[i][j]*config_[i][(j+1)%L_];
       sum+=-1.0*config_[i][j]*config_[(i+1)%L_][j];
   }
 }
 E_ = sum;
};


void Lattice::update_M(){
  double sum=0.0;
  for (int i=0; i<L_; i++){
    for(int j=0;j<L_;j++){
      sum+=1.0*config_[i][j];
    }
  }
  M_ = sum;
}



void Lattice::flip( int i, int j){
  config_[i][j] = - config_[i][j];
  update_E();
  update_M();
}
