#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <fstream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
private:
    std::string const name;
    unsigned int grade;
public:
    Bureaucrat();
    Bureaucrat(std::string const name, unsigned int grade);
    Bureaucrat(const Bureaucrat &obj);
    ~Bureaucrat();
    Bureaucrat &operator=(const Bureaucrat &obj);
    void GradeIncrement();
    void GradeDecrement();

    void    checkGrade(unsigned int grade);
    std::string getName() const;
    int getGrade() const;

    class GradeTooHighException : public std::exception
    {
        const char* what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        const char* what() const throw();
    };
    void    signForm(Form &obj);
    void    executeForm(Form const & form);
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat &obj);

#endif