#include "Task.hpp"


Task::Task(Milestone &milistone,std::string description):milistone(milistone),description(description)
{
}

Task::Task(const Task &task):milistone(task.milistone),description(task.description)
{}