#include  "Milestone.hpp"

int main(void)
{

	 Milestone mile1("Estudar","2","2");
	
	Milestone mile2(mile1);
	
	mile1.setName("Alfredo");
	mile2.setName("Fernando");
	
	std::cout << "Milestone = " << mile1.getName()  << std::endl;
	std::cout << "Milestone = " << mile1.getName() << std::endl;
    return (0);
}
