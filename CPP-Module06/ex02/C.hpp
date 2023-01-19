#ifndef C_HPP
# define C_HPP

# include "Base.hpp"

class C: public Base
{
public:
    ~C();
    Base * generate(void);
    void identify(Base* p);
    void identify(Base& p);
};

#endif