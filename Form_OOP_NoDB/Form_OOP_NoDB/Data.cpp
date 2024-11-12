#include "Data.h"

// тут реализуются методы для класса Data, объявленные в Data.h

Data_::Data_() // data for default constructor 
{
	initials.surname = "";
	initials.name = "";
	initials.patrinymic = "";

	date.day = 0;
	date.month = 0;
	date.year = 0;

	address.street = "";
	address.home = 0;

} //end Data default constructor 

Data_::Data_(Initials initials_, Date date_, Address address_) // data for constructor with variables 
{
	initials.surname = initials_.surname;
	initials.name = initials_.name;
	initials.patrinymic = initials_.patrinymic;

	date.day = date_.day;
	date.month = date_.month;
	date.year = date_.year;

	address.street = address_.street;
	address.home = address_.home;
}

Data_::~Data_() { // не задавали ни какого поведения для деструктора 
}


void Data_::DataEntry(Initials initials_, Date date_, Address address_) {
	initials.surname = initials_.surname;
	initials.name = initials_.name;
	initials.patrinymic = initials_.patrinymic;

	date.day = date_.day;
	date.month = date_.month;
	date.year = date_.year;

	address.street = address_.street;
	address.home = address_.home;
}

// перегруженный оператор присваивания, из строго проекта, который тут куже не пригодился, так как мы используем 
// GenericList, а не массив данных 
// 
//Data_& Data_::operator = (Data_ d_o) {  // d_o old data 
//	this->initials.surname = d_o.initials.surname;
//	this->initials.name = d_o.initials.name;
//	this->initials.patrinymic = d_o.initials.patrinymic;
//
//	this->date.day = d_o.date.day;
//	this->date.month = d_o.date.month;
//	this->date.year = d_o.date.year;
//
//	this->address.street = d_o.address.street;
//	this->address.home = d_o.address.home;
//	
//	return * this;

	//d_n = d_o; data new = data old 
	//присваиваем новому экземпляру класса только что чсчитанные данные 
	// нам это нужно 
//}