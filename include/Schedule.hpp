#ifndef SCHEDULE_HPP
#define SCHEDULE_HPP

#include "Professor.hpp"
#include "Classroom.hpp"
#include "Course.hpp"
#include <string>

const int MAX_PROFES = 100;
const int MAX_CLASSROOMS = 100;
const int MAX_COURSES = 100;

class Schedule{
    private:
    Professor* professors[MAX_PROFES];   
    Classroom* classrooms[MAX_CLASSROOMS];
    Course* courses[MAX_COURSES];


    int total_profes;
    int total_rooms;
    int total_courses;


    public:

    // Contadores + Destructores
    Schedule();
    ~Schedule();

    void add_professor(Professor* p);
    void add_classroom(Classroom* c);
    Course* create_course(std::string course_code, std::string course_name, int students);

bool validate_and_assign(Course* course, Professor* prof, Classroom* room, std::string day, int start, int end);

    void print_schedule() const;
    void print_courses() const;
};

#endif