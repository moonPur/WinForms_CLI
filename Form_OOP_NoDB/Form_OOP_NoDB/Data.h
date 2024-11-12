#pragma once
// подключение библиотек, которыми мы будеи пользоватьс

using namespace System;
using namespace System::Collections::Generic;

/* Data is:
1. FIO
2. Date of birth
3. Adress 
*/

public value struct Initials {
	System::String^ surname;
	System::String^ name;
	System::String^ patrinymic;
};

public value struct  Date {
	int day,
		month,
		year;
};

public value struct Address {
	System::String^ street; // original was city
	int home;
};


// class prototype 

public ref class  Data_ {
private:
	 Initials initials;
	 Date date;
	 Address address;

public:
	
	property String^ Adress {
		String^ get() {
			return address.street + " " + address.home;
		}

		void set(String^ value) {

			//MyInt = value;
		}
	}
	
	property String^ getDate {
		String^ get() {
			DateTime^ d = gcnew DateTime(date.year, date.month, date.day);
			return d->ToShortDateString();
		}

		void set(String^ value) {

			//MyInt = value;
		}
	}

	property String^ FIO {
		String^ get() {
			return initials.surname + " " + initials.name + " " + initials.patrinymic;
		}

		void set(String^ value) {

			//MyInt = value;
		}
	}

	Data_(); // default constructor
	Data_(Initials initials_, Date date_, Address address_); // constructor with parametrs
	~Data_(); 


	void DataEntry(Initials initials_, Date date_, Address address_);

	Initials GetInitials() { return initials; };
	Date GetDate() { return date; };
	Address GetAddress() { return address; };

	//перегрузка оператора "=" равно reload opeator 
	//Data_& operator = (Data_ d_o);
};

