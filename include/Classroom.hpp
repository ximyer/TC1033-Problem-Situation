#ifndef CLASSROOM_HPP
#define CLASSROOM_HPP

#include <string>
#include "Campus.hpp"

class Classroom{
    private:
    int building;
    int room_number;
    int capacity;
    Campus* campus;

    public:

    //Constructores

    Classroom();
    Classroom(int building, int room_numnber, Campus* campus);
    int get_capacity();
    std::string get_room_id();
    Campus* get_campus();
};

#endif