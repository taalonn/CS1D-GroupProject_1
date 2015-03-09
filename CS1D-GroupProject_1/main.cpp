#include "header.h"


int main()
{
	cout << "Creating winery instance\n\n";
	Wineries winery1;
	
	cout << "Done creating. testing adding new winery\n\n";

	wineryInfo newWinery;

	newWinery.name = "Tablas Creek Vineyard";
	newWinery.otherWineryDistInfo[1] = 3.5;
	newWinery.otherWineryDistInfo[2] = 11.0;
	newWinery.otherWineryDistInfo[3] = 17.2;
	newWinery.otherWineryDistInfo[4] = 13.2;
	newWinery.otherWineryDistInfo[5] = 12.1;
	newWinery.otherWineryDistInfo[6] = 14.2;
	newWinery.otherWineryDistInfo[7] = 4.0;
	newWinery.otherWineryDistInfo[8] = 4.7;
	newWinery.otherWineryDistInfo[9] = 9.5;
	newWinery.otherWineryDistInfo[10] = 14.54;


	newWinery.numWinesOffered = 3;


	bottleInfo newBottle1;
	newBottle1.vintage = 2002;
	newBottle1.price = 14.50;
	newWinery.offeredWineInfo["Roussane"] = newBottle1;

	bottleInfo newBottle2;
	newBottle1.vintage = 2002;
	newBottle1.price = 15.00;
	newWinery.offeredWineInfo["Cote de Blanc"] = newBottle2;

	bottleInfo newBottle3;
	newBottle1.vintage = 2001;
	newBottle1.price = 18.00;
	newWinery.offeredWineInfo["Cote de Rouge"] = newBottle3;


	cout << winery1.addWinery(newWinery);




	cout << "\n\n___________\n";
	winery1.updateList();
	cout << "```````````````````````````````";

	return 0;
}
