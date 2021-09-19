#pragma once
#include <time.h> // time library
//#include <stdlib.h>
#include <math.h>

double target(double x) { // target function to explore
	return -log(x) + 0.2 * pow(x, 2) - 1;
}

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Zusammenfassung fьr Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufьgen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ st_launch;
	private: System::Windows::Forms::Button^ dh_start;
	protected:



	private: System::Windows::Forms::TextBox^ st_accuracy;


	private: System::Windows::Forms::Label^ label1;






	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ st_cut_start;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ st_cut_end;
	private: System::Windows::Forms::Label^ result;
	private: System::Windows::Forms::Label^ result_number;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ exec_time;



	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->st_launch = (gcnew System::Windows::Forms::Button());
			this->dh_start = (gcnew System::Windows::Forms::Button());
			this->st_accuracy = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->st_cut_start = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->st_cut_end = (gcnew System::Windows::Forms::TextBox());
			this->result = (gcnew System::Windows::Forms::Label());
			this->result_number = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->exec_time = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// st_launch
			// 
			this->st_launch->Location = System::Drawing::Point(12, 12);
			this->st_launch->Name = L"st_launch";
			this->st_launch->Size = System::Drawing::Size(260, 24);
			this->st_launch->TabIndex = 0;
			this->st_launch->Text = L"Метод прямого перебора";
			this->st_launch->UseVisualStyleBackColor = true;
			this->st_launch->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// dh_start
			// 
			this->dh_start->Location = System::Drawing::Point(12, 113);
			this->dh_start->Name = L"dh_start";
			this->dh_start->Size = System::Drawing::Size(260, 24);
			this->dh_start->TabIndex = 1;
			this->dh_start->Text = L"Метод дихотомии";
			this->dh_start->UseVisualStyleBackColor = true;
			this->dh_start->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// st_accuracy
			// 
			this->st_accuracy->Location = System::Drawing::Point(70, 48);
			this->st_accuracy->Name = L"st_accuracy";
			this->st_accuracy->Size = System::Drawing::Size(202, 20);
			this->st_accuracy->TabIndex = 3;
			this->st_accuracy->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::st_accuracy_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Точность";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 82);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Начало";
			// 
			// st_cut_start
			// 
			this->st_cut_start->Location = System::Drawing::Point(70, 79);
			this->st_cut_start->Name = L"st_cut_start";
			this->st_cut_start->Size = System::Drawing::Size(58, 20);
			this->st_cut_start->TabIndex = 5;
			this->st_cut_start->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::st_cut_start_KeyPress);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(164, 82);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(38, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Конец";
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// st_cut_end
			// 
			this->st_cut_end->Location = System::Drawing::Point(214, 79);
			this->st_cut_end->Name = L"st_cut_end";
			this->st_cut_end->Size = System::Drawing::Size(58, 20);
			this->st_cut_end->TabIndex = 7;
			this->st_cut_end->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::st_cut_end_KeyPress);
			// 
			// result
			// 
			this->result->AutoSize = true;
			this->result->Location = System::Drawing::Point(12, 148);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(126, 13);
			this->result->TabIndex = 9;
			this->result->Text = L"Пересечение с осью х: ";
			// 
			// result_number
			// 
			this->result_number->AutoSize = true;
			this->result_number->Location = System::Drawing::Point(134, 148);
			this->result_number->Name = L"result_number";
			this->result_number->Size = System::Drawing::Size(0, 13);
			this->result_number->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 170);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(108, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Время выполнения:";
			// 
			// exec_time
			// 
			this->exec_time->AutoSize = true;
			this->exec_time->Location = System::Drawing::Point(126, 170);
			this->exec_time->Name = L"exec_time";
			this->exec_time->Size = System::Drawing::Size(0, 13);
			this->exec_time->TabIndex = 9;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 192);
			this->Controls->Add(this->result_number);
			this->Controls->Add(this->exec_time);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->result);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->st_cut_end);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->st_cut_start);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->st_accuracy);
			this->Controls->Add(this->dh_start);
			this->Controls->Add(this->st_launch);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->ShowIcon = false;
			this->Text = L"Решатель";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		if (this->st_accuracy->Text == "" || this->st_cut_start->Text == "" || this->st_cut_end->Text == "") {
			MessageBox::Show("Введите числа!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		else {
			clock_t tStart = clock(); // start timer

			// windows is hard - some conversions...
			double start = static_cast<System::IConvertible^>(this->st_cut_start->Text)->ToDouble(System::Globalization::CultureInfo::CurrentCulture);
			double end = static_cast<System::IConvertible^>(this->st_cut_end->Text)->ToDouble(System::Globalization::CultureInfo::CurrentCulture);
			double accuracy = static_cast<System::IConvertible^>(this->st_accuracy->Text)->ToDouble(System::Globalization::CultureInfo::CurrentCulture);

			for (double x = start; x < end; x = x + accuracy) {

				double y = target(x); // get the y value

				if (fabs(0 - y) < accuracy) { // if value is almost equal zero
					this->result_number->Text = x.ToString();
				}

			}

			this->exec_time->Text = ((double)(clock() - tStart) / CLOCKS_PER_SEC).ToString(); // calculate exec time
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		if (this->st_accuracy->Text == "" || this->st_cut_start->Text == "" || this->st_cut_end->Text == "") {
			MessageBox::Show("Введите числа!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {

			clock_t tStart = clock(); // start timer
			double half; // mid-point

			// windows is hard - some conversions...
			double start = static_cast<System::IConvertible^>(this->st_cut_start->Text)->ToDouble(System::Globalization::CultureInfo::CurrentCulture);
			double end = static_cast<System::IConvertible^>(this->st_cut_end->Text)->ToDouble(System::Globalization::CultureInfo::CurrentCulture);
			double accuracy = static_cast<System::IConvertible^>(this->st_accuracy->Text)->ToDouble(System::Globalization::CultureInfo::CurrentCulture);

			while (end - start > accuracy) // calculate while answer is not accurate enough
			{
				half = (start + end) / 2;

				if (target(end) * target(half) < 0) { // check if target function has opposite values at segment's ends
					start = half; // move right
				}

				else {
					end = half; // move left
				}

			}
			this->result_number->Text = ((start + end) / 2).ToString(); // out the output
			this->exec_time->Text = ((double)(clock() - tStart) / CLOCKS_PER_SEC).ToString(); // calculate exec time

		}
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void st_accuracy_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	char number = e->KeyChar;
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && number != 44) //numbers, BackSpace и comma in ASCII
	{
		e->Handled = true;
	}

}

private: System::Void st_cut_start_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	char number = e->KeyChar;
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && number != 44) //numbers, BackSpace и comma in ASCII
	{
		e->Handled = true;
	}


}
private: System::Void st_cut_end_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	char number = e->KeyChar;
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && number != 44) //numbers, BackSpace и comma in ASCII
	{
		e->Handled = true;
	}


}
};
}
