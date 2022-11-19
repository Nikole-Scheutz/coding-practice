#include "include/list.h"

void List::print_menu() {
	int choice;

	std::cout << 
	"*********\n" <<
	"1 - Print list\n" <<
	"2 - Add to list\n" << 
	"3 - Delete from list\n" <<
	"4 - Quit\n" <<
	"Enter your choice and press return: ";

	std::cin >> choice;
	if( choice == 4 ){
		exit(0);
	}
	else if( choice == 1) {
		print_list();
	}
	else if( choice == 2) {
		add_item();
	}
	else if( choice == 3) {
		delete_item();	
	}
	else {
		std::cout << "Sorry, choice not implemented yet\n";
	}
}

void List::add_item() {
	std::cout << "\n\n\n"
	<< "*** Add Item ***\n"
	<< "Type in an item and press enter: ";

	std::string item;
	std::cin >> item;

	list.push_back(item);
	std::cout << "Successfully added an item to the list\n\n\n";
	std::cin.clear();

	std::cout << item;

	print_menu();
}

void List::delete_item() {
	std::cout << "*** Delete Item ***"
	<< "Select an item index number to delete\n";
    if (list.size()) {
      for( int i=0; (int)list.size(); i++ ) {
        std::cout << i << ": " << list[i] << "\n";
      }
    }
    else { 
      std::cout << "No items to delete.\n";
    }
    print_menu();
}

void List::print_list() {
	std::cout << "\n\n\n\n\n"
	<< "*** Printing List ***\n";

	for( int list_index=0; list_index < (int)list.size(); list_index++ ) {
		std::cout << " * " << list[list_index] << "\n";
	}
	std::cout << "M - Menu \n";
	char choice;
	std::cin >> choice;

	if( choice == 'M' || choice == 'm' ) {
		print_menu();
	}
}
