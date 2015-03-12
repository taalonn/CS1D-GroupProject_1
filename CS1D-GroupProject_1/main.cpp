#include "header.h"


int main()
{
	cout << "Creating winery instance\n\n";
	Wineries winery1;
	
	cout << "Done creating. testing adding new winery\n\n";

	wineryInfo newWinery;

	newWinery.name = "TestingAddNewWinery";
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

	winery1.addWinery(newWinery);


	winery1.addWine(1, "WINE_TEST_1", 1900, 120.43);
	winery1.addWine(11, "WINE_TEST_2", 2002, 1.43);
	winery1.addWine(11, "WINE_TEST_3", 3003, 20.43);
	winery1.addWine(11, "WINE_TEST_4", 1001, 3.43);


	winery1.changeWinePrice(11, "WINE_TEST_3", 500.22);

	cout << "\n\n___________\n";
	winery1.updateList();
	cout << "```````````````````````````````";

	return 0;
}
