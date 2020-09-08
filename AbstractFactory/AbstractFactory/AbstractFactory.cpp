#include "ProductClassLibrary.h"
#include "FactoryClassLibrary.h"

int main()
{
	Factory* pCarFac = FactoryProducer::getFactory("car");
	Factory* pBoatFac = FactoryProducer::getFactory("boat");

	if (!pCarFac && !pBoatFac)
	{
		return 0;
	}

	CarProduct* pCar = pCarFac->getCarProduct();
	pCar->Drive();

	BoatProduct* pBoat = pBoatFac->getBoatProduct();
	pBoat->Drive();

	delete pCarFac;
	delete pBoatFac;

	delete pCar;
	delete pBoat;

	return 0;
}
