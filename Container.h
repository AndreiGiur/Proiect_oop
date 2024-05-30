#ifndef CONTAINER_H
#define CONTAINER_H

#include "Figura.h"
#include <vector>
#include <memory>
#include <fstream>

class Container {
    std::vector<std::shared_ptr<Figura>> figuri;
public:
    void adaugaFigura(std::shared_ptr<Figura> figura);
    void stergeFigura(size_t index);
    void print() const;
    void save(const std::string& filename) const;
    void load(const std::string& filename);
};

#endif // CONTAINER_H
