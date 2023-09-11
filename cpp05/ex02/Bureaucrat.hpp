#ifndef BUREAUCAT_HPP
# define BUREAUCAT_HPP

# include <iostream>
# include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat {
    private:
        const std::string name;
        int grade;
    public:
        std::string getName() const;
        int getGrade() const;
        class GradeTooHighException : public std::exception {
            public:
                const char * what(void) const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                const char * what(void) const throw();
        };
        Bureaucrat &operator=(const Bureaucrat &obj);
        Bureaucrat(const std::string name, int grade);
        Bureaucrat();
        Bureaucrat(const Bureaucrat &obj);
        ~Bureaucrat();
        void increaseGrade();
        void decresaeGrade();
        void signForm(Form &form) const;

};

std::ostream& operator<<(std::ostream &out, const Bureaucrat &obj);

#endif