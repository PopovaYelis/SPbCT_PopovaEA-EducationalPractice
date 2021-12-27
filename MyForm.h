#pragma once
#pragma warning(disable : 4716)
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <locale> 
#include <fstream>
#include <time.h>
#include <string>
#include <cstring>
#include <vector>
#include <windows.h>
#include <algorithm>
#include <thread>

#include "MyForm1.h"
using namespace std;

HANDLE out;
namespace UP_PopovaEA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Threading;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			timer1->Start();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button2;
	private: System::ComponentModel::IContainer^ components;
	private: Thread^ myThread1;
	private: Thread^ myThread2;
	private: Thread^ myThread3;
	private: Thread^ myThread4;
	private: System::Windows::Forms::Button^ button3;
	private: Thread^ myThread5;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(136, 118);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(952, 27);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(322, 27);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Попова Елизавета, 500 группа";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(136, 528);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(283, 89);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Вывести исходные данные";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(131, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(202, 27);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Исходные данные:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(131, 153);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(262, 27);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Векторы в новом файле:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(213, 191);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 27);
			this->label4->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(805, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 27);
			this->label5->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(136, 184);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(952, 313);
			this->textBox2->TabIndex = 7;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(793, 128);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 17);
			this->label6->TabIndex = 8;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(799, 528);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(289, 90);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Вывести вектора";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(491, 515);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(289, 90);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Вывести вектора";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1244, 630);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ filename;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		MyForm1^ NewForm = gcnew MyForm1();
		this->Hide();
		NewForm->ShowDialog();
		this->Show();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ name = "before.txt";
		StreamReader^ file = File::OpenText(name);
		textBox1->Text = file->ReadToEnd();
		button2->Enabled = true;

	}

		   //Функции потоков
public: void sort1() {
	char letter;
	ifstream f;
	std::vector<char> v1, v2;
	f.open("before.txt");
	for (int i = 0; i < 10; i++)
	{
		f >> letter;
		v1.push_back(letter); //Запись содержимого исходного файла в вектор
	}
	sort(v1.begin(), v1.end());  //Сортировка по возрастанию


	for (int i = 0; i < 10; i++)
	{
		f >> letter;
		v2.push_back(letter);
	}
	sort(v2.begin(), v2.end());

	f.close();
}

public: void sort2() {
	char letter;
	ifstream f;
	std::vector<char> v3, v4;
	f.open("before.txt");
	for (int i = 0; i < 20; i++)
		f >> letter;
	for (int i = 0; i < 10; i++)
	{
		f >> letter;
		v3.push_back(letter);
	}
	sort(v3.begin(), v3.end());

	for (int i = 0; i < 10; i++)
	{
		f >> letter;
		v4.push_back(letter);
	}
	sort(v4.begin(), v4.end());

	f.close();
}

public: void sort3() {
	char letter;
	ifstream f;
	std::vector<char> v5, v6;
	f.open("before.txt");
	for (int i = 0; i < 40; i++)
		f >> letter;
	for (int i = 0; i < 10; i++)
	{
		f >> letter;
		v5.push_back(letter);
	}
	sort(v5.begin(), v5.end());

	for (int i = 0; i < 10; i++)
	{
		f >> letter;
		v6.push_back(letter);
	}
	sort(v6.begin(), v6.end());

	f.close();
}

public: void sort4() {
	char letter;
	ifstream f;
	std::vector<char> v7, v8;
	f.open("before.txt");
	for (int i = 0; i < 60; i++)
		f >> letter;
	for (int i = 0; i < 10; i++)
	{
		f >> letter;
		v7.push_back(letter);
	}
	sort(v7.begin(), v7.end());
	
	for (int i = 0; i < 10; i++)
	{
		f >> letter;
		v8.push_back(letter);
	}
	sort(v8.begin(), v8.end());

	f.close();
}

public: void sort5() {
	string bufic = "";
	string buffer = "";
	char letter;
	ifstream f;
	std::vector<char> v9, v10;
	f.open("before.txt");

	for (int i = 0; i < 80; i++)
		f >> letter;
	for (int i = 0; i < 10; i++)
	{
		f >> letter;
		v9.push_back(letter);
	}
	sort(v9.begin(), v9.end());
	addToFile(v9);

	for (int i = 0; i < 10; i++)
	{
		f >> letter;
		v10.push_back(letter);
	}
	sort(v10.begin(), v10.end());

	f.close();
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	ofstream filestream("itog.txt");
	filestream.close();

	//создание потоков
	myThread1 = gcnew Thread(gcnew ThreadStart(this, &MyForm::sort1));
	myThread2 = gcnew Thread(gcnew ThreadStart(this, &MyForm::sort2));
	myThread3 = gcnew Thread(gcnew ThreadStart(this, &MyForm::sort3));
	myThread4 = gcnew Thread(gcnew ThreadStart(this, &MyForm::sort4));
	myThread5 = gcnew Thread(gcnew ThreadStart(this, &MyForm::sort5));

	//запуск потоков
	myThread1->Start();
	myThread1->Join();
	myThread2->Start();
	myThread2->Join();
	myThread3->Start();
	myThread3->Join();
	myThread4->Start();
	myThread4->Join();
	myThread5->Start();
	myThread5->Join();


	//считывание итогового файла
	String^ name = "itog.txt";
	StreamReader^ file = File::OpenText(name);

	//вывод на экран
	textBox2->Text = file->ReadToEnd();
	file->Close();
	//считывание итогового файла


}
};
}
