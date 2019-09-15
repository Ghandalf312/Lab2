#pragma once
#include "Recursividad.h"

namespace Lab1DiegoMorales1132119 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Diagnostics;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnCalcular;
	private: System::Windows::Forms::Label^ Fibonacci;
	protected:

	private: System::Windows::Forms::Label^ resultado;
	private: System::Windows::Forms::TextBox^ txtNum;
	private: System::Windows::Forms::TextBox^ txtNum1;
	private: System::Windows::Forms::Label^ Factorial;
	private: System::Windows::Forms::Button^ btnCalcular1;
	private: System::Windows::Forms::TextBox^ txtNum2;
	private: System::Windows::Forms::Label^ Binario;
	private: System::Windows::Forms::Button^ btnCalcular2;
	private: System::Windows::Forms::TabControl^ Laboratorio;

	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ Tarea;
	private: System::Windows::Forms::TextBox^ txtFactor2;



	private: System::Windows::Forms::TextBox^ txtFactor1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnCalcular3;
	private: System::Windows::Forms::Label^ resultado2;
	private: System::Windows::Forms::TextBox^ txtPalindromo;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnVerificar;
	private: System::Windows::Forms::Button^ btnCalcular4;
	private: System::Windows::Forms::TextBox^ txtBO;



	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtNumMN;
	private: System::Windows::Forms::TextBox^ txtBD;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;



	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnCalcular = (gcnew System::Windows::Forms::Button());
			this->Fibonacci = (gcnew System::Windows::Forms::Label());
			this->resultado = (gcnew System::Windows::Forms::Label());
			this->txtNum = (gcnew System::Windows::Forms::TextBox());
			this->txtNum1 = (gcnew System::Windows::Forms::TextBox());
			this->Factorial = (gcnew System::Windows::Forms::Label());
			this->btnCalcular1 = (gcnew System::Windows::Forms::Button());
			this->txtNum2 = (gcnew System::Windows::Forms::TextBox());
			this->Binario = (gcnew System::Windows::Forms::Label());
			this->btnCalcular2 = (gcnew System::Windows::Forms::Button());
			this->Laboratorio = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->Tarea = (gcnew System::Windows::Forms::TabPage());
			this->btnVerificar = (gcnew System::Windows::Forms::Button());
			this->txtPalindromo = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnCalcular3 = (gcnew System::Windows::Forms::Button());
			this->resultado2 = (gcnew System::Windows::Forms::Label());
			this->txtFactor2 = (gcnew System::Windows::Forms::TextBox());
			this->txtFactor1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtBD = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtNumMN = (gcnew System::Windows::Forms::TextBox());
			this->txtBO = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->btnCalcular4 = (gcnew System::Windows::Forms::Button());
			this->Laboratorio->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->Tarea->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnCalcular
			// 
			this->btnCalcular->Location = System::Drawing::Point(88, 67);
			this->btnCalcular->Name = L"btnCalcular";
			this->btnCalcular->Size = System::Drawing::Size(75, 23);
			this->btnCalcular->TabIndex = 0;
			this->btnCalcular->Text = L"Calcular";
			this->btnCalcular->UseVisualStyleBackColor = true;
			this->btnCalcular->Click += gcnew System::EventHandler(this, &MyForm::BtnCalcular_Click);
			// 
			// Fibonacci
			// 
			this->Fibonacci->AutoSize = true;
			this->Fibonacci->Location = System::Drawing::Point(32, 28);
			this->Fibonacci->Name = L"Fibonacci";
			this->Fibonacci->Size = System::Drawing::Size(53, 13);
			this->Fibonacci->TabIndex = 1;
			this->Fibonacci->Text = L"Fibonacci";
			this->Fibonacci->Click += gcnew System::EventHandler(this, &MyForm::Fibonacci_Click);
			// 
			// resultado
			// 
			this->resultado->AutoSize = true;
			this->resultado->Location = System::Drawing::Point(306, 148);
			this->resultado->Name = L"resultado";
			this->resultado->Size = System::Drawing::Size(55, 13);
			this->resultado->TabIndex = 2;
			this->resultado->Text = L"Resultado";
			// 
			// txtNum
			// 
			this->txtNum->Location = System::Drawing::Point(116, 28);
			this->txtNum->Name = L"txtNum";
			this->txtNum->Size = System::Drawing::Size(100, 20);
			this->txtNum->TabIndex = 3;
			// 
			// txtNum1
			// 
			this->txtNum1->Location = System::Drawing::Point(116, 109);
			this->txtNum1->Name = L"txtNum1";
			this->txtNum1->Size = System::Drawing::Size(100, 20);
			this->txtNum1->TabIndex = 6;
			// 
			// Factorial
			// 
			this->Factorial->AutoSize = true;
			this->Factorial->Location = System::Drawing::Point(32, 109);
			this->Factorial->Name = L"Factorial";
			this->Factorial->Size = System::Drawing::Size(47, 13);
			this->Factorial->TabIndex = 5;
			this->Factorial->Text = L"Factorial";
			// 
			// btnCalcular1
			// 
			this->btnCalcular1->Location = System::Drawing::Point(88, 148);
			this->btnCalcular1->Name = L"btnCalcular1";
			this->btnCalcular1->Size = System::Drawing::Size(75, 23);
			this->btnCalcular1->TabIndex = 4;
			this->btnCalcular1->Text = L"Calcular";
			this->btnCalcular1->UseVisualStyleBackColor = true;
			this->btnCalcular1->Click += gcnew System::EventHandler(this, &MyForm::BtnCalcular1_Click);
			// 
			// txtNum2
			// 
			this->txtNum2->Location = System::Drawing::Point(337, 28);
			this->txtNum2->Name = L"txtNum2";
			this->txtNum2->Size = System::Drawing::Size(100, 20);
			this->txtNum2->TabIndex = 9;
			// 
			// Binario
			// 
			this->Binario->AutoSize = true;
			this->Binario->Location = System::Drawing::Point(253, 28);
			this->Binario->Name = L"Binario";
			this->Binario->Size = System::Drawing::Size(39, 13);
			this->Binario->TabIndex = 8;
			this->Binario->Text = L"Binario";
			// 
			// btnCalcular2
			// 
			this->btnCalcular2->Location = System::Drawing::Point(309, 67);
			this->btnCalcular2->Name = L"btnCalcular2";
			this->btnCalcular2->Size = System::Drawing::Size(75, 23);
			this->btnCalcular2->TabIndex = 7;
			this->btnCalcular2->Text = L"Calcular";
			this->btnCalcular2->UseVisualStyleBackColor = true;
			this->btnCalcular2->Click += gcnew System::EventHandler(this, &MyForm::BtnCalcular2_Click);
			// 
			// Laboratorio
			// 
			this->Laboratorio->Controls->Add(this->tabPage1);
			this->Laboratorio->Controls->Add(this->Tarea);
			this->Laboratorio->Location = System::Drawing::Point(12, 12);
			this->Laboratorio->Name = L"Laboratorio";
			this->Laboratorio->SelectedIndex = 0;
			this->Laboratorio->Size = System::Drawing::Size(528, 297);
			this->Laboratorio->TabIndex = 10;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->resultado);
			this->tabPage1->Controls->Add(this->txtNum2);
			this->tabPage1->Controls->Add(this->btnCalcular);
			this->tabPage1->Controls->Add(this->Binario);
			this->tabPage1->Controls->Add(this->Fibonacci);
			this->tabPage1->Controls->Add(this->btnCalcular2);
			this->tabPage1->Controls->Add(this->txtNum);
			this->tabPage1->Controls->Add(this->txtNum1);
			this->tabPage1->Controls->Add(this->btnCalcular1);
			this->tabPage1->Controls->Add(this->Factorial);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(459, 211);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Laboratorio";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm::TabPage1_Click);
			// 
			// Tarea
			// 
			this->Tarea->Controls->Add(this->btnCalcular4);
			this->Tarea->Controls->Add(this->txtBO);
			this->Tarea->Controls->Add(this->label9);
			this->Tarea->Controls->Add(this->txtNumMN);
			this->Tarea->Controls->Add(this->txtBD);
			this->Tarea->Controls->Add(this->label8);
			this->Tarea->Controls->Add(this->label7);
			this->Tarea->Controls->Add(this->label6);
			this->Tarea->Controls->Add(this->btnVerificar);
			this->Tarea->Controls->Add(this->txtPalindromo);
			this->Tarea->Controls->Add(this->label4);
			this->Tarea->Controls->Add(this->label5);
			this->Tarea->Controls->Add(this->btnCalcular3);
			this->Tarea->Controls->Add(this->resultado2);
			this->Tarea->Controls->Add(this->txtFactor2);
			this->Tarea->Controls->Add(this->txtFactor1);
			this->Tarea->Controls->Add(this->label3);
			this->Tarea->Controls->Add(this->label2);
			this->Tarea->Controls->Add(this->label1);
			this->Tarea->Location = System::Drawing::Point(4, 22);
			this->Tarea->Name = L"Tarea";
			this->Tarea->Padding = System::Windows::Forms::Padding(3);
			this->Tarea->Size = System::Drawing::Size(520, 271);
			this->Tarea->TabIndex = 1;
			this->Tarea->Text = L"Tarea";
			this->Tarea->UseVisualStyleBackColor = true;
			// 
			// btnVerificar
			// 
			this->btnVerificar->Location = System::Drawing::Point(285, 84);
			this->btnVerificar->Name = L"btnVerificar";
			this->btnVerificar->Size = System::Drawing::Size(75, 23);
			this->btnVerificar->TabIndex = 10;
			this->btnVerificar->Text = L"Verificar";
			this->btnVerificar->UseVisualStyleBackColor = true;
			this->btnVerificar->Click += gcnew System::EventHandler(this, &MyForm::BtnVerificar_Click);
			// 
			// txtPalindromo
			// 
			this->txtPalindromo->Location = System::Drawing::Point(285, 34);
			this->txtPalindromo->Name = L"txtPalindromo";
			this->txtPalindromo->Size = System::Drawing::Size(100, 20);
			this->txtPalindromo->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(233, 37);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Palabra";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(233, 7);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Palabra palindroma";
			// 
			// btnCalcular3
			// 
			this->btnCalcular3->Location = System::Drawing::Point(86, 84);
			this->btnCalcular3->Name = L"btnCalcular3";
			this->btnCalcular3->Size = System::Drawing::Size(75, 23);
			this->btnCalcular3->TabIndex = 6;
			this->btnCalcular3->Text = L"Calcular";
			this->btnCalcular3->UseVisualStyleBackColor = true;
			this->btnCalcular3->Click += gcnew System::EventHandler(this, &MyForm::BtnCalcular3_Click);
			// 
			// resultado2
			// 
			this->resultado2->AutoSize = true;
			this->resultado2->Location = System::Drawing::Point(83, 188);
			this->resultado2->Name = L"resultado2";
			this->resultado2->Size = System::Drawing::Size(55, 13);
			this->resultado2->TabIndex = 5;
			this->resultado2->Text = L"Resultado";
			// 
			// txtFactor2
			// 
			this->txtFactor2->Location = System::Drawing::Point(76, 58);
			this->txtFactor2->Name = L"txtFactor2";
			this->txtFactor2->Size = System::Drawing::Size(100, 20);
			this->txtFactor2->TabIndex = 4;
			// 
			// txtFactor1
			// 
			this->txtFactor1->Location = System::Drawing::Point(76, 34);
			this->txtFactor1->Name = L"txtFactor1";
			this->txtFactor1->Size = System::Drawing::Size(100, 20);
			this->txtFactor1->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(24, 65);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Factor 2";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::Label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(24, 37);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Factor 1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(170, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Mutiplicacion por sumas sucesivas";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(233, 114);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(156, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Conversión de base m a base n";
			// 
			// txtBD
			// 
			this->txtBD->Location = System::Drawing::Point(362, 195);
			this->txtBD->Name = L"txtBD";
			this->txtBD->Size = System::Drawing::Size(100, 20);
			this->txtBD->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(233, 195);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(123, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Ingrese la base deseada";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(233, 141);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(94, 13);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Ingrese el  numero";
			// 
			// txtNumMN
			// 
			this->txtNumMN->Location = System::Drawing::Point(362, 141);
			this->txtNumMN->Name = L"txtNumMN";
			this->txtNumMN->Size = System::Drawing::Size(100, 20);
			this->txtNumMN->TabIndex = 13;
			// 
			// txtBO
			// 
			this->txtBO->Location = System::Drawing::Point(362, 167);
			this->txtBO->Name = L"txtBO";
			this->txtBO->Size = System::Drawing::Size(100, 20);
			this->txtBO->TabIndex = 15;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(233, 169);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(114, 13);
			this->label9->TabIndex = 14;
			this->label9->Text = L"Ingrese su base origen";
			// 
			// btnCalcular4
			// 
			this->btnCalcular4->Location = System::Drawing::Point(372, 221);
			this->btnCalcular4->Name = L"btnCalcular4";
			this->btnCalcular4->Size = System::Drawing::Size(75, 23);
			this->btnCalcular4->TabIndex = 16;
			this->btnCalcular4->Text = L"Calcular";
			this->btnCalcular4->UseVisualStyleBackColor = true;
			this->btnCalcular4->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(552, 321);
			this->Controls->Add(this->Laboratorio);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Laboratorio->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->Tarea->ResumeLayout(false);
			this->Tarea->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void BtnCalcular_Click(System::Object^ sender, System::EventArgs^ e) {
		//Declaracion del StopWatch
		Stopwatch^ Timer = gcnew Stopwatch();
		Timer->Start();
		//codigo Fibonacci
		int num = System::Convert::ToInt32(txtNum->Text);
		Recursividad^ recursividadObj = gcnew Recursividad();
		resultado->Text = "Resultado: " + System::Convert::ToString(recursividadObj->Fibonacci(num));
		Timer->Stop();
		System::Windows::Forms::MessageBox::Show("Tiempo de ejecución: " + System::Convert::ToString(Timer -> Elapsed));
		//Leer archivo
		//StreamReader^ streamReader = gcnew StreamReader("..//Archivos");
		//String^ contenidoArchivo = streamReader->ReadToEnd();
		//Escribir archivo
		//StreamWriter^ streamWriter = gcnew StreamWriter("..//Archivos");
		//streamWriter->WriteLine("Texto que quieren de escribir");
		//streamWriter->Close();

	}
private: System::Void Fibonacci_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void BtnCalcular1_Click(System::Object^ sender, System::EventArgs^ e) {
		Stopwatch^ Timer = gcnew Stopwatch();
		Timer->Start();
		int num1 = System::Convert::ToInt32(txtNum1->Text);
		Recursividad^ recursividadObj1 = gcnew Recursividad();
		resultado->Text = "Resultado: " + System::Convert::ToString(recursividadObj1->Factorial(num1));
		Timer->Stop();
		System::Windows::Forms::MessageBox::Show("Tiempo de ejecución: " + System::Convert::ToString(Timer->Elapsed));
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void BtnCalcular2_Click(System::Object^ sender, System::EventArgs^ e) {
		Stopwatch^ Timer = gcnew Stopwatch();
		Timer->Start();
		int num2 = System::Convert::ToInt32(txtNum2->Text);
		Recursividad^ recursividadObj2 = gcnew Recursividad();
		resultado->Text = "Resultado: " + System::Convert::ToString(recursividadObj2->Binario(num2));
		Timer->Stop();
		System::Windows::Forms::MessageBox::Show("Tiempo de ejecución: " + System::Convert::ToString(Timer->Elapsed));
}

private: System::Void TabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void BtnCalcular3_Click(System::Object^ sender, System::EventArgs^ e) {
		Stopwatch^ Timer = gcnew Stopwatch();
		Timer->Start();
		int factor1 = System::Convert::ToInt32(txtFactor1->Text);
		int factor2 = System::Convert::ToInt32(txtFactor2->Text);
		Recursividad^ recursividadObj3 = gcnew Recursividad();
		resultado2->Text = "Resultado: " + System::Convert::ToString(recursividadObj3->Multiplicacion(factor1, factor2));
		Timer->Stop();
		System::Windows::Forms::MessageBox::Show("Tiempo de ejecución: " + System::Convert::ToString(Timer->Elapsed));
}
private: System::Void BtnVerificar_Click(System::Object^ sender, System::EventArgs^ e) {
		Stopwatch^ Timer = gcnew Stopwatch();
		Timer->Start();
		System::String^ palabra = txtPalindromo->Text;
		Recursividad^ recursividadObj4 = gcnew Recursividad();
		resultado2->Text = "Resultado: " + System::Convert::ToString(recursividadObj4->Palindromo(palabra->ToUpper()));
		Timer->Stop();
		System::Windows::Forms::MessageBox::Show("Tiempo de ejecución: " + System::Convert::ToString(Timer->Elapsed));
}
private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
