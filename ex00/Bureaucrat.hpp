#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
private:
    const std::string name;
    int grade;
public:
    /*------>Constructors<------*/
    Bureaucrat();
    Bureaucrat(const Bureaucrat& other);
    Bureaucrat& operator=(const Bureaucrat& other);

    Bureaucrat(const std::string name, int grade);


    /*------>Getters<------*/
    std::string getName();
    int getGrade();

    /*------>Setter<------*/
    void    setGrade(int grade);

    /*------>Functions<------*/
    void grade_increment();
    void grade_decrement();
};

#endif