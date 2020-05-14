#include "water.h"

Water::~Water()
{
}
std::vector<std::string> Water::getReactings() const
{
    return this->reactWith;
}
std::string Water::getName() const
{
    return this->name;
}
void Water::print() const
{
    for (auto w : this->reactWith)
    {
        std::cout << w << "  ";
    }
}