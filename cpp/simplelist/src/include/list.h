#include <iostream>
#include <vector>

class List {
	private:
	protected:
	public:
	List(){
		//constructor
	}
	~List(){
		//destructor
	}
	std::vector<std::string> list;
	std::string name;

	void print_menu();
	void print_list();
	void add_item();
	void delete_item();
};
