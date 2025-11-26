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

    Bureaucrat(const std::string& name, int grade);

    /*------>Getters<------*/
    std::string getName() const;
    int getGrade() const;

    /*------>Functions<------*/
    void grade_increment();
    void grade_decrement();

    class GradeTooHighException : public std::exception
    {
        const char* what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
        const char* what() const throw();
    };
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat &obj);

#endif