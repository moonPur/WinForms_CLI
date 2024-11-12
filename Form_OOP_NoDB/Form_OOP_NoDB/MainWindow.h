
#include "Data.h"
#pragma once

namespace FormOOPNoDB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// —водка дл€ MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	Generic::List<Data_^>^ listData;
	public:
		MainWindow(void)
		{
			InitializeComponent();
			listData = gcnew List<Data_^>();  // out Data_ is global -_-
		
			//std::string* s = new std::string("12");
			//String^ strS = gcnew String(s->c_str());
			//MessageBox::Show(strS);
			//Generic::List<String^>^ l = gcnew Generic::List<String^>();

			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>    
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutThisProgramToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ actionsToolStripMenuItem;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ToolStripMenuItem^ inToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ inputManuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ changeDToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ addDataToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ sortDataToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveDataToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ sortBySurnameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sortByNameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sortByToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sortByDateOfBirthToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sortByAddressToolStripMenuItem;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->actionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->inToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->inputManuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->changeDToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addDataToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sortDataToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sortBySurnameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sortByNameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sortByToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveDataToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutThisProgramToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->sortByDateOfBirthToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sortByAddressToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->actionsToolStripMenuItem,
					this->aboutThisProgramToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1403, 42);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// actionsToolStripMenuItem
			// 
			this->actionsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->inToolStripMenuItem,
					this->inputManuToolStripMenuItem, this->changeDToolStripMenuItem, this->addDataToolStripMenuItem, this->sortDataToolStripMenuItem,
					this->saveDataToolStripMenuItem
			});
			this->actionsToolStripMenuItem->Name = L"actionsToolStripMenuItem";
			this->actionsToolStripMenuItem->Size = System::Drawing::Size(119, 38);
			this->actionsToolStripMenuItem->Text = L"Actions ";
			// 
			// inToolStripMenuItem
			// 
			this->inToolStripMenuItem->Name = L"inToolStripMenuItem";
			this->inToolStripMenuItem->Size = System::Drawing::Size(359, 44);
			this->inToolStripMenuItem->Text = L"Import file";
			this->inToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::inToolStripMenuItem_Click);
			// 
			// inputManuToolStripMenuItem
			// 
			this->inputManuToolStripMenuItem->Name = L"inputManuToolStripMenuItem";
			this->inputManuToolStripMenuItem->Size = System::Drawing::Size(359, 44);
			this->inputManuToolStripMenuItem->Text = L"Manual input";
			this->inputManuToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::inputManuToolStripMenuItem_Click);
			// 
			// changeDToolStripMenuItem
			// 
			this->changeDToolStripMenuItem->Name = L"changeDToolStripMenuItem";
			this->changeDToolStripMenuItem->Size = System::Drawing::Size(359, 44);
			this->changeDToolStripMenuItem->Text = L"Change data";
			this->changeDToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::changeDToolStripMenuItem_Click);
			// 
			// addDataToolStripMenuItem
			// 
			this->addDataToolStripMenuItem->Name = L"addDataToolStripMenuItem";
			this->addDataToolStripMenuItem->Size = System::Drawing::Size(359, 44);
			this->addDataToolStripMenuItem->Text = L"Add data";
			this->addDataToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::addDataToolStripMenuItem_Click);
			// 
			// sortDataToolStripMenuItem
			// 
			this->sortDataToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->sortBySurnameToolStripMenuItem,
					this->sortByNameToolStripMenuItem, this->sortByToolStripMenuItem, this->sortByDateOfBirthToolStripMenuItem, this->sortByAddressToolStripMenuItem
			});
			this->sortDataToolStripMenuItem->Name = L"sortDataToolStripMenuItem";
			this->sortDataToolStripMenuItem->Size = System::Drawing::Size(359, 44);
			this->sortDataToolStripMenuItem->Text = L"Sort data";
			this->sortDataToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::sortDataToolStripMenuItem_Click);
			// 
			// sortBySurnameToolStripMenuItem
			// 
			this->sortBySurnameToolStripMenuItem->Name = L"sortBySurnameToolStripMenuItem";
			this->sortBySurnameToolStripMenuItem->Size = System::Drawing::Size(363, 44);
			this->sortBySurnameToolStripMenuItem->Text = L"Sort by surname";
			// 
			// sortByNameToolStripMenuItem
			// 
			this->sortByNameToolStripMenuItem->Name = L"sortByNameToolStripMenuItem";
			this->sortByNameToolStripMenuItem->Size = System::Drawing::Size(363, 44);
			this->sortByNameToolStripMenuItem->Text = L"Sort by name";
			// 
			// sortByToolStripMenuItem
			// 
			this->sortByToolStripMenuItem->Name = L"sortByToolStripMenuItem";
			this->sortByToolStripMenuItem->Size = System::Drawing::Size(363, 44);
			this->sortByToolStripMenuItem->Text = L"Sort by patrinymic";
			// 
			// saveDataToolStripMenuItem
			// 
			this->saveDataToolStripMenuItem->Name = L"saveDataToolStripMenuItem";
			this->saveDataToolStripMenuItem->Size = System::Drawing::Size(359, 44);
			this->saveDataToolStripMenuItem->Text = L"Save data";
			this->saveDataToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::saveDataToolStripMenuItem_Click);
			// 
			// aboutThisProgramToolStripMenuItem
			// 
			this->aboutThisProgramToolStripMenuItem->Name = L"aboutThisProgramToolStripMenuItem";
			this->aboutThisProgramToolStripMenuItem->Size = System::Drawing::Size(242, 38);
			this->aboutThisProgramToolStripMenuItem->Text = L"About this program";
			this->aboutThisProgramToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::aboutThisProgramToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(71, 38);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::exitToolStripMenuItem_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(36, 104);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->RowTemplate->Height = 33;
			this->dataGridView1->Size = System::Drawing::Size(1322, 551);
			this->dataGridView1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(31, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 29);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Data";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// sortByDateOfBirthToolStripMenuItem
			// 
			this->sortByDateOfBirthToolStripMenuItem->Name = L"sortByDateOfBirthToolStripMenuItem";
			this->sortByDateOfBirthToolStripMenuItem->Size = System::Drawing::Size(363, 44);
			this->sortByDateOfBirthToolStripMenuItem->Text = L"Sort by date of birth";
			// 
			// sortByAddressToolStripMenuItem
			// 
			this->sortByAddressToolStripMenuItem->Name = L"sortByAddressToolStripMenuItem";
			this->sortByAddressToolStripMenuItem->Size = System::Drawing::Size(363, 44);
			this->sortByAddressToolStripMenuItem->Text = L"Sort by Address";
			// 
			// MainWindow
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1403, 705);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainWindow";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void aboutThisProgramToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void inToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void DataGridView_Add(DataGridView^ table, cli::array<String^>^ Values);
	   System::Void showdgv(int n, DataGridView^ table);
private: System::Void inputManuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void changeDToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void addDataToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void sortDataToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void saveDataToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);


}; // do not delete
}// do not delete