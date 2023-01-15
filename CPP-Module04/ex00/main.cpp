#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl; std::cout << i->getType() << " " << std::endl; 
    i->makeSound();
    meta->makeSound();
    const WrongAnimal* turtl = new WrongAnimal();
    const WrongAnimal* rtl = new WrongCat();
    rtl->makeSound();
    turtl->makeSound();
    return 0; 
}