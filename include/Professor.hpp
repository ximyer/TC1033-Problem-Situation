#ifndef PROFESSOR_HPP
#define PROFESSOR_HPP

#include "Department.hpp"
#include <string>

class Professor{
    private:

    std::string name_professor; //CAMBIO
    std::string employee_id;
    Department *department;

    public:

    // Constructores
    Professor();
    Professor(std::string name_professor, Department *Department);

};

#endif