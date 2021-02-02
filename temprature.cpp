//Temprature Conversion Functions
namespace TempConversion{

  //Convert Celcius to Kelvin
	double Celcius2Kelvin(double temp){
		return temp+273.15;
	}

  //Convert Celcius to Fahrenheit
	double Celcius2Fahrenheit(double temp){
		return (temp*9/5)+32;
	}

  //Convert Fahrenheit to Kelvin
	double Fahrenheit2Kelvin(double temp){
		return ((temp-32)*5/9)+273.15;
	}

  //Convert Fahrenheit to Celcius
	double Fahrenheit2Celcius(double temp){
		return (temp-32)*5/9;
	}

  //Convert Kelvin to Celcius
	double Kelvin2Celcius(double temp){
		return temp-273.15;
	}

  //Convert Kelvin to Fahrenheit
	double Kelvin2Fahrenheit(double temp){
		return ((temp-273)*9/5)+32;
	}
}


