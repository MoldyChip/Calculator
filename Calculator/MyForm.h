#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textDisplay;
	protected:

	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textDisplay = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textDisplay
			// 
			this->textDisplay->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textDisplay->Location = System::Drawing::Point(19, 17);
			this->textDisplay->Name = L"textDisplay";
			this->textDisplay->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textDisplay->Size = System::Drawing::Size(302, 36);
			this->textDisplay->TabIndex = 0;
			this->textDisplay->Text = L"0";
			this->textDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(21, 125);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(70, 44);
			this->button1->TabIndex = 1;
			this->button1->Text = L"←";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(201, 125);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(70, 44);
			this->button2->TabIndex = 2;
			this->button2->Text = L"C";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(21, 190);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(70, 48);
			this->button3->TabIndex = 3;
			this->button3->Text = L"7";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(111, 190);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(70, 48);
			this->button4->TabIndex = 4;
			this->button4->Text = L"8";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(201, 190);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(70, 48);
			this->button5->TabIndex = 5;
			this->button5->Text = L"9";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(21, 260);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(70, 48);
			this->button6->TabIndex = 6;
			this->button6->Text = L"4";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(111, 260);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(70, 48);
			this->button7->TabIndex = 7;
			this->button7->Text = L"5";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(201, 260);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(70, 48);
			this->button8->TabIndex = 8;
			this->button8->Text = L"6";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(21, 329);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(70, 48);
			this->button9->TabIndex = 9;
			this->button9->Text = L"1";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(111, 329);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(70, 48);
			this->button10->TabIndex = 10;
			this->button10->Text = L"2";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(201, 329);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(70, 48);
			this->button11->TabIndex = 11;
			this->button11->Text = L"3";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(21, 398);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(70, 48);
			this->button12->TabIndex = 12;
			this->button12->Text = L"0";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(111, 398);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(70, 48);
			this->button13->TabIndex = 13;
			this->button13->Text = L".";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(201, 398);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(70, 48);
			this->button14->TabIndex = 14;
			this->button14->Text = L"=";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(292, 398);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(70, 48);
			this->button15->TabIndex = 15;
			this->button15->Text = L"+";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(292, 329);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(70, 48);
			this->button16->TabIndex = 16;
			this->button16->Text = L"-";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(292, 260);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(70, 48);
			this->button17->TabIndex = 17;
			this->button17->Text = L"x";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(292, 190);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(70, 48);
			this->button18->TabIndex = 18;
			this->button18->Text = L"÷";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Window;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->textDisplay);
			this->panel1->Location = System::Drawing::Point(21, 19);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(341, 76);
			this->panel1->TabIndex = 19;
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(106, 125);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(75, 44);
			this->button19->TabIndex = 1;
			this->button19->Text = L"CE";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(292, 125);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(70, 44);
			this->button20->TabIndex = 20;
			this->button20->Text = L"±";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(15, 36);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(404, 484);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		double firstDigit, secondDigit, result;
		String^ operators;
	private: System::Void textDisplay_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!(e->KeyChar == 8 || (e->KeyChar >= 48 && e->KeyChar <= 57) || e->KeyChar == 46)) {
			e->Handled = true;
		}
	}
	private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
		Button^ Numbers = safe_cast<Button^>(sender);

		if (textDisplay->Text == "0") {
			textDisplay->Text = Numbers->Text;
		}
		else {
			textDisplay->Text = textDisplay->Text + Numbers->Text;
		}
	}
private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {
	Button^ NumbersOps = safe_cast<Button^>(sender);
	firstDigit = Double::Parse(textDisplay->Text);

	textDisplay->Text = "";
	operators = NumbersOps->Text;
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!textDisplay->Text->Contains("."))
	{
		textDisplay->Text = textDisplay->Text + ".";
	}
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	secondDigit = Double::Parse(textDisplay->Text);

	if (operators == "+")
	{
		result = firstDigit + secondDigit;
		textDisplay->Text = System::Convert::ToString(result);
	}
	else if (operators == "-")
	{
		result = firstDigit - secondDigit;
		textDisplay->Text = System::Convert::ToString(result);
	}
	else if (operators == "÷")
	{
		result = firstDigit / secondDigit;
		textDisplay->Text = System::Convert::ToString(result);
	}
	else if (operators == "x")
	{
		result = firstDigit * secondDigit;
		textDisplay->Text = System::Convert::ToString(result);
	}
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	textDisplay->Text = "0";
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textDisplay->Text->Length > 0)
	{
		textDisplay->Text = textDisplay->Text->Remove(textDisplay->Text->Length - 1, 1);
	}
	if (textDisplay->Text == "")
	{
		textDisplay->Text = "0";
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	firstDigit = 0;
	secondDigit = 0;
	textDisplay->Text = "0";
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textDisplay->Text->Contains("-"))
	{
		textDisplay->Text = textDisplay->Text->Remove(0, 1);
	}
	else
	{
		textDisplay->Text = "-" + textDisplay->Text;
	}
}
};
}
