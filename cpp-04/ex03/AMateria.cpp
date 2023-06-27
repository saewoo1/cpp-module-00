#include "AMateria.hpp"

AMateria::AMateria() {
	this->type = "default";
	std::cout << "Abstract class AMateria default constructor" << std::endl;
}

AMateria::AMateria(std::string const & type) : type(type) {
	std::cout << "Abstract class AMateria constructor" << std::endl;
}

AMateria::AMateria(AMateria const & obj) : type(obj.type) {
	std::cout << "Abstract class AMateria copy constructor" << std::endl;
}

AMateria::~AMateria() {
	std::cout << "Abstract class AMateria destructor" << std::endl;
}

std::string const& AMateria::getType() const {
	return (this->type);
}

void AMateria::use(ICharacter& target) {
	std::cout << "Abstract class AMateria used on " << target.getName() << std::endl;
}
