#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain *DogBrain;
public:
    Dog();
    Dog(const Dog &obj);
    Dog &operator=(const Dog &obj);
    ~Dog();

    Brain *getBrain() const;
    void    makeSound(void) const;
};

#endif