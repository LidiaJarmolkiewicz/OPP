#pragma once
#include <string>

enum class EngineType { Diesel, Petrol };

class Car
{
	class Engine
	{
		double size;
		EngineType engineType;
		static int count;
		static const std::string location;
		
	public:
		static std::string generateVIN(Engine engine);
		static int getCount();
		Engine();
		void oilChange();
		void setEngineType(EngineType engineType);
		void setSize(double size);
	    std::string getYear() const;
		
	};
	Engine engine;//pole w klasie Car
	std::string vin;
	
public:
	Car(EngineType engineType, double size);
	void annualService();
	void oilChange();
	std::string getVIN();
	
};