#ifndef DEPARTMENT_HPP
#define DEPARTMENT_HPP

#include <string>


class Department{
    private:

    std::string code_department; // CAMBIO
    std::string name_department; //CAMBIO
    std::string building;

    public:

    //Constructor + Destructor : para incializar los atributos del objeto.
    Department();
    Department(std::string code, std::string name, std::string building);


    std::string get_Code();
    std::string getName();
    std::string getBuilding();
    void setCode();
    void setName();
    void setBuilding();

};

#endif
