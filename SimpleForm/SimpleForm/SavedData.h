
#pragma once


namespace SimpleForm {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ SavedData
	/// </summary>
	public ref class SavedDataForm : public System::Windows::Forms::Form
	{
	public:
		System::ComponentModel::BindingList<String^>^ list;

		SavedDataForm(System::ComponentModel::BindingList<String^>^ parlist) // передать список в конструктор 
		{
			InitializeComponent();
			list = parlist; // here
			listBox1->DataSource = list; // here & 20 &18

			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~SavedDataForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ listBox1;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SavedDataForm::typeid));
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 36;
			this->listBox1->Location = System::Drawing::Point(43, 27);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(998, 472);
			this->listBox1->TabIndex = 0;
			// 
			// SavedDataForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1090, 537);
			this->Controls->Add(this->listBox1);
			this->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 7.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MaximizeBox = false;
			this->Name = L"SavedDataForm";
			this->ShowIcon = false;
			this->Text = L"Saved data";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &SavedDataForm::SavedDataForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &SavedDataForm::SavedDataForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
		// добавленный код, который не закрываетнаше окно, а скрывает его, поэтому в MyForm.h больше не будет ощибки после закрыти€ окна 
	private: System::Void SavedDataForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		e->Cancel = true;
		this->Hide();
	}
	private: System::Void SavedDataForm_Load(System::Object^ sender, System::EventArgs^ e) {
	/*	System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SavedDataForm::typeid));
		this->BackgroundImage = (Bitmap^)resources->GetObject("img1");*/
	}
	};
}
