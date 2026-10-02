#include <iostream>
using namespace std;
int input;
bool reset = false;


int* gradethresholds = new int[6] {49, 59, 69, 79, 89, 100};


void Function1(int score)
{
	
	for (size_t i = 0; i < 6; i++)
	{
		
		if (score <= gradethresholds[i])
		{
			cout << "Your grade is : " << i << endl;
			input = NULL;
			reset = false;
			
			break;
		}
		
	}
}
int main()
{
	
	

	
	while (true)
	{
		
		if (input != NULL)
		{

			Function1(input);
			
		}
		else if (input == NULL && !reset)
		{
			cout << "Insert test score : "; cin >> input;

		}
	


	}
}
