#include "as2.hpp"

namespace homework {
Knight::Knight(const std::string name) : Entity{name} {}
void Knight::attack() const {
    std::cout << name << " swings a " << weapon << std::endl;
}
void Knight::setWeapon(const std::string weapon_) {
    weapon = weapon_;
}
std::unique_ptr<Entity> Knight::clone() const {
    return std::make_unique<Knight>(*this);
}

Sorcerer::Sorcerer(const std::string name) : Entity{name} {}
void Sorcerer::attack() const {
    std::cout << name << " has the ability to" << ability << std::endl;
}
void Sorcerer::setAbility(const std::string ability_) {
    ability = ability_;
}
std::unique_ptr<Entity> Sorcerer::clone() const {
    return std::make_unique<Sorcerer>(*this);
}


} // namespace homework

