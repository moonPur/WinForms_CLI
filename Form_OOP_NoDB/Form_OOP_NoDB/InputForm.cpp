#include "MainWindow.h"
#include "InputForm.h"
#include "Data.h"






System::Void FormOOPNoDB::InputForm::exitToMainMenuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	parentForm->Show();
	this->Close();
}

System::Void FormOOPNoDB::InputForm::closeProgrammToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
	//parentForm->Close(); // альтернативный вариант 
}

System::Void FormOOPNoDB::InputForm::button1_Click(System::Object^ sender, System::EventArgs^ e) // button accept 
{
	//int id = list[comboBox1->SelectedIndex];


	Initials initials;
	Date date;
	Address address;

	initials.surname = textBox1->Text;
	initials.name = textBox2->Text;
	initials.patrinymic = textBox3->Text;
	date.day = dateTimePicker1->Value.Day;
	date.month = dateTimePicker1->Value.Month;
	date.year = dateTimePicker1->Value.Year;
	address.home = Convert::ToInt32(numericUpDown1->Text);
	address.street = textBox4->Text;
	Data_^ person = (Data_^)comboBox1->SelectedItem;
	person->DataEntry(initials, date, address);
	
	this->Close();

}

System::Void FormOOPNoDB::InputForm::comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	//int id = list[comboBox1->SelectedIndex];
	Data_^ person = (Data_^)comboBox1->SelectedItem;
	//MessageBox::Show(person->FIO);
	//textBox1->Text = Convert_stdstring_to_String(person.GetInitials().surname);
	//textBox2->Text = Convert_stdstring_to_String(person.GetInitials().name);
	//textBox3->Text = Convert_stdstring_to_String(person.GetInitials().patrinymic);
	//Date dateStd = person.GetDate();*/
	/*DateTime^ date = gcnew DateTime(dateStd.year, dateStd.month, dateStd.day);
	dateTimePicker1->Value = *date;
	textBox4->Text = Convert_stdstring_to_String(person.GetAddress().street);
	numericUpDown1->Text = Convert::ToString(person.GetAddress().home);*/

}

System::Void FormOOPNoDB::InputForm::add_button3_Click(System::Object^ sender, System::EventArgs^ e)
{

	Initials initials;
	Date date;
	Address address;
	//if (!String::IsNullOrWhiteSpace(str)) {
	initials.surname = textBox1->Text;
	initials.name = textBox2->Text;
	initials.patrinymic = textBox3->Text;
	date.day = dateTimePicker1->Value.Day;
	date.month = dateTimePicker1->Value.Month;
	date.year = dateTimePicker1->Value.Year;
	address.home = Convert::ToInt32(numericUpDown1->Text);
	address.street = textBox4->Text;
	listData2->Add(gcnew Data_(initials,date,address));
	textBox1->Clear();
	textBox2->Clear();
	textBox3->Clear();
	textBox4->Clear();
	numericUpDown1->ResetText();
	//this->Close();
}
