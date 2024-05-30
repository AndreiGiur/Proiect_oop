#ifndef TRIUNGHI_H
#define TRIUNGHI_H

#include "Figura.h"

class Triunghi : public Figura {
    double latura;
public:
    Triunghi(double l = 0);
    void print() const override;
    void save(std::ofstream& out) const override;
    void load(std::ifstream& in) override;
};

#endif // TRIUNGHI_H
