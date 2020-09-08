#pragma once
#include "ProductClassLibrary.h"
class Factory
{
public:
	virtual ~Factory() {};

	virtual CarProduct* getCarProduct() = 0;

	virtual BoatProduct* getBoatProduct() = 0;
};

class CarFactory :public Factory
{
public:
	CarProduct* getCarProduct() override
	{
		return new CarProductA();
	}

	BoatProduct* getBoatProduct() override
	{
		return nullptr;
	}
};

class BoatFactory :public Factory
{
public:
	CarProduct* getCarProduct() override
	{
		return nullptr;
	}

	BoatProduct* getBoatProduct() override
	{
		return new BoatProductA();
	}
};

class FactoryProducer
{
public:
	static Factory* getFactory(std::string name)
	{
		if (name == "car")
		{
			return new CarFactory();
		}
		else if (name == "boat")
		{
			return new BoatFactory();
		}
		return nullptr;
	}
};

