#ifndef TASK_HPP
#define TASK_HPP
#include "Milestone.hpp"

class Task
{
    private:
        Milestone &milistone;
        std::string description;
    public:
        Task( Milestone &milistone,std::string description);
        Task(const Task& task);
};

#endif