#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("laarbi"), grade(1)
{
    std::cout << "Default Constructor called For Bureaucrat" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, unsigned int grade): name(name)
{
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHighException();
    this->grade = grade;
    std::cout << "Bureaucrat Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj): name(obj.name)
{
    *this = obj;
    std::cout << "Bureaucrat Copy Constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat Destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
    this->grade = obj.grade;
    std::cout << "Bureaucrat Assigment operator called" << std::endl;
    return *this;
}

std::string Bureaucrat::getName() const
{
    return (this->name);
}

void Bureaucrat::checkGrade(unsigned int grade)
{
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHighException();
    this->grade = grade;
}

void    Bureaucrat::GradeDecrement()
{
    checkGrade(grade + 1);
}

void    Bureaucrat::GradeIncrement()
{
    checkGrade(this->grade - 1);
}

int Bureaucrat::getGrade() const
{
    return (this->grade);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too High";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too Low";
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat &obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
	return (out);
}