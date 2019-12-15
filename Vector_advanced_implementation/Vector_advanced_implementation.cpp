/*Name : ping-devsky
Date  : 15-12-2019
vector implementation with multiple vector within vector and many more containers within vector */

#include<iostream>
#include<vector>

void vectorAddValues(std::vector<std::vector<int>>& abc)
{

	/*abc.push_back({ 1,2,3,4 });
	abc.push_back({ 4,5,9,8,7 });
	abc.push_back({ 4,9,8,7 });
	abc.push_back({ 4,5,9,7 });
	abc.push_back({ 5,9,8,7 });
	abc.push_back({ 4,8,7 });*/

	// Vector values can be added in this two ways : 

	for (int i = 0; i < 10; i++)
	{
		std::vector<int> temp;
		for (int j = 0; j < 5; j++)
		{
			temp.push_back(rand() % 100);

		}
		abc.push_back(temp);
	}

}

void vectorDisplayValues(std::vector<std::vector<int>>& abc)
{
	for (auto it = abc.begin(); it != abc.end(); it++)
	{
		std::cout << std::endl << " {";
		for (auto it2 = (*(it)).begin(); it2 != (*(it)).end(); it2++)
		{
			std::cout << *(it2) << " ";
		}
		std::cout << "}";

	}	

}


void vectorDeleteValues(std::vector<std::vector<int>>& abc,int &pos)
{
		std::vector<std::vector<int>>::iterator a;
		a = abc.begin();
		if (pos <= abc.size())
		{
			a += pos;
			abc.erase(a);
		}

}


int main()
{
	
	std::vector<std::vector<int>> abc;
 
	//assign vector within vector
	vectorAddValues(abc);

	//Retrieve vector within vector values
	vectorDisplayValues(abc);

	//Delete vector within vector values
	int pos = 4;
	vectorDeleteValues(abc,pos);
	std::cout << "\n\nAfter Deleting the value \n\n";

	//Retrieve vector within vector values after deleting a value
	vectorDisplayValues(abc);



	

	


	







	


	return 0;
}