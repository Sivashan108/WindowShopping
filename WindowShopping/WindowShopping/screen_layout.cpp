
#include "screen_layout.h" // header in local directory
#include <iostream> // header in standard library
#include <iomanip>

using namespace I;
using namespace std;

const char separator = ' ';
const int itemWidth = 12;
const int TitleWidth = 12;
const int MediaWidth = 12;
string main_headings[3] = { "Item No:","Title:","Media Type:" };
const int spacing = 20;


void screen_layout::Print_screen(string Headings[100], string data_in[100][100], int Col_count[1], int row_counter[1])

{
	//iterates through headings and prints based on defined heading list
	//Potential inprovement is to remove the need for hardcoded main heading list making more dynamic
	for (int i = 0; i < 3; i++)
	{
		for (int z = 0; z < Col_count[0]; z++)
		{
			if (main_headings[i] == Headings[z])
			{
				cout << left << setw(spacing) << setfill(separator) << Headings[z];
			}
		}

	}
	cout << endl;
	cout << "------------------------------------------------------" << endl;

	//prints data for entry corresponding to main heading list
	for (int q = 0; q < row_counter[0]; q++)
	{
		for (int i = 0; i < 3; i++)
		{
			//

			for (int z = 0; z < Col_count[0]; z++)
			{
				if (main_headings[i] == Headings[z])
				{
					cout << left << setw(spacing) << setfill(separator) << data_in[q][z];
				}

			}

		}
		cout << endl;
	}
}