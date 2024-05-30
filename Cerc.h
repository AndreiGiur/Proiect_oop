#ifndef CERC_H
#define CERC_H

#include "Figura.h"

class Cerc : public Figura {
    double raza;
public:
    Cerc(double r = 0);
    void print() const override;
    void save(std::ofstream& out) const override;
    void load(std::ifstream& in) override;
};

#endif // CERC_H
