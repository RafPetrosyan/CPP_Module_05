#include "Bureaucrat.hpp"

std::string Bureaucrat::getName()
{
    return name;
}

int Bureaucrat::getGrade()
{
    return grade;
}

void   Bureaucrat::setGrade(int grade)
{
    this->grade = grade;
}