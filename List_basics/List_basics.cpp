
/*                       Name : ping--devsky
                         Date : 17-12-2019
						 Purpose : Understanding list in C++
						 
*/

#include<iostream>
#include<list>

void insertValueinlist(std::list<std::string> & x1)
{
	x1.push_back("Aakash");
	x1.push_back("Tom");

	x1.push_front("Thakkar");
	x1.push_front("Billy");

	x1.push_back("Tom");
	x1.push_back("kitten");

	auto a = x1.begin();
	advance(a, 2);
	
	x1.insert(a,"Hello Postion");
}

void displayValueofList(std::list<std::string>& x1)
{
	for (auto a : x1)
		std::cout << "->" << a;
}

void deleteData(std::list<std::string>& x1,int &pos)
{
	if (pos == 1)
		x1.pop_front();
	else if (pos == x1.size())
		x1.pop_back();
	else
	{
		auto itr = x1.begin();
		advance(itr, pos - 1);
		x1.erase(itr);
	}
}



int main()
{
	std::list<std::string> name;

	
	insertValueinlist(name);

	displayValueofList(name);
	
	int pos = 2;

	deleteData(name, pos);
	std::cout << "\n\n";
	displayValueofList(name);

	

}