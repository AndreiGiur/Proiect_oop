#ifndef PATRAT_H
#define PATRAT_H

#include "Figura.h"

class Patrat : public Figura {
    double latura;
public:
    Patrat(double l = 0);
    void print() const override;
    void save(std::ofstream& out) const override;
    void load(std::ifstream& in) override;
};

#endif // PATRAT_H
