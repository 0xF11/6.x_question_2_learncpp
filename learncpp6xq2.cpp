#include <iostream>
#include "constants.h"





int main() {

	std::cout << "How many students are in your classroom? \n\n";
	int students{};


	while (true) {
		std::cin >> students;

		if (students > constants::max_class_size) {
			std::cout << "There are too many students in your classroom! \n";
		}


		else if (students == 35) {
			std::cout << "It'll be tight fitting " << students << " in your class room. But its manageable!\n";
		}

		else if (students < constants::max_class_size) {
			std::cout << "You of course you can fit " << students << " In your classroom! That should be perfect! \n";
		}

	}
}
