#include "MainWindow.h"
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
	/// —водка дл€ InputForm
	/// </summary>
	public ref class InputForm : public System::Windows::Forms::Form
	{
		MainWindow^ parentForm; // указательна наше главное окно (поле класса InputForm)
		
	/*	int n;
		Data_* dd;*/
		
		Generic::List<int>^ list;
		Generic::List<Data_^>^ listData2;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ add_button3;
		   
	public:

		InputForm(MainWindow^ pForm, Generic::List<Data_^>^ listData, int a) //перегрузили текущий конструктор, когда у нас три параметра мы делаем comboBox -- not visible 
		{

			InitializeComponent();
			parentForm = pForm;

			this->button1->Visible = false;
			this->button3->Visible = false;
			this->add_button3->Visible = true;
			this->comboBox1->Visible = false;
			listData2 = listData;

			list = gcnew Generic::List<int>();

			//
			//TODO: добавьте код конструктора
			//
		}

		InputForm(MainWindow^ pForm, Generic::List<Data_^>^ listData, bool status) //перегрузили текущий конструктор, когда у нас три параметра мы делаем comboBox -- not visible 
		{
		
			InitializeComponent();
			parentForm = pForm; 

			this->comboBox1->Visible = status;  // 
			this->button1->Visible = status;
			this->add_button3->Visible = true;
			//dd = dataArr;
			int n = listData->Count;
			listData2 = listData;
			
			list = gcnew Generic::List<int>();
	
			//
			//TODO: добавьте код конструктора
			//
		}


		InputForm(MainWindow^ pForm, Generic::List<Data_^>^ listData)
		{
			InitializeComponent();
			parentForm = pForm; 
		
			int n = listData->Count;
			listData2 = listData;
			list = gcnew Generic::List<int>(); 
			comboBox1->DataSource = listData2;
			comboBox1->DisplayMember = "FIO";
			this->button3->Visible = true;
			//for (int i = 0; i < n; i++) {
			//	comboBox1->Items->Add((listData[i]->GetInitials().surname) + " " + (listData[i]->GetInitials().name));
			//	list->Add(i);
			//}
	
			/*Values[0] = listData[i]->GetInitials().surname;
			Values[1] = listData[i]->GetInitials().name;
			Values[2] = listData[i]->GetInitials().patrinymic;*/


			//comboBox1->SelectedIndex = 0;
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~InputForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ pToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToMainMenuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ closeProgrammToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ comboBox1;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->pToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToMainMenuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->closeProgrammToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->add_button3 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->pToolStripMenuItem,
					this->pToolStripMenuItem1, this->aboutToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(767, 40);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// pToolStripMenuItem
			// 
			this->pToolStripMenuItem->Name = L"pToolStripMenuItem";
			this->pToolStripMenuItem->Size = System::Drawing::Size(112, 36);
			this->pToolStripMenuItem->Text = L"Actions";
			// 
			// pToolStripMenuItem1
			// 
			this->pToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->exitToMainMenuToolStripMenuItem,
					this->closeProgrammToolStripMenuItem
			});
			this->pToolStripMenuItem1->Name = L"pToolStripMenuItem1";
			this->pToolStripMenuItem1->Size = System::Drawing::Size(71, 36);
			this->pToolStripMenuItem1->Text = L"Exit";
			// 
			// exitToMainMenuToolStripMenuItem
			// 
			this->exitToMainMenuToolStripMenuItem->Name = L"exitToMainMenuToolStripMenuItem";
			this->exitToMainMenuToolStripMenuItem->Size = System::Drawing::Size(342, 44);
			this->exitToMainMenuToolStripMenuItem->Text = L"Exit to main menu";
			this->exitToMainMenuToolStripMenuItem->Click += gcnew System::EventHandler(this, &InputForm::exitToMainMenuToolStripMenuItem_Click);
			// 
			// closeProgrammToolStripMenuItem
			// 
			this->closeProgrammToolStripMenuItem->Name = L"closeProgrammToolStripMenuItem";
			this->closeProgrammToolStripMenuItem->Size = System::Drawing::Size(342, 44);
			this->closeProgrammToolStripMenuItem->Text = L"Close programm";
			this->closeProgrammToolStripMenuItem->Click += gcnew System::EventHandler(this, &InputForm::closeProgrammToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(106, 36);
			this->aboutToolStripMenuItem->Text = L"About ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(197, 166);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(471, 31);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(197, 438);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(153, 57);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Change";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &InputForm::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(197, 216);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(471, 31);
			this->textBox2->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(197, 269);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(471, 31);
			this->textBox3->TabIndex = 4;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(203, 319);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(464, 31);
			this->dateTimePicker1->TabIndex = 5;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(196, 374);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(397, 31);
			this->textBox4->TabIndex = 6;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(613, 375);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(54, 31);
			this->numericUpDown1->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(38, 160);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(104, 25);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Surname ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(38, 216);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 25);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(38, 272);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(112, 25);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Patrinymic";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(38, 325);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(129, 25);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Date of birth";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(38, 381);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(91, 25);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Address";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(43, 87);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(656, 33);
			this->comboBox1->TabIndex = 13;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &InputForm::comboBox1_SelectedIndexChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(0, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 0;
			// 
			// add_button3
			// 
			this->add_button3->Location = System::Drawing::Point(343, 438);
			this->add_button3->Name = L"add_button3";
			this->add_button3->Size = System::Drawing::Size(175, 57);
			this->add_button3->TabIndex = 15;
			this->add_button3->Text = L"Add";
			this->add_button3->UseVisualStyleBackColor = true;
			this->add_button3->Visible = false;
			this->add_button3->Click += gcnew System::EventHandler(this, &InputForm::add_button3_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(465, 438);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(202, 55);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Delete";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &InputForm::button3_Click);
			// 
			// InputForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(767, 546);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->add_button3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"InputForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Input Data";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void exitToMainMenuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void closeProgrammToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void add_button3_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) { // delete data 
	if (System::Windows::Forms::DialogResult::Yes == MessageBox::Show("You are sure delete data?","YOU ARE SURE?",MessageBoxButtons::YesNo,MessageBoxIcon::Question)) {
		listData2->Remove((Data_^)comboBox1->SelectedItem);
		this->Close();
	}

}
}; //don't delete 
}//don't delete 
