#include "MainWindow.h"
#include "Data.h"
// подключаем остальные формы проекта 
#include "InputForm.h"
using namespace System::IO;


using namespace System; //
using namespace System::Windows::Forms;//



System::Void FormOOPNoDB::MainWindow::exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Thank you, for using our app!");
	Application::Exit();
}

System::Void FormOOPNoDB::MainWindow::aboutThisProgramToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Some text about ver 1.0","About programm");
}

// "in" = "input from file"
System::Void FormOOPNoDB::MainWindow::inToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	// here  openFile dialog 
	String^ fileName;
	OpenFileDialog^ openDlg = gcnew OpenFileDialog();
	openDlg = openFileDialog1;
	openDlg->Filter = "(*.txt)|*.txt";
	openDlg->ShowDialog();
	fileName = openDlg->FileName;
	
	String^ dataFrom;
	int n = 0,  counter = 0;
	Initials initials;
	Date date;
	Address address;

	StreamReader^ reader = File::OpenText(fileName);
	while ((dataFrom = reader->ReadLine()) != nullptr) {
		
		if (counter == 0) {
			n = Convert::ToInt32(Convert::ToString(dataFrom[0]));
			counter = 1;
			continue;
		}
		if (counter == 1) {
			array<String^>^ StringArray =dataFrom->Split(' ');
			initials.surname = StringArray[0];
			initials.name = StringArray[1];
			initials.patrinymic = StringArray[2];
			counter++;
			continue;
		}
		if (counter == 2) {
			array<String^>^ StringArray = dataFrom->Split(' ');
			date.day = Convert::ToInt32(Convert::ToString(StringArray[0]));
			date.month = Convert::ToInt32(Convert::ToString(StringArray[1]));
			date.year = Convert::ToInt32(Convert::ToString(StringArray[2]));
			counter++;
			continue;
		}
		if (counter == 3) {
			array<String^>^ StringArray = dataFrom->Split(' ');
			address.street = StringArray[0];
			address.home = Convert::ToInt32(Convert::ToString(StringArray[1]));
			counter = 1;
			listData->Add(gcnew Data_(initials, date, address));// dataList->Add(gcnew Data_(initials,date,address))
			//listData -- global in header MainForm
			continue;
		}
	}//end while 
	reader->Close();

	//MessageBox::Show(Convert::ToString(listData[1]->GetInitials().name));
	dataGridView1->DataSource = listData;
	
	//showdgv(n, dataGridView1);

}

System::Void FormOOPNoDB::MainWindow::DataGridView_Add(DataGridView^ table, cli::array <String^>^ Values) {
	DataGridViewRow^ row = gcnew DataGridViewRow();
	row->CreateCells(table);
	row->SetValues(Values);

	table->Rows->Add(row);
}

System::Void FormOOPNoDB::MainWindow::showdgv(int n, DataGridView^ table) {
	//table->Rows->Clear();
	//for (int i = 0; i < n; i++) {
	//	//MessageBox::Show(Convert::ToString(listData[1]->GetInitials().name));;
	//	cli::array <String^>^ Values = gcnew cli::array <String^>(table->ColumnCount);
	//	Values[0] = listData[i]->GetInitials().surname;
	//	Values[1] = listData[i]->GetInitials().name;
	//	Values[2] = listData[i]->GetInitials().patrinymic;
	//	Date dateStd = listData[i]->GetDate();
	//	DateTime^ date = gcnew DateTime(dateStd.year, dateStd.month, dateStd.day);
	//	Values[3] = date->ToShortDateString();
	//	Values[4] = listData[i]->GetAddress().street + " " + listData[i]->GetAddress().home;
	//	//System::Diagnostics::Debug::WriteLine(listData[0]->GetInitials().name);
	//	DataGridView_Add(table, Values);
	//}
	
}



System::Void FormOOPNoDB::MainWindow::inputManuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	InputForm^ form = gcnew InputForm(this, listData, 1);  // 
	this->Hide();
	form->ShowDialog();
	dataGridView1->DataSource = nullptr;
	dataGridView1->DataSource = listData;
	int n = listData->Count;
}


System::Void FormOOPNoDB::MainWindow::changeDToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	InputForm^ form = gcnew InputForm(this, listData);
	form->ShowDialog();
	dataGridView1->DataSource = nullptr;
	dataGridView1->DataSource = listData;
	int n = listData->Count;
	//showdgv(n, dataGridView1);
	return System::Void();
}

System::Void FormOOPNoDB::MainWindow::addDataToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	InputForm^ form = gcnew InputForm(this, listData, false);
	form->ShowDialog();
	dataGridView1->DataSource = nullptr;
	dataGridView1->DataSource = listData;
	int n = listData->Count;
	//showdgv(n, dataGridView1);

}



System::Void FormOOPNoDB::MainWindow::sortDataToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void FormOOPNoDB::MainWindow::saveDataToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	SaveFileDialog^ saveFdialog = gcnew SaveFileDialog();
	

	saveFdialog->Filter = "Text file (*.txt)|*.txt";
	saveFdialog->Title = "Save a text file";
	//saveFdialog->ShowDialog();
	int nn = listData->Count;
	int n = 0, counter = 0;
	if (saveFdialog->ShowDialog() == ::DialogResult::OK) {
		StreamWriter^ sw = gcnew StreamWriter(saveFdialog->FileName);


		while (counter <= nn) {

			if (counter == 0) {
				n = listData->Count;
				sw->WriteLine(n);
			}
			else {
				//sw->WriteLine(listData[counter]->GetInitials().surname + " " + listData[counter]->GetInitials().name + " " + listData[counter]->GetInitials().patrinymic);
				sw->WriteLine(listData[counter-1]->FIO);
				sw->WriteLine(listData[counter-1]->GetDate().day + " " + listData[counter-1]->GetDate().month + " " + listData[counter-1]->GetDate().year);
				sw->WriteLine(listData[counter-1]->GetAddress().street + " " + listData[counter-1]->GetAddress().home);
			}
			
			counter++;
		}// end while 
		sw->Close();
		
	}


	return System::Void();
}
