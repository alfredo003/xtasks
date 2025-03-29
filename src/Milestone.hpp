#ifndef MILESTONE_HPP
#define MILESTONE_HPP
#include <iostream>

class Milestone
{
    private:
        std::string name;
        std::string date_start;
        std::string date_end;
    public:
        Milestone(std::string name, std::string date_start, std::string date_end);
        Milestone(const Milestone& mile);
        void getMilestone() const;
        void setName(std::string newName);
        std::string getName() const;
        ~Milestone();
};

#endif
