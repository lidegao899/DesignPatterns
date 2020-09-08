#pragma once
#include <iostream>

class CarProduct
{
public:
	virtual const char* getName() = 0;

	virtual void Drive() = 0;
};

class CarProductA :public CarProduct
{
public:
	const char* getName() override
	{
		return "ProductA";
	}

	void Drive() override
	{
		std::cout << "car A drive" <<std::endl;
	};
};

class CarProductB :public CarProduct
{
public:
	const char* getName() override
	{
		return "ProductB";
	}

	void Drive() override
	{
		std::cout << "car B drive" << std::endl;
	}
};


class BoatProduct
{
public:
	virtual void Drive() = 0;
};

class BoatProductA :public BoatProduct
{
public:
	void Drive()override
	{
		std::cout << "BoatProductA drive" << std::endl;
	}
};


class BoatProductB :public BoatProduct
{
public:
	void Drive()override
	{
		std::cout << "BoatProductB drive" << std::endl;
	}
};

