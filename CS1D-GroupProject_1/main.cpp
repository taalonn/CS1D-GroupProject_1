#include "header.h"


int main()
{

	//Testing pushing and commenting on Git. Making sure everything
	//got set up as it should have.

	//There are still lots of problems with this code (ie: it doesn't work).
	//This code has not been modified yet and it will probably take me a
	//bit of time to get it working completely as I would like it to.

	Wineries winery1;

	cout << "Testing printAll method\n\n";
	cout << winery1.printAll();

	cin.get();

	wineryInfo newWinery;
	newWinery.name = "Cass Winery";
	newWinery.ownNumber = 11;
	newWinery.ownNumber = winery1.totWineries();

	newWinery.otherWineryDistInfo[1] = 11.5;
	newWinery.otherWineryDistInfo[2] = 14.2;
	newWinery.otherWineryDistInfo[3] = 13.4;
	newWinery.otherWineryDistInfo[4] = 16.5;
	newWinery.otherWineryDistInfo[5] = 3.3;
	newWinery.otherWineryDistInfo[6] = 12.2;
	newWinery.otherWineryDistInfo[7] = 7.8;
	newWinery.otherWineryDistInfo[8] = 6.9;
	newWinery.otherWineryDistInfo[9] = 8.2;
	newWinery.otherWineryDistInfo[10] = 6.11;
	newWinery.otherWineryDistInfo[11] = 10.1;

	newWinery.numWinesOffered = 8;
	newWinery.offeredWineInfo["Viognier"].vintage = 2013;
	newWinery.offeredWineInfo["Viognier"].price = 12.50;

	newWinery.offeredWineInfo["Roussanne"].vintage = 2013 ;
	newWinery.offeredWineInfo["Roussanne"].price = 22.50;



	cin.get();

	winery1.addWinery(newWinery);

	cout << "Testing printAll method\n\n";
	cout << winery1.printAll();


	return 0;
}
