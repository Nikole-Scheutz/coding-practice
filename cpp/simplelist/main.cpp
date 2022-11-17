#include <iostream>
#include <vector>

void print_menu(std::string name);
void print_list();
void add_item();
void delete_item();

std::vector<std::string> list;
std::string name;

int main (int arg_count, char *args[]) {
	if(arg_count > 1) {
		name = std::string(args[1]);
		std::cout << "name: ";
		std::cout << name << std::endl;
		print_menu(name);
	}
	else {
		std::cout << "Username not supplied... exiting" << std::endl;
	}
	return 0;
}

void print_menu(std::string name) {
	int choice;

	std::cout << "*********\n";
	std::cout << " 1 - Print list\n";
	std::cout << " 2 - Add to list\n";
	std::cout << " 3 - Delete from list\n";
	std::cout << " 4 - Quit\n";
	std::cout << " Enter your choice and press return: ";

	std::cin >> choice;

	if( choice == 4 ){
		exit(0);
	}
	else {
		std::cout << "Sorry, choice not implemented yet\n";
	}
}
