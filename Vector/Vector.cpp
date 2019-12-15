//Author : ping-devsky
//Date : 15-2-2019
//Vector basic implementation with member function of vectors.

#include<iostream>
#include<vector>
#include<string>

void printData(std::vector<char>& ab)
{
	std::vector<char>::iterator it;
	std::cout << std::endl<<"The Data is : " << "{";
	for (it = ab.begin(); it != ab.end(); it++)
		std::cout << *(it);
	std::cout <<" "  << "}"<<std::endl;

}

int countVowels(std::vector<char>& ab)
{
	//Method is used to itreate over a vector and compare the values of each of the vector element that is a character and maintains a count of that
	//Declare a vector iterator using auto keyword( ie.auto it;)
	int count = 0;
	std::vector<char>::iterator it;

	for (it = ab.begin(); it != ab.end(); it++)
		if (*(it) == 'a' || *(it) == 'e' || *(it) == 'i' || *(it) == 'o' || *(it) == 'u' || *(it) == 'A' || *(it) == 'E' || *(it) == 'I' || *(it) == 'O' || *(it) == 'U')
			count++;

	return count;
}

int countCapitalCase(std::vector<char>& upper)
{
	int count = 0;
	std::vector<char>::iterator it;

	for (it = upper.begin(); it != upper.end(); it++)
		if (*(it) >= 'A' && *(it) <= 'Z')
		{
			count++;
		}

	return count;


}

void convertcapital(std::vector<char>& upper)
{
	int count = 0;
	std::vector<char>::iterator it;

	for (it = upper.begin(); it != upper.end(); it++)
		*(it) = toupper(*(it));

	
	return;

	

}

int countWords(std::vector<char>& ab)
{
	int count = 0;
	//std::vector<char>::iterator it;
	
	for (auto it = ab.rbegin(); it != ab.rend(); it++)
		if (*(it)==char(32))
		{
			ab.pop_back();
		}
		else
		{
			break;
		}

	auto it = ab.begin();
	if (*(it) != char(32))
		count++;
	
	for (it = ab.begin(); it != ab.end(); it++)
		if ((*it) == char(32) && (*(++it) != char(32)) && ((++it) <ab.end() ))
		{
			--it;
			
			
			count++;
		}

	

	return count;

}


void specialVectorFunction(std::vector<char>& text)
{
	std::cout << "\nThe size of the vector is  : " << text.size();

	std::cout << "\nThe current capacity of the vector is  : " << text.capacity();

	text.shrink_to_fit();
	std::cout << "\nAfter applying shrink_to_fit method  : " << text.capacity();
}


int main()
{
	std::cout << "Enter the text  : ";
	std::vector<char> text;
	
	std::string abc;
	getline(std::cin, abc);
	//input string using getline


	
	
	for (int i = 0; abc[i] != '\0'; i++)
	{
		//iterate over the string and added each value in vector;
				text.push_back(abc[i]);
	}
	
	
	std::cout<<"The Total number of vowels in the string is : "<<(countVowels(text))<<std::endl;
	std::cout << "\nThe Total number of capital letter(s) in the string is : " << (countCapitalCase(text)) << std::endl;
	

	convertcapital(text);
	printData(text);
	
	//Not yet working
	//std::cout << "\nThe Total number of words in the string is : " << (countWords(text)) << std::endl;
	
	std::cout << "\n\n\nVECTOR METHODS :  \n";
	specialVectorFunction(text);


	
	return 0;
}


