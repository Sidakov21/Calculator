#pragma once
#include <math.h>
#include <string.h>
#include <string>

namespace ÊàëüêóëÿòîğÀìèğ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
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
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;



	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;



	private:
		/// <summary>
		double a = 0;
		double b = 0;
		double c = 0;
		char z = 0;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;

	private: System::Windows::Forms::ToolStripMenuItem^ ïğàâêàToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ ñïğàâêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ êîïèğîâàòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âñòàâèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ æóğíàëToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ èçìåíèòüToolStripMenuItem;




	private: System::Windows::Forms::ToolStripMenuItem^ ïîñìîòğåòüÑïğàâêóToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îÏğîãğàììåToolStripMenuItem;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::ToolStripMenuItem^ âèäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îáû÷íûéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ èíæåíåğíûéToolStripMenuItem;












		   /// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
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
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->âèäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îáû÷íûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->èíæåíåğíûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğàâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->êîïèğîâàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âñòàâèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->æóğíàëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->èçìåíèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñïğàâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîñìîòğåòüÑïğàâêóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îÏğîãğàììåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(21, 440);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(63, 48);
			this->button1->TabIndex = 0;
			this->button1->Text = L"+/-";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(90, 440);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(63, 48);
			this->button2->TabIndex = 1;
			this->button2->Text = L"0";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(159, 440);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(63, 48);
			this->button3->TabIndex = 2;
			this->button3->Text = L",";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(228, 440);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(63, 48);
			this->button4->TabIndex = 3;
			this->button4->Text = L"=";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(228, 386);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(63, 48);
			this->button5->TabIndex = 7;
			this->button5->Text = L"+";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(159, 386);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(63, 48);
			this->button6->TabIndex = 6;
			this->button6->Text = L"3";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(90, 386);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(63, 48);
			this->button7->TabIndex = 5;
			this->button7->Text = L"2";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(21, 386);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(63, 48);
			this->button8->TabIndex = 4;
			this->button8->Text = L"1";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(228, 332);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(63, 48);
			this->button9->TabIndex = 11;
			this->button9->Text = L"-";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(159, 332);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(63, 48);
			this->button10->TabIndex = 10;
			this->button10->Text = L"6";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(90, 332);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(63, 48);
			this->button11->TabIndex = 9;
			this->button11->Text = L"5";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(21, 332);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(63, 48);
			this->button12->TabIndex = 8;
			this->button12->Text = L"4";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(228, 278);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(63, 48);
			this->button13->TabIndex = 15;
			this->button13->Text = L"*";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(159, 278);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(63, 48);
			this->button14->TabIndex = 14;
			this->button14->Text = L"9";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(90, 278);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(63, 48);
			this->button15->TabIndex = 13;
			this->button15->Text = L"8";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(21, 278);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(63, 48);
			this->button16->TabIndex = 12;
			this->button16->Text = L"7";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->Location = System::Drawing::Point(228, 226);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(63, 48);
			this->button17->TabIndex = 19;
			this->button17->Text = L"/";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->Location = System::Drawing::Point(159, 226);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(63, 48);
			this->button18->TabIndex = 18;
			this->button18->Text = L"%";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Visible = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(90, 226);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(63, 48);
			this->button19->TabIndex = 17;
			this->button19->Text = L"ÍÎÄ";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Visible = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->Location = System::Drawing::Point(21, 226);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(63, 48);
			this->button20->TabIndex = 16;
			this->button20->Text = L"^";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Visible = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(21, 172);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(63, 48);
			this->button21->TabIndex = 23;
			this->button21->Text = L"C";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(21, 70);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox1->Size = System::Drawing::Size(270, 76);
			this->textBox1->TabIndex = 25;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(21, 39);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox2->Size = System::Drawing::Size(270, 25);
			this->textBox2->TabIndex = 26;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(90, 172);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(63, 48);
			this->button22->TabIndex = 27;
			this->button22->Text = L"D";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->âèäToolStripMenuItem,
					this->ïğàâêàToolStripMenuItem, this->ñïğàâêàToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::System;
			this->menuStrip1->Size = System::Drawing::Size(680, 24);
			this->menuStrip1->TabIndex = 28;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// âèäToolStripMenuItem
			// 
			this->âèäToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->îáû÷íûéToolStripMenuItem,
					this->èíæåíåğíûéToolStripMenuItem
			});
			this->âèäToolStripMenuItem->Name = L"âèäToolStripMenuItem";
			this->âèäToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->âèäToolStripMenuItem->Text = L"Âèä";
			this->âèäToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âèäToolStripMenuItem_Click);
			// 
			// îáû÷íûéToolStripMenuItem
			// 
			this->îáû÷íûéToolStripMenuItem->CheckOnClick = true;
			this->îáû÷íûéToolStripMenuItem->Name = L"îáû÷íûéToolStripMenuItem";
			this->îáû÷íûéToolStripMenuItem->Size = System::Drawing::Size(148, 22);
			this->îáû÷íûéToolStripMenuItem->Text = L"Îáû÷íûé ";
			this->îáû÷íûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::îáû÷íûéToolStripMenuItem_Click);
			// 
			// èíæåíåğíûéToolStripMenuItem
			// 
			this->èíæåíåğíûéToolStripMenuItem->CheckOnClick = true;
			this->èíæåíåğíûéToolStripMenuItem->Name = L"èíæåíåğíûéToolStripMenuItem";
			this->èíæåíåğíûéToolStripMenuItem->Size = System::Drawing::Size(148, 22);
			this->èíæåíåğíûéToolStripMenuItem->Text = L"Èíæåíåğíûé";
			this->èíæåíåğíûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::èíæåíåğíûéToolStripMenuItem_Click);
			// 
			// ïğàâêàToolStripMenuItem
			// 
			this->ïğàâêàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->êîïèğîâàòüToolStripMenuItem,
					this->âñòàâèòüToolStripMenuItem, this->æóğíàëToolStripMenuItem
			});
			this->ïğàâêàToolStripMenuItem->Name = L"ïğàâêàToolStripMenuItem";
			this->ïğàâêàToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->ïğàâêàToolStripMenuItem->Text = L"Ïğàâêà";
			this->ïğàâêàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïğàâêàToolStripMenuItem_Click);
			// 
			// êîïèğîâàòüToolStripMenuItem
			// 
			this->êîïèğîâàòüToolStripMenuItem->Name = L"êîïèğîâàòüToolStripMenuItem";
			this->êîïèğîâàòüToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->êîïèğîâàòüToolStripMenuItem->Text = L"Êîïèğîâàòü";
			this->êîïèğîâàòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::êîïèğîâàòüToolStripMenuItem_Click);
			// 
			// âñòàâèòüToolStripMenuItem
			// 
			this->âñòàâèòüToolStripMenuItem->Name = L"âñòàâèòüToolStripMenuItem";
			this->âñòàâèòüToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->âñòàâèòüToolStripMenuItem->Text = L"Âñòàâèòü";
			this->âñòàâèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âñòàâèòüToolStripMenuItem_Click);
			// 
			// æóğíàëToolStripMenuItem
			// 
			this->æóğíàëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->èçìåíèòüToolStripMenuItem });
			this->æóğíàëToolStripMenuItem->Name = L"æóğíàëToolStripMenuItem";
			this->æóğíàëToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->æóğíàëToolStripMenuItem->Text = L"Æóğíàë";
			this->æóğíàëToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::æóğíàëToolStripMenuItem_Click);
			// 
			// èçìåíèòüToolStripMenuItem
			// 
			this->èçìåíèòüToolStripMenuItem->Name = L"èçìåíèòüToolStripMenuItem";
			this->èçìåíèòüToolStripMenuItem->Size = System::Drawing::Size(126, 22);
			this->èçìåíèòüToolStripMenuItem->Text = L"Î÷èñòèòü";
			this->èçìåíèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::èçìåíèòüToolStripMenuItem_Click);
			// 
			// ñïğàâêàToolStripMenuItem
			// 
			this->ñïğàâêàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ïîñìîòğåòüÑïğàâêóToolStripMenuItem,
					this->îÏğîãğàììåToolStripMenuItem
			});
			this->ñïğàâêàToolStripMenuItem->Name = L"ñïğàâêàToolStripMenuItem";
			this->ñïğàâêàToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->ñïğàâêàToolStripMenuItem->Text = L"Ñïğàâêà";
			this->ñïğàâêàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ñïğàâêàToolStripMenuItem_Click);
			// 
			// ïîñìîòğåòüÑïğàâêóToolStripMenuItem
			// 
			this->ïîñìîòğåòüÑïğàâêóToolStripMenuItem->Name = L"ïîñìîòğåòüÑïğàâêóToolStripMenuItem";
			this->ïîñìîòğåòüÑïğàâêóToolStripMenuItem->Size = System::Drawing::Size(195, 22);
			this->ïîñìîòğåòüÑïğàâêóToolStripMenuItem->Text = L"Ïğîñìîòğåòü ñïğàâêó";
			this->ïîñìîòğåòüÑïğàâêóToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïğîñìîòğåòüÑïğàâêóToolStripMenuItem_Click);
			// 
			// îÏğîãğàììåToolStripMenuItem
			// 
			this->îÏğîãğàììåToolStripMenuItem->Name = L"îÏğîãğàììåToolStripMenuItem";
			this->îÏğîãğàììåToolStripMenuItem->Size = System::Drawing::Size(195, 22);
			this->îÏğîãğàììåToolStripMenuItem->Text = L"Î ïğîãğàììå";
			this->îÏğîãğàììåToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::îÏğîãğàììåToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(480, 24);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label1->Size = System::Drawing::Size(173, 40);
			this->label1->TabIndex = 31;
			this->label1->Text = L"Èñòîğèÿ";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(360, 70);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox3->Size = System::Drawing::Size(293, 418);
			this->textBox3->TabIndex = 30;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(680, 500);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text += this->button2->Text;
		this->textBox2->Text += this->button2->Text;
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text += this->button8->Text;
		this->textBox2->Text += this->button8->Text;

	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text += this->button7->Text;
		this->textBox2->Text += this->button7->Text;
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text += this->button6->Text;
		this->textBox2->Text += this->button6->Text;
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text += this->button12->Text;
		this->textBox2->Text += this->button12->Text;
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text += this->button11->Text;
		this->textBox2->Text += this->button11->Text;
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text += this->button10->Text;
		this->textBox2->Text += this->button10->Text;
	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text += this->button16->Text;
		this->textBox2->Text += this->button16->Text;
	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text += this->button15->Text;
		this->textBox2->Text += this->button15->Text;
	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text += this->button14->Text;
		this->textBox2->Text += this->button14->Text;
	}
	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
		a = Convert::ToDouble(this->textBox1->Text);
		this->textBox2->Text += this->button20->Text;
		this->textBox1->Text = "";
		z = '^';
	}
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
		a = Convert::ToDouble(this->textBox1->Text);
		this->textBox2->Text += this->button19->Text;
		this->textBox1->Text = "";
		z = 'n';
	}
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		a = Convert::ToDouble(this->textBox1->Text);
		c = a / 100;
		this->textBox1->Text = c.ToString();
		this->textBox2->Text = c.ToString();
		
	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		a = Convert::ToDouble(this->textBox1->Text);
		this->textBox2->Text += this->button17->Text;
		this->textBox1->Text = "";
		z = '/';
	}
	private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text = "";
		this->textBox2->Text = "";
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox1->Text != "")
		{
			a = Convert::ToDouble(this->textBox1->Text);
			a *= -1;
			this->textBox1->Text = a.ToString();
			this->textBox2->Text += "    " + a.ToString();
		}
		else {
			this->textBox1->Text = "-";
			this->textBox2->Text += "-";
		}

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text += this->button3->Text;
		this->textBox2->Text += this->button3->Text;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox2->Text += this->button4->Text;
		this->textBox3->Text += this->textBox2->Text;
		if (z == '+') {
			b = Convert::ToDouble(this->textBox1->Text);
			c = a + b;
			this->textBox1->Text = c.ToString();
			this->textBox3->Text += c.ToString();
		}

		if (z == '-') {
			b = Convert::ToDouble(this->textBox1->Text);
			c = a - b;
			this->textBox1->Text = c.ToString();
			this->textBox3->Text += c.ToString();
		}


		if (z == '*') {
			b = Convert::ToDouble(this->textBox1->Text);
			c = a * b;
			this->textBox1->Text = c.ToString();
			this->textBox3->Text += c.ToString();
			
		}

		if (z == '/') {
			b = Convert::ToDouble(this->textBox1->Text);
			if (b == 0)
			{
				this->textBox1->Text = "!";
				this->textBox2->Text = "Íà íîëü äåëèòü íåëüçÿ!";
			}
			else {
				c = a / b;
				this->textBox1->Text = c.ToString();
				this->textBox3->Text += c.ToString();
			}
		}

		if (z == 'n') {
			b = Convert::ToDouble(this->textBox1->Text);
			if (b == 0)
			{
				this->textBox1->Text = "!";
				this->textBox2->Text = "Íà íîëü äåëèòü íåëüçÿ!";
			}
			else
			{
				c = (int)a % (int)b;
				this->textBox1->Text = c.ToString();
				this->textBox3->Text += c.ToString();
			}

		}

		if (z == '^') {
			b = Convert::ToDouble(this->textBox1->Text);
			c = pow(a, b);
			this->textBox1->Text = c.ToString();
			this->textBox3->Text += c.ToString();
			
		}

		this->textBox3->Text += "\r\n";
		this->textBox2->Text = this->textBox1->Text;
		
	
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		a = Convert::ToDouble(this->textBox1->Text);
		this->textBox2->Text += this->button5->Text;
		this->textBox1->Text = "";
		z = '+';
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox1->Text != "")
		{
			a = Convert::ToDouble(this->textBox1->Text);
			this->textBox2->Text += this->button9->Text;
			this->textBox1->Text = "";
			z = '-';
		}
		else {
			this->textBox1->Text = "-";
			this->textBox2->Text += "-";
		}
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		a = Convert::ToDouble(this->textBox1->Text);
		this->textBox2->Text += this->button13->Text;
		this->textBox1->Text = "";
		z = '*';
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->textBox1->Text != "") {
		this->textBox1->Text = this->textBox1->Text->Remove(this->textBox1->Text->Length - 1);
		this->textBox2->Text = this->textBox2->Text->Remove(this->textBox2->Text->Length - 1);
	}
	
	
	
}

