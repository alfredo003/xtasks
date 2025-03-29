#include "Milestone.hpp"


Milestone::Milestone(std::string name, std::string date_start,std::string date_end):name(name),date_start(date_start),date_end(date_end){}

Milestone::Milestone(const Milestone& mile)
{
	name = mile.name;
	date_start = mile.date_start;
	date_end = mile.date_end;
}

void Milestone::setName(std::string newName)
{
    this->name = newName;
}

std::string Milestone::getName() const
{
    return this->name;
}


Milestone::~Milestone(){}
