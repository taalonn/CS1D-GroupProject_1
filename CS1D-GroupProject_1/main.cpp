#include "header.h"


int main()
{

	//Testing pushing and commenting on Git. Making sure everything
	//got set up as it should have.

	//There are still lots of problems with this code (ie: it doesn't work).
	//This code has not been modified yet and it will probably take me a
	//bit of time to get it working completely as I would like it to.

	Wineries winery1;

	cout << "distance between " << winery1.nameOf(7) << " and "
		 << winery1.nameOf(4) << "... " << endl;

	cout << "which is winery 7 and 4: " << winery1.distBetween(7, 4)
		 << " miles" << endl;

	cout << "INFORMATION TEST...Winery No.5\n\n";
	cout << winery1.print(5);

	//causing error
//	cout << winery1.listOfWineries[1].otherWineryDistInfo[3];







	return 0;
}
