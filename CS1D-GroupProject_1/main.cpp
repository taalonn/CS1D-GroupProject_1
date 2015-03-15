#include "header.h"


int main()
{
	cout << "Creating winery instance\n\n";
	Wineries winery1;

	cout << "Done creating. testing adding new winery\n\n";

	wineryInfo newWinery;

	newWinery.name = "TestingAddNewWinery1";
	newWinery.otherWineryDistInfo[1] = 1.5;
	newWinery.otherWineryDistInfo[2] = 2.0;
	newWinery.otherWineryDistInfo[3] = 3.2;
	newWinery.otherWineryDistInfo[4] = 4.2;
	newWinery.otherWineryDistInfo[5] = 5.1;
	newWinery.otherWineryDistInfo[6] = 6.2;
	newWinery.otherWineryDistInfo[7] = 7.0;
	newWinery.otherWineryDistInfo[8] = 8.7;
	newWinery.otherWineryDistInfo[9] = 9.5;
	newWinery.otherWineryDistInfo[10] = 10.54;
	newWinery.otherWineryDistInfo[11] = 11.54;

	newWinery.numWinesOffered = 0;

//	wineryInfo newWinery1;
//
//	newWinery1.name = "TestingAddnewWinery12";
//	newWinery1.otherWineryDistInfo[1] = 1.5;
//	newWinery1.otherWineryDistInfo[2] = 2.0;
//	newWinery1.otherWineryDistInfo[3] = 3.2;
//	newWinery1.otherWineryDistInfo[4] = 4.2;
//	newWinery1.otherWineryDistInfo[5] = 5.1;
//	newWinery1.otherWineryDistInfo[6] = 6.2;
//	newWinery1.otherWineryDistInfo[7] = 7.0;
//	newWinery1.otherWineryDistInfo[8] = 8.7;
//	newWinery1.otherWineryDistInfo[9] = 9.5;
//	newWinery1.otherWineryDistInfo[10] = 10.54;
//	newWinery1.otherWineryDistInfo[11] = 11.54;
//	newWinery1.otherWineryDistInfo[12] = 12.54;
//
//	newWinery1.numWinesOffered = 0;

	winery1.addWinery(newWinery);

//	winery1.addWinery(newWinery1);
//
//	cout << "\n\n___________\n";
//	winery1.updateList();
//	cout << "```````````````````````````````";



	winery1.winePurchacedAt(2);
	winery1.updateOutput("Cote de Blanc", 34.54, 2);



	winery1.winePurchacedAt(5);
	winery1.updateOutput("Roussane", 66.54, 2);
	winery1.updateOutput("winer3", 66.54, 1);

	cout << winery1.getOutput();








	return 0;
}
