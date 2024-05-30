#include "Triunghi.h"

Triunghi::Triunghi(double l) : latura(l) {}

void Triunghi::print() const {
    std::cout << "Triunghi cu latura: " << latura << std::endl;
}

void Triunghi::save(std::ofstream& out) const {
    out << "T " << latura << std::endl;
}

void Triunghi::load(std::ifstream& in) {
    in >> latura;
}
