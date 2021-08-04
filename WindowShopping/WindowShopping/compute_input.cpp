//
#include "compute_input.h" // header in local directory
#include <iostream> // header in standard library
#include <iomanip>
#include  <stdlib.h>
using namespace C;
using namespace std;

const char separator = ' ';
const int itemWidth = 12;
const int TitleWidth = 12;
const int MediaWidth = 12;
const int spacing = 20;
int row_convert[1];

int compute_input::Print_input(string Headings[100], string data_in[100][100], int Col_count[1], int row_counter[1], char row_input[1])

{
	
	row_convert[0] = atoi(row_input) - 1;
	//cout << row_convert[0];
	
	
	if (row_convert[0] < row_counter[0] && row_convert[0] >=0)
	{
		system("CLS");
		for (int z = 0; z < Col_count[0]; z++)
		{
			if (data_in[row_convert[0]][z] != "")
			{

				cout << Headings[z];
				cout << data_in[row_convert[0]][z];
				cout << endl;
			}



		}
	}
	else
	{
		if (row_input[0] == '?')
		{
			return 1;
		}
	

		if (row_input[0] == 27)
		{
			return 3;
		}
		else
		{
			system("CLS");
			cout << "Entry " << row_input << " Does not exist. Press enter to return to list.";
			string in;
			getline(cin, in);
			if (in == "")
			{
				return 0;
			}
		}

	}
}