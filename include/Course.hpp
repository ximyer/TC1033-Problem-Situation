#ifndef COURSE_HPP
#define COURSE_HPP

#include <string>
#include "Classroom.hpp"
#include "Professor.hpp"

class Course{

    private:
    std::string code_course;
    std::string course_name;
    unsigned short enrolled_students; // CAMBIO
    std::string day;
    int start_time;
    int end_time;
    Professor* assigned_professor;
    Classroom* assigned_classroom;

    public:

    //Contadores

    Course();
    Course(std:: string code_course, std:: string course_name, unsigned short enrolled_students);

    void set_schedule(int day, int start_time, int end_time);
    void assign_resources(Professor* Professor, Classroom* room);

    std::string get_day();
    int get_start();
    int get_end();
    int get_enrolled();
    Professor* get_professor();
    Classroom* get_classroom();
};

#endif