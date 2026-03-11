#ifndef CAMPUS_HPP
#define CAMPUS_HPP

#include <string>

class Campus{
    private:
    std::string name_campus; //CAMBIO
    int zip_code; //CAMBIO
    std::string city;
    std::string address;

    public:

    // Constructores

    Campus();
    Campus(std::string name_campus, int zip_code, std::string city, std::string address);

};

#endif