private: System::Void æóğíàëToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void îòêğûòüÆóğíàëToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void çàêğûòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
}
private: System::Void ñïğàâêàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ïğîñìîòğåòüÑïğàâêóToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Diagnostics::Process::Start("https://support.microsoft.com/ru-ru/windows");
}
private: System::Void îÏğîãğàììåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show(
		L"Ïğîãğàììà ğàçğàáîòàíà Ñèäàêîâûì Àì.À â ğàìêàõ èçó÷åíèÿ Ñ++/CLI",
		L"Î ïğîãğàììå",
		MessageBoxButtons::OK, 
		MessageBoxIcon::Information);
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void êîïèğîâàòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox3->SelectAll();
	this->textBox3->Copy();
	this->textBox3->DeselectAll();
}
private: System::Void èçìåíèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox3->Text = "";
}
private: System::Void âñòàâèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox3->Paste();
}
private: System::Void âèäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void îáû÷íûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->èíæåíåğíûéToolStripMenuItem->CheckOnClick == true)
	{
		this->èíæåíåğíûéToolStripMenuItem->Checked = false;
		this->îáû÷íûéToolStripMenuItem->Enabled = false;
	}
	this->îáû÷íûéToolStripMenuItem->Checked = true;
	this->èíæåíåğíûéToolStripMenuItem->Enabled = true;

	this->button18->Visible = false;
	this->button19->Visible = false;
	this->button20->Visible = false;
}
private: System::Void èíæåíåğíûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->îáû÷íûéToolStripMenuItem->CheckOnClick == true)
	{
		this->îáû÷íûéToolStripMenuItem->Checked = false;
		this->èíæåíåğíûéToolStripMenuItem->Enabled = false;

	}
	this->èíæåíåğíûéToolStripMenuItem->Checked = true;
	this->îáû÷íûéToolStripMenuItem->Enabled = true;

	this->button18->Visible = true;
	this->button19->Visible = true;
	this->button20->Visible = true;
	}
	
private: System::Void ïğàâêàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
};
