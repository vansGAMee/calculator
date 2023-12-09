#pragma once

namespace calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;


	private: System::Windows::Forms::Button^ button5;

	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ division;
	private: System::Windows::Forms::Button^ multiplication;
	private: System::Windows::Forms::Button^ addition;
	private: System::Windows::Forms::Button^ subtraction;
	private: System::Windows::Forms::Button^ result;

	private: int first_num;
	private: char user_action;







































	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->division = (gcnew System::Windows::Forms::Button());
			this->multiplication = (gcnew System::Windows::Forms::Button());
			this->addition = (gcnew System::Windows::Forms::Button());
			this->subtraction = (gcnew System::Windows::Forms::Button());
			this->result = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(346, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(34, 31);
			this->button1->TabIndex = 0;
			this->button1->Tag = L"Exit";
			this->button1->Text = L"X";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->label1->Location = System::Drawing::Point(-6, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(290, 75);
			this->label1->TabIndex = 1;
			this->label1->Tag = L"result_label";
			this->label1->Text = L"0";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Gray;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Location = System::Drawing::Point(31, 113);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(65, 65);
			this->button2->TabIndex = 2;
			this->button2->Text = L"7";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Calculator);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Gray;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button5->Location = System::Drawing::Point(124, 210);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(65, 65);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::Calculator);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Gray;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button7->Location = System::Drawing::Point(31, 210);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(65, 65);
			this->button7->TabIndex = 7;
			this->button7->Text = L"4";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::Calculator);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Gray;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button8->Location = System::Drawing::Point(31, 313);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(65, 65);
			this->button8->TabIndex = 8;
			this->button8->Text = L"1";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::Calculator);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Gray;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button9->Location = System::Drawing::Point(124, 313);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(65, 65);
			this->button9->TabIndex = 9;
			this->button9->Text = L"2";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::Calculator);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Gray;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button10->Location = System::Drawing::Point(219, 313);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(65, 65);
			this->button10->TabIndex = 10;
			this->button10->Text = L"3";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::Calculator);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Gray;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button11->Location = System::Drawing::Point(124, 416);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(65, 65);
			this->button11->TabIndex = 11;
			this->button11->Text = L"0";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::Calculator);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Gray;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button12->Location = System::Drawing::Point(124, 113);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(65, 65);
			this->button12->TabIndex = 2;
			this->button12->Text = L"8";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::Calculator);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Gray;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button13->Location = System::Drawing::Point(219, 113);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(65, 65);
			this->button13->TabIndex = 3;
			this->button13->Text = L"9";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::Calculator);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Gray;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button15->Location = System::Drawing::Point(219, 210);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(65, 65);
			this->button15->TabIndex = 5;
			this->button15->Text = L"6";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::Calculator);
			// 
			// division
			// 
			this->division->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->division->Location = System::Drawing::Point(330, 113);
			this->division->Name = L"division";
			this->division->Size = System::Drawing::Size(50, 50);
			this->division->TabIndex = 12;
			this->division->Text = L"/";
			this->division->UseVisualStyleBackColor = false;
			this->division->Click += gcnew System::EventHandler(this, &MyForm::division_Click);
			// 
			// multiplication
			// 
			this->multiplication->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->multiplication->Location = System::Drawing::Point(330, 210);
			this->multiplication->Name = L"multiplication";
			this->multiplication->Size = System::Drawing::Size(50, 50);
			this->multiplication->TabIndex = 13;
			this->multiplication->Text = L"x";
			this->multiplication->UseVisualStyleBackColor = false;
			this->multiplication->Click += gcnew System::EventHandler(this, &MyForm::multiplication_Click);
			// 
			// addition
			// 
			this->addition->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->addition->Location = System::Drawing::Point(330, 313);
			this->addition->Name = L"addition";
			this->addition->Size = System::Drawing::Size(50, 50);
			this->addition->TabIndex = 14;
			this->addition->Text = L"+";
			this->addition->UseVisualStyleBackColor = false;
			this->addition->Click += gcnew System::EventHandler(this, &MyForm::addition_Click);
			// 
			// subtraction
			// 
			this->subtraction->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->subtraction->Location = System::Drawing::Point(330, 416);
			this->subtraction->Name = L"subtraction";
			this->subtraction->Size = System::Drawing::Size(50, 50);
			this->subtraction->TabIndex = 15;
			this->subtraction->Text = L"-";
			this->subtraction->UseVisualStyleBackColor = false;
			this->subtraction->Click += gcnew System::EventHandler(this, &MyForm::subtraction_Click);
			// 
			// result
			// 
			this->result->BackColor = System::Drawing::Color::Cyan;
			this->result->Location = System::Drawing::Point(219, 416);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(65, 50);
			this->result->TabIndex = 16;
			this->result->Text = L"=";
			this->result->UseVisualStyleBackColor = false;
			this->result->Click += gcnew System::EventHandler(this, &MyForm::result_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->ClientSize = System::Drawing::Size(392, 510);
			this->Controls->Add(this->result);
			this->Controls->Add(this->subtraction);
			this->Controls->Add(this->addition);
			this->Controls->Add(this->multiplication);
			this->Controls->Add(this->division);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"calculator";
			this->Click += gcnew System::EventHandler(this, &MyForm::Calculator);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
		   private: System::Void Calculator(System::Object^ sender, System::EventArgs^ e) {
			   Button^ button = safe_cast<Button^>(sender);

			   if (button != nullptr) {
				   if (this->label1->Text == "0")
					   this->label1->Text = button->Text;
				   else
					   this->label1->Text = this->label1->Text + button->Text;
			   }
		   }
private: System::Void division_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('/');

}
private: System::Void multiplication_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('*');

}
private: System::Void addition_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('+');

}
private: System::Void subtraction_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('-');

}
private: System::Void math_action(char action) {
	this->first_num = System::Convert::ToInt32(this->label1->Text);
	this->user_action = action;
	this->label1->Text = "0";
}
private:
	int res;

	// ќбновите функцию result_Click следующим образом
private: System::Void result_Click(System::Object^ sender, System::EventArgs^ e) {
	int second = System::Convert::ToInt32(this->label1->Text);
	switch (this->user_action) {
	case '+': res = this->first_num + second; break;
	case '-': res = this->first_num - second; break;
	case '*': res = this->first_num * second; break;
	case '/': res = this->first_num / second; break;
	}
	this->label1->Text = System::Convert::ToString(res);
}

};
}
