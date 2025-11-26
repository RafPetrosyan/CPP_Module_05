#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Unknown"), grade(150)
{
    std::cout<< "Default constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade)
{
    std::cout << "Copy constructor" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    std::cout<< "Copy assignment operator" << std::endl;
    
    if (this != &other)
    this->grade = other.grade;
    return *this;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade is to high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade is to low");
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name), grade(grade)
{
	std::cout << "Constructor with parameters" << std::endl;
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

std::string Bureaucrat::getName() const
{
    std::cout << "Call getName()" << std::endl;
    return name;
}

int Bureaucrat::getGrade() const
{
    std::cout << "Call getGrade()" << std::endl;
    return grade;
}

void Bureaucrat::grade_increment()
{
    std::cout << "Bureaucrat grade_increment" << std::endl;
    
    if (--grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::grade_decrement()
{
    std::cout << "Bureaucrat grade_decrement" << std::endl;
    
    if (++grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat &obj)
{
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return os;
}
