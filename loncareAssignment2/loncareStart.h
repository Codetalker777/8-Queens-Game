#pragma once
#include "chessBoard.h"
#include "leaderBoard.h"

namespace loncareAssignment2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for loncareStart
	/// </summary>
	public ref class loncareStart : public System::Windows::Forms::Form
	{
	public:
		loncareStart(void)
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
		~loncareStart()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Exitbutton;
	protected:
	private: System::Windows::Forms::Button^  Leaderboardbutton;
	private: System::Windows::Forms::Button^  queengame;

	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(loncareStart::typeid));
			this->Exitbutton = (gcnew System::Windows::Forms::Button());
			this->Leaderboardbutton = (gcnew System::Windows::Forms::Button());
			this->queengame = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Exitbutton
			// 
			this->Exitbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Exitbutton->Location = System::Drawing::Point(77, 231);
			this->Exitbutton->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Exitbutton->Name = L"Exitbutton";
			this->Exitbutton->Size = System::Drawing::Size(221, 63);
			this->Exitbutton->TabIndex = 0;
			this->Exitbutton->Text = L"Exit";
			this->Exitbutton->UseVisualStyleBackColor = true;
			this->Exitbutton->Click += gcnew System::EventHandler(this, &loncareStart::exit_click);
			// 
			// Leaderboardbutton
			// 
			this->Leaderboardbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Leaderboardbutton->Location = System::Drawing::Point(77, 96);
			this->Leaderboardbutton->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Leaderboardbutton->Name = L"Leaderboardbutton";
			this->Leaderboardbutton->Size = System::Drawing::Size(221, 63);
			this->Leaderboardbutton->TabIndex = 1;
			this->Leaderboardbutton->Text = L"Leader Board";
			this->Leaderboardbutton->UseVisualStyleBackColor = true;
			this->Leaderboardbutton->Click += gcnew System::EventHandler(this, &loncareStart::leaderboardclick);
			// 
			// queengame
			// 
			this->queengame->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->queengame->Location = System::Drawing::Point(77, 26);
			this->queengame->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->queengame->Name = L"queengame";
			this->queengame->Size = System::Drawing::Size(221, 63);
			this->queengame->TabIndex = 2;
			this->queengame->Text = L"8-Queen Game";
			this->queengame->UseVisualStyleBackColor = true;
			this->queengame->Click += gcnew System::EventHandler(this, &loncareStart::queenclick);
			// 
			// loncareStart
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(379, 321);
			this->Controls->Add(this->queengame);
			this->Controls->Add(this->Leaderboardbutton);
			this->Controls->Add(this->Exitbutton);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"loncareStart";
			this->Text = L"loncareStart";
			this->ResumeLayout(false);

		}
#pragma endregion
		// starts the game
	private: System::Void queenclick(System::Object^  sender, System::EventArgs^  e) {
		chessBoard ^ form = gcnew chessBoard();
		form->ShowDialog();
	}
			 // terminates
	private: System::Void exit_click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
			 // opens leaderboard
	private: System::Void leaderboardclick(System::Object^  sender, System::EventArgs^  e) {
		leaderBoard ^ form2 = gcnew leaderBoard();
		form2->ShowDialog();
	}
};
}
