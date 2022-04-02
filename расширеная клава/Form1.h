#pragma once
#include <windows.h>

#pragma comment(lib, "user32")
#define sleeButtom 200
namespace расширенаяклава {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
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
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(43, 43);
			this->button1->TabIndex = 0;
			this->button1->Text = L"F13";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(61, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(43, 43);
			this->button2->TabIndex = 1;
			this->button2->Text = L"F14";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(110, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(43, 43);
			this->button3->TabIndex = 2;
			this->button3->Text = L"F15";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(159, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(43, 43);
			this->button4->TabIndex = 3;
			this->button4->Text = L"F16";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(208, 12);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(43, 43);
			this->button5->TabIndex = 4;
			this->button5->Text = L"F17";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(257, 12);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(43, 43);
			this->button6->TabIndex = 5;
			this->button6->Text = L"F18";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(306, 12);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(43, 43);
			this->button7->TabIndex = 6;
			this->button7->Text = L"F19";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(355, 12);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(43, 43);
			this->button8->TabIndex = 7;
			this->button8->Text = L"F20";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(404, 12);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(43, 43);
			this->button9->TabIndex = 8;
			this->button9->Text = L"F21";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(453, 12);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(43, 43);
			this->button10->TabIndex = 9;
			this->button10->Text = L"F22";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(502, 12);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(43, 43);
			this->button11->TabIndex = 10;
			this->button11->Text = L"F23";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(551, 12);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(43, 43);
			this->button12->TabIndex = 11;
			this->button12->Text = L"F24";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(12, 61);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(43, 43);
			this->button13->TabIndex = 12;
			this->button13->Text = L"v+";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(61, 61);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(43, 43);
			this->button14->TabIndex = 13;
			this->button14->Text = L"v-";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(110, 61);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(43, 43);
			this->button15->TabIndex = 14;
			this->button15->Text = L"v on/off";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(208, 61);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(43, 43);
			this->button16->TabIndex = 15;
			this->button16->Text = L"next";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(257, 61);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(43, 43);
			this->button17->TabIndex = 16;
			this->button17->Text = L"prev";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(306, 61);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(43, 43);
			this->button18->TabIndex = 17;
			this->button18->Text = L"stop";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Form1::button18_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(355, 61);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(43, 43);
			this->button19->TabIndex = 18;
			this->button19->Text = L"pause/play";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &Form1::button19_Click);
			// 
			// button20
			// 
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button20->Location = System::Drawing::Point(453, 61);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(43, 43);
			this->button20->TabIndex = 19;
			this->button20->Text = L"mail";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Form1::button20_Click);
			// 
			// button21
			// 
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button21->Location = System::Drawing::Point(502, 61);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(43, 43);
			this->button21->TabIndex = 20;
			this->button21->Text = L"media";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &Form1::button21_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(623, 123);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
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
			this->Name = L"Form1";
			this->Text = L"Дополнительные клавишы";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 keybd_event(VK_F13,0,0,0);
              Sleep(sleeButtom);
              keybd_event(VK_F13,0,KEYEVENTF_KEYUP,0);
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			  keybd_event(VK_F14,0,0,0);
              Sleep(sleeButtom);
              keybd_event(VK_F14,0,KEYEVENTF_KEYUP,0);
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			  keybd_event(VK_F15,0,0,0);
              Sleep(sleeButtom);
              keybd_event(VK_F15,0,KEYEVENTF_KEYUP,0);
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			  keybd_event(VK_F16,0,0,0);
              Sleep(sleeButtom);
              keybd_event(VK_F16,0,KEYEVENTF_KEYUP,0);
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			  keybd_event(VK_F17,0,0,0);
              Sleep(sleeButtom);
              keybd_event(VK_F17,0,KEYEVENTF_KEYUP,0);
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			  keybd_event(VK_F18,0,0,0);
              Sleep(sleeButtom);
              keybd_event(VK_F18,0,KEYEVENTF_KEYUP,0);
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			  keybd_event(VK_F19,0,0,0);
              Sleep(sleeButtom);
              keybd_event(VK_F19,0,KEYEVENTF_KEYUP,0);
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			  keybd_event(VK_F20,0,0,0);
              Sleep(sleeButtom);
              keybd_event(VK_F20,0,KEYEVENTF_KEYUP,0);
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			  keybd_event(VK_F21,0,0,0);
              Sleep(sleeButtom);
              keybd_event(VK_F21,0,KEYEVENTF_KEYUP,0);
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			  keybd_event(VK_F22,0,0,0);
              Sleep(sleeButtom);
              keybd_event(VK_F22,0,KEYEVENTF_KEYUP,0);
		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			  keybd_event(VK_F23,0,0,0);
              Sleep(sleeButtom);
              keybd_event(VK_F23,0,KEYEVENTF_KEYUP,0);
		 }
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			  keybd_event(VK_F24,0,0,0);
              Sleep(sleeButtom);
              keybd_event(VK_F24,0,KEYEVENTF_KEYUP,0);
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
			 keybd_event(VK_VOLUME_DOWN,0,0,0);
              Sleep(sleeButtom);
              keybd_event(VK_VOLUME_DOWN,0,KEYEVENTF_KEYUP,0);
		 }
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
  keybd_event(VK_VOLUME_UP,0,0,0);
              Sleep(sleeButtom);
              keybd_event(VK_VOLUME_UP,0,KEYEVENTF_KEYUP,0);
		 }
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
			   keybd_event(VK_VOLUME_MUTE,0,0,0);
              Sleep(sleeButtom);
              keybd_event(VK_VOLUME_MUTE,0,KEYEVENTF_KEYUP,0);
		 }
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
			 
				 	   keybd_event(VK_MEDIA_NEXT_TRACK,0,0,0);
              Sleep(sleeButtom);
              keybd_event(VK_MEDIA_NEXT_TRACK,0,KEYEVENTF_KEYUP,0);
		 }
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
			    keybd_event(VK_MEDIA_PREV_TRACK,0,0,0);
              Sleep(sleeButtom);
              keybd_event(VK_MEDIA_PREV_TRACK,0,KEYEVENTF_KEYUP,0);
		 }
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
			    keybd_event(VK_MEDIA_STOP,0,0,0);
              Sleep(sleeButtom);
              keybd_event(VK_MEDIA_STOP,0,KEYEVENTF_KEYUP,0);
		 }
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
			    keybd_event(VK_MEDIA_PLAY_PAUSE,0,0,0);
              Sleep(sleeButtom);
              keybd_event(VK_MEDIA_PLAY_PAUSE,0,KEYEVENTF_KEYUP,0);
		 }
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
			   keybd_event(VK_LAUNCH_MAIL,0,0,0);
              Sleep(sleeButtom);
              keybd_event(VK_LAUNCH_MAIL,0,KEYEVENTF_KEYUP,0);
		 }
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
			   keybd_event(VK_LAUNCH_MEDIA_SELECT,0,0,0);
              Sleep(sleeButtom);
              keybd_event(VK_LAUNCH_MEDIA_SELECT,0,KEYEVENTF_KEYUP,0);
		 }
};
}

