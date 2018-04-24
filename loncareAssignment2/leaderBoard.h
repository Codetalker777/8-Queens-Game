#pragma once

namespace loncareAssignment2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for leaderBoard
	/// </summary>
	public ref class leaderBoard : public System::Windows::Forms::Form
	{
	public:

		leaderBoard(void)
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
		~leaderBoard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  closebutton;
	private: System::Windows::Forms::Label^  Title;
	private: System::Windows::Forms::Label^  labelposition;
	private: System::Windows::Forms::Label^  datelabel;
	private: System::Windows::Forms::Label^  queenlabel;
	private: System::Windows::Forms::Label^  timelabel;
	private: System::Windows::Forms::Label^  scorelabel;
	private: System::Windows::Forms::Label^  namelabel;
	private: System::Windows::Forms::Label^  pos1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  pos4;

	private: System::Windows::Forms::Label^  pos3;
	private: System::Windows::Forms::Label^  pos5;
	private: System::Windows::Forms::Label^  pos6;
	private: System::Windows::Forms::Label^  pos7;
	private: System::Windows::Forms::Label^  pos8;
	private: System::Windows::Forms::Label^  pos9;
	private: System::Windows::Forms::Label^  pos10;
	private: System::Windows::Forms::Label^  name1;
	private: System::Windows::Forms::Label^  name8;

	private: System::Windows::Forms::Label^  name7;

	private: System::Windows::Forms::Label^  name6;

	private: System::Windows::Forms::Label^  name5;

	private: System::Windows::Forms::Label^  name4;

	private: System::Windows::Forms::Label^  name3;

	private: System::Windows::Forms::Label^  name2;
	private: System::Windows::Forms::Label^  name10;


	private: System::Windows::Forms::Label^  name9;
	private: System::Windows::Forms::Label^  date1;
	private: System::Windows::Forms::Label^  date2;
	private: System::Windows::Forms::Label^  date3;
	private: System::Windows::Forms::Label^  date4;
	private: System::Windows::Forms::Label^  date5;
	private: System::Windows::Forms::Label^  date6;
	private: System::Windows::Forms::Label^  date7;
	private: System::Windows::Forms::Label^  date8;
	private: System::Windows::Forms::Label^  date9;
	private: System::Windows::Forms::Label^  date10;
	private: System::Windows::Forms::Label^  queen1;
	private: System::Windows::Forms::Label^  queen2;
	private: System::Windows::Forms::Label^  queen3;
	private: System::Windows::Forms::Label^  queen4;
	private: System::Windows::Forms::Label^  queen5;
	private: System::Windows::Forms::Label^  queen6;
	private: System::Windows::Forms::Label^  queen7;
	private: System::Windows::Forms::Label^  queen8;
	private: System::Windows::Forms::Label^  queen9;
	private: System::Windows::Forms::Label^  queen10;
	private: System::Windows::Forms::Label^  time1;
	private: System::Windows::Forms::Label^  time2;
	private: System::Windows::Forms::Label^  time3;
	private: System::Windows::Forms::Label^  time4;
	private: System::Windows::Forms::Label^  time5;
	private: System::Windows::Forms::Label^  time6;
	private: System::Windows::Forms::Label^  time7;
	private: System::Windows::Forms::Label^  time8;
	private: System::Windows::Forms::Label^  time9;
	private: System::Windows::Forms::Label^  time10;
	private: System::Windows::Forms::Label^  score1;
	private: System::Windows::Forms::Label^  score2;
	private: System::Windows::Forms::Label^  score3;
	private: System::Windows::Forms::Label^  score4;
	private: System::Windows::Forms::Label^  score5;
	private: System::Windows::Forms::Label^  score6;
	private: System::Windows::Forms::Label^  score7;
	private: System::Windows::Forms::Label^  score8;
	private: System::Windows::Forms::Label^  score9;
	private: System::Windows::Forms::Label^  score10;








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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(leaderBoard::typeid));
			this->closebutton = (gcnew System::Windows::Forms::Button());
			this->Title = (gcnew System::Windows::Forms::Label());
			this->labelposition = (gcnew System::Windows::Forms::Label());
			this->datelabel = (gcnew System::Windows::Forms::Label());
			this->queenlabel = (gcnew System::Windows::Forms::Label());
			this->timelabel = (gcnew System::Windows::Forms::Label());
			this->scorelabel = (gcnew System::Windows::Forms::Label());
			this->namelabel = (gcnew System::Windows::Forms::Label());
			this->pos1 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pos4 = (gcnew System::Windows::Forms::Label());
			this->pos3 = (gcnew System::Windows::Forms::Label());
			this->pos5 = (gcnew System::Windows::Forms::Label());
			this->pos6 = (gcnew System::Windows::Forms::Label());
			this->pos7 = (gcnew System::Windows::Forms::Label());
			this->pos8 = (gcnew System::Windows::Forms::Label());
			this->pos9 = (gcnew System::Windows::Forms::Label());
			this->pos10 = (gcnew System::Windows::Forms::Label());
			this->name1 = (gcnew System::Windows::Forms::Label());
			this->name8 = (gcnew System::Windows::Forms::Label());
			this->name7 = (gcnew System::Windows::Forms::Label());
			this->name6 = (gcnew System::Windows::Forms::Label());
			this->name5 = (gcnew System::Windows::Forms::Label());
			this->name4 = (gcnew System::Windows::Forms::Label());
			this->name3 = (gcnew System::Windows::Forms::Label());
			this->name2 = (gcnew System::Windows::Forms::Label());
			this->name10 = (gcnew System::Windows::Forms::Label());
			this->name9 = (gcnew System::Windows::Forms::Label());
			this->date1 = (gcnew System::Windows::Forms::Label());
			this->date2 = (gcnew System::Windows::Forms::Label());
			this->date3 = (gcnew System::Windows::Forms::Label());
			this->date4 = (gcnew System::Windows::Forms::Label());
			this->date5 = (gcnew System::Windows::Forms::Label());
			this->date6 = (gcnew System::Windows::Forms::Label());
			this->date7 = (gcnew System::Windows::Forms::Label());
			this->date8 = (gcnew System::Windows::Forms::Label());
			this->date9 = (gcnew System::Windows::Forms::Label());
			this->date10 = (gcnew System::Windows::Forms::Label());
			this->queen1 = (gcnew System::Windows::Forms::Label());
			this->queen2 = (gcnew System::Windows::Forms::Label());
			this->queen3 = (gcnew System::Windows::Forms::Label());
			this->queen4 = (gcnew System::Windows::Forms::Label());
			this->queen5 = (gcnew System::Windows::Forms::Label());
			this->queen6 = (gcnew System::Windows::Forms::Label());
			this->queen7 = (gcnew System::Windows::Forms::Label());
			this->queen8 = (gcnew System::Windows::Forms::Label());
			this->queen9 = (gcnew System::Windows::Forms::Label());
			this->queen10 = (gcnew System::Windows::Forms::Label());
			this->time1 = (gcnew System::Windows::Forms::Label());
			this->time2 = (gcnew System::Windows::Forms::Label());
			this->time3 = (gcnew System::Windows::Forms::Label());
			this->time4 = (gcnew System::Windows::Forms::Label());
			this->time5 = (gcnew System::Windows::Forms::Label());
			this->time6 = (gcnew System::Windows::Forms::Label());
			this->time7 = (gcnew System::Windows::Forms::Label());
			this->time8 = (gcnew System::Windows::Forms::Label());
			this->time9 = (gcnew System::Windows::Forms::Label());
			this->time10 = (gcnew System::Windows::Forms::Label());
			this->score1 = (gcnew System::Windows::Forms::Label());
			this->score2 = (gcnew System::Windows::Forms::Label());
			this->score3 = (gcnew System::Windows::Forms::Label());
			this->score4 = (gcnew System::Windows::Forms::Label());
			this->score5 = (gcnew System::Windows::Forms::Label());
			this->score6 = (gcnew System::Windows::Forms::Label());
			this->score7 = (gcnew System::Windows::Forms::Label());
			this->score8 = (gcnew System::Windows::Forms::Label());
			this->score9 = (gcnew System::Windows::Forms::Label());
			this->score10 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// closebutton
			// 
			this->closebutton->Location = System::Drawing::Point(392, 415);
			this->closebutton->Margin = System::Windows::Forms::Padding(4);
			this->closebutton->Name = L"closebutton";
			this->closebutton->Size = System::Drawing::Size(95, 25);
			this->closebutton->TabIndex = 0;
			this->closebutton->Text = L"Close";
			this->closebutton->UseVisualStyleBackColor = true;
			this->closebutton->Click += gcnew System::EventHandler(this, &leaderBoard::closebuttonclick);
			// 
			// Title
			// 
			this->Title->AutoSize = true;
			this->Title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title->Location = System::Drawing::Point(340, 11);
			this->Title->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Title->Name = L"Title";
			this->Title->Size = System::Drawing::Size(184, 29);
			this->Title->TabIndex = 1;
			this->Title->Text = L"Top 10 Scores";
			// 
			// labelposition
			// 
			this->labelposition->AutoSize = true;
			this->labelposition->Location = System::Drawing::Point(16, 73);
			this->labelposition->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelposition->Name = L"labelposition";
			this->labelposition->Size = System::Drawing::Size(58, 17);
			this->labelposition->TabIndex = 2;
			this->labelposition->Text = L"Position";
			// 
			// datelabel
			// 
			this->datelabel->AutoSize = true;
			this->datelabel->Location = System::Drawing::Point(299, 73);
			this->datelabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->datelabel->Name = L"datelabel";
			this->datelabel->Size = System::Drawing::Size(38, 17);
			this->datelabel->TabIndex = 3;
			this->datelabel->Text = L"Date";
			// 
			// queenlabel
			// 
			this->queenlabel->AutoSize = true;
			this->queenlabel->Location = System::Drawing::Point(447, 73);
			this->queenlabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->queenlabel->Name = L"queenlabel";
			this->queenlabel->Size = System::Drawing::Size(86, 17);
			this->queenlabel->TabIndex = 4;
			this->queenlabel->Text = L"# of Queens";
			// 
			// timelabel
			// 
			this->timelabel->AutoSize = true;
			this->timelabel->Location = System::Drawing::Point(640, 73);
			this->timelabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->timelabel->Name = L"timelabel";
			this->timelabel->Size = System::Drawing::Size(39, 17);
			this->timelabel->TabIndex = 5;
			this->timelabel->Text = L"Time";
			// 
			// scorelabel
			// 
			this->scorelabel->AutoSize = true;
			this->scorelabel->Location = System::Drawing::Point(765, 73);
			this->scorelabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->scorelabel->Name = L"scorelabel";
			this->scorelabel->Size = System::Drawing::Size(45, 17);
			this->scorelabel->TabIndex = 6;
			this->scorelabel->Text = L"Score";
			// 
			// namelabel
			// 
			this->namelabel->AutoSize = true;
			this->namelabel->Location = System::Drawing::Point(152, 73);
			this->namelabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->namelabel->Name = L"namelabel";
			this->namelabel->Size = System::Drawing::Size(45, 17);
			this->namelabel->TabIndex = 7;
			this->namelabel->Text = L"Name";
			// 
			// pos1
			// 
			this->pos1->AutoSize = true;
			this->pos1->Location = System::Drawing::Point(39, 105);
			this->pos1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->pos1->Name = L"pos1";
			this->pos1->Size = System::Drawing::Size(20, 17);
			this->pos1->TabIndex = 8;
			this->pos1->Text = L"1.";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(39, 138);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(20, 17);
			this->label1->TabIndex = 9;
			this->label1->Text = L"2.";
			// 
			// pos4
			// 
			this->pos4->AutoSize = true;
			this->pos4->Location = System::Drawing::Point(39, 208);
			this->pos4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->pos4->Name = L"pos4";
			this->pos4->Size = System::Drawing::Size(20, 17);
			this->pos4->TabIndex = 10;
			this->pos4->Text = L"4.";
			// 
			// pos3
			// 
			this->pos3->AutoSize = true;
			this->pos3->Location = System::Drawing::Point(39, 174);
			this->pos3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->pos3->Name = L"pos3";
			this->pos3->Size = System::Drawing::Size(20, 17);
			this->pos3->TabIndex = 11;
			this->pos3->Text = L"3.";
			// 
			// pos5
			// 
			this->pos5->AutoSize = true;
			this->pos5->Location = System::Drawing::Point(39, 241);
			this->pos5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->pos5->Name = L"pos5";
			this->pos5->Size = System::Drawing::Size(20, 17);
			this->pos5->TabIndex = 12;
			this->pos5->Text = L"5.";
			// 
			// pos6
			// 
			this->pos6->AutoSize = true;
			this->pos6->Location = System::Drawing::Point(39, 272);
			this->pos6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->pos6->Name = L"pos6";
			this->pos6->Size = System::Drawing::Size(20, 17);
			this->pos6->TabIndex = 13;
			this->pos6->Text = L"6.";
			// 
			// pos7
			// 
			this->pos7->AutoSize = true;
			this->pos7->Location = System::Drawing::Point(39, 302);
			this->pos7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->pos7->Name = L"pos7";
			this->pos7->Size = System::Drawing::Size(20, 17);
			this->pos7->TabIndex = 14;
			this->pos7->Text = L"7.";
			// 
			// pos8
			// 
			this->pos8->AutoSize = true;
			this->pos8->Location = System::Drawing::Point(39, 335);
			this->pos8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->pos8->Name = L"pos8";
			this->pos8->Size = System::Drawing::Size(20, 17);
			this->pos8->TabIndex = 15;
			this->pos8->Text = L"8.";
			// 
			// pos9
			// 
			this->pos9->AutoSize = true;
			this->pos9->Location = System::Drawing::Point(39, 363);
			this->pos9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->pos9->Name = L"pos9";
			this->pos9->Size = System::Drawing::Size(20, 17);
			this->pos9->TabIndex = 16;
			this->pos9->Text = L"9.";
			// 
			// pos10
			// 
			this->pos10->AutoSize = true;
			this->pos10->Location = System::Drawing::Point(31, 390);
			this->pos10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->pos10->Name = L"pos10";
			this->pos10->Size = System::Drawing::Size(28, 17);
			this->pos10->TabIndex = 17;
			this->pos10->Text = L"10.";
			// 
			// name1
			// 
			this->name1->AutoSize = true;
			this->name1->Location = System::Drawing::Point(152, 105);
			this->name1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->name1->Name = L"name1";
			this->name1->Size = System::Drawing::Size(43, 17);
			this->name1->TabIndex = 18;
			this->name1->Text = L"name";
			// 
			// name8
			// 
			this->name8->AutoSize = true;
			this->name8->Location = System::Drawing::Point(152, 335);
			this->name8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->name8->Name = L"name8";
			this->name8->Size = System::Drawing::Size(43, 17);
			this->name8->TabIndex = 19;
			this->name8->Text = L"name";
			// 
			// name7
			// 
			this->name7->AutoSize = true;
			this->name7->Location = System::Drawing::Point(152, 302);
			this->name7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->name7->Name = L"name7";
			this->name7->Size = System::Drawing::Size(43, 17);
			this->name7->TabIndex = 20;
			this->name7->Text = L"name";
			// 
			// name6
			// 
			this->name6->AutoSize = true;
			this->name6->Location = System::Drawing::Point(152, 272);
			this->name6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->name6->Name = L"name6";
			this->name6->Size = System::Drawing::Size(43, 17);
			this->name6->TabIndex = 21;
			this->name6->Text = L"name";
			// 
			// name5
			// 
			this->name5->AutoSize = true;
			this->name5->Location = System::Drawing::Point(152, 241);
			this->name5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->name5->Name = L"name5";
			this->name5->Size = System::Drawing::Size(43, 17);
			this->name5->TabIndex = 22;
			this->name5->Text = L"name";
			// 
			// name4
			// 
			this->name4->AutoSize = true;
			this->name4->Location = System::Drawing::Point(152, 208);
			this->name4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->name4->Name = L"name4";
			this->name4->Size = System::Drawing::Size(43, 17);
			this->name4->TabIndex = 23;
			this->name4->Text = L"name";
			// 
			// name3
			// 
			this->name3->AutoSize = true;
			this->name3->Location = System::Drawing::Point(152, 174);
			this->name3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->name3->Name = L"name3";
			this->name3->Size = System::Drawing::Size(43, 17);
			this->name3->TabIndex = 24;
			this->name3->Text = L"name";
			// 
			// name2
			// 
			this->name2->AutoSize = true;
			this->name2->Location = System::Drawing::Point(152, 139);
			this->name2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->name2->Name = L"name2";
			this->name2->Size = System::Drawing::Size(43, 17);
			this->name2->TabIndex = 25;
			this->name2->Text = L"name";
			// 
			// name10
			// 
			this->name10->AutoSize = true;
			this->name10->Location = System::Drawing::Point(152, 390);
			this->name10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->name10->Name = L"name10";
			this->name10->Size = System::Drawing::Size(43, 17);
			this->name10->TabIndex = 26;
			this->name10->Text = L"name";
			// 
			// name9
			// 
			this->name9->AutoSize = true;
			this->name9->Location = System::Drawing::Point(152, 363);
			this->name9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->name9->Name = L"name9";
			this->name9->Size = System::Drawing::Size(43, 17);
			this->name9->TabIndex = 27;
			this->name9->Text = L"name";
			// 
			// date1
			// 
			this->date1->AutoSize = true;
			this->date1->Location = System::Drawing::Point(299, 105);
			this->date1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->date1->Name = L"date1";
			this->date1->Size = System::Drawing::Size(36, 17);
			this->date1->TabIndex = 28;
			this->date1->Text = L"date";
			// 
			// date2
			// 
			this->date2->AutoSize = true;
			this->date2->Location = System::Drawing::Point(299, 139);
			this->date2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->date2->Name = L"date2";
			this->date2->Size = System::Drawing::Size(36, 17);
			this->date2->TabIndex = 29;
			this->date2->Text = L"date";
			// 
			// date3
			// 
			this->date3->AutoSize = true;
			this->date3->Location = System::Drawing::Point(299, 174);
			this->date3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->date3->Name = L"date3";
			this->date3->Size = System::Drawing::Size(36, 17);
			this->date3->TabIndex = 30;
			this->date3->Text = L"date";
			// 
			// date4
			// 
			this->date4->AutoSize = true;
			this->date4->Location = System::Drawing::Point(299, 208);
			this->date4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->date4->Name = L"date4";
			this->date4->Size = System::Drawing::Size(36, 17);
			this->date4->TabIndex = 31;
			this->date4->Text = L"date";
			// 
			// date5
			// 
			this->date5->AutoSize = true;
			this->date5->Location = System::Drawing::Point(299, 241);
			this->date5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->date5->Name = L"date5";
			this->date5->Size = System::Drawing::Size(36, 17);
			this->date5->TabIndex = 32;
			this->date5->Text = L"date";
			// 
			// date6
			// 
			this->date6->AutoSize = true;
			this->date6->Location = System::Drawing::Point(299, 272);
			this->date6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->date6->Name = L"date6";
			this->date6->Size = System::Drawing::Size(36, 17);
			this->date6->TabIndex = 33;
			this->date6->Text = L"date";
			// 
			// date7
			// 
			this->date7->AutoSize = true;
			this->date7->Location = System::Drawing::Point(299, 302);
			this->date7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->date7->Name = L"date7";
			this->date7->Size = System::Drawing::Size(36, 17);
			this->date7->TabIndex = 34;
			this->date7->Text = L"date";
			// 
			// date8
			// 
			this->date8->AutoSize = true;
			this->date8->Location = System::Drawing::Point(301, 335);
			this->date8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->date8->Name = L"date8";
			this->date8->Size = System::Drawing::Size(36, 17);
			this->date8->TabIndex = 35;
			this->date8->Text = L"date";
			// 
			// date9
			// 
			this->date9->AutoSize = true;
			this->date9->Location = System::Drawing::Point(299, 363);
			this->date9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->date9->Name = L"date9";
			this->date9->Size = System::Drawing::Size(36, 17);
			this->date9->TabIndex = 36;
			this->date9->Text = L"date";
			// 
			// date10
			// 
			this->date10->AutoSize = true;
			this->date10->Location = System::Drawing::Point(299, 390);
			this->date10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->date10->Name = L"date10";
			this->date10->Size = System::Drawing::Size(36, 17);
			this->date10->TabIndex = 37;
			this->date10->Text = L"date";
			// 
			// queen1
			// 
			this->queen1->AutoSize = true;
			this->queen1->Location = System::Drawing::Point(447, 105);
			this->queen1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->queen1->Name = L"queen1";
			this->queen1->Size = System::Drawing::Size(83, 17);
			this->queen1->TabIndex = 38;
			this->queen1->Text = L"# of queens";
			// 
			// queen2
			// 
			this->queen2->AutoSize = true;
			this->queen2->Location = System::Drawing::Point(450, 138);
			this->queen2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->queen2->Name = L"queen2";
			this->queen2->Size = System::Drawing::Size(83, 17);
			this->queen2->TabIndex = 39;
			this->queen2->Text = L"# of queens";
			// 
			// queen3
			// 
			this->queen3->AutoSize = true;
			this->queen3->Location = System::Drawing::Point(450, 174);
			this->queen3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->queen3->Name = L"queen3";
			this->queen3->Size = System::Drawing::Size(83, 17);
			this->queen3->TabIndex = 40;
			this->queen3->Text = L"# of queens";
			// 
			// queen4
			// 
			this->queen4->AutoSize = true;
			this->queen4->Location = System::Drawing::Point(450, 208);
			this->queen4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->queen4->Name = L"queen4";
			this->queen4->Size = System::Drawing::Size(83, 17);
			this->queen4->TabIndex = 41;
			this->queen4->Text = L"# of queens";
			// 
			// queen5
			// 
			this->queen5->AutoSize = true;
			this->queen5->Location = System::Drawing::Point(450, 241);
			this->queen5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->queen5->Name = L"queen5";
			this->queen5->Size = System::Drawing::Size(83, 17);
			this->queen5->TabIndex = 42;
			this->queen5->Text = L"# of queens";
			// 
			// queen6
			// 
			this->queen6->AutoSize = true;
			this->queen6->Location = System::Drawing::Point(450, 272);
			this->queen6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->queen6->Name = L"queen6";
			this->queen6->Size = System::Drawing::Size(83, 17);
			this->queen6->TabIndex = 43;
			this->queen6->Text = L"# of queens";
			// 
			// queen7
			// 
			this->queen7->AutoSize = true;
			this->queen7->Location = System::Drawing::Point(450, 302);
			this->queen7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->queen7->Name = L"queen7";
			this->queen7->Size = System::Drawing::Size(83, 17);
			this->queen7->TabIndex = 44;
			this->queen7->Text = L"# of queens";
			// 
			// queen8
			// 
			this->queen8->AutoSize = true;
			this->queen8->Location = System::Drawing::Point(450, 335);
			this->queen8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->queen8->Name = L"queen8";
			this->queen8->Size = System::Drawing::Size(83, 17);
			this->queen8->TabIndex = 45;
			this->queen8->Text = L"# of queens";
			// 
			// queen9
			// 
			this->queen9->AutoSize = true;
			this->queen9->Location = System::Drawing::Point(447, 363);
			this->queen9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->queen9->Name = L"queen9";
			this->queen9->Size = System::Drawing::Size(83, 17);
			this->queen9->TabIndex = 46;
			this->queen9->Text = L"# of queens";
			// 
			// queen10
			// 
			this->queen10->AutoSize = true;
			this->queen10->Location = System::Drawing::Point(450, 390);
			this->queen10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->queen10->Name = L"queen10";
			this->queen10->Size = System::Drawing::Size(83, 17);
			this->queen10->TabIndex = 47;
			this->queen10->Text = L"# of queens";
			// 
			// time1
			// 
			this->time1->AutoSize = true;
			this->time1->Location = System::Drawing::Point(640, 105);
			this->time1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->time1->Name = L"time1";
			this->time1->Size = System::Drawing::Size(34, 17);
			this->time1->TabIndex = 48;
			this->time1->Text = L"time";
			// 
			// time2
			// 
			this->time2->AutoSize = true;
			this->time2->Location = System::Drawing::Point(640, 139);
			this->time2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->time2->Name = L"time2";
			this->time2->Size = System::Drawing::Size(34, 17);
			this->time2->TabIndex = 49;
			this->time2->Text = L"time";
			// 
			// time3
			// 
			this->time3->AutoSize = true;
			this->time3->Location = System::Drawing::Point(640, 174);
			this->time3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->time3->Name = L"time3";
			this->time3->Size = System::Drawing::Size(34, 17);
			this->time3->TabIndex = 50;
			this->time3->Text = L"time";
			// 
			// time4
			// 
			this->time4->AutoSize = true;
			this->time4->Location = System::Drawing::Point(640, 208);
			this->time4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->time4->Name = L"time4";
			this->time4->Size = System::Drawing::Size(34, 17);
			this->time4->TabIndex = 51;
			this->time4->Text = L"time";
			// 
			// time5
			// 
			this->time5->AutoSize = true;
			this->time5->Location = System::Drawing::Point(640, 241);
			this->time5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->time5->Name = L"time5";
			this->time5->Size = System::Drawing::Size(34, 17);
			this->time5->TabIndex = 52;
			this->time5->Text = L"time";
			// 
			// time6
			// 
			this->time6->AutoSize = true;
			this->time6->Location = System::Drawing::Point(640, 272);
			this->time6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->time6->Name = L"time6";
			this->time6->Size = System::Drawing::Size(34, 17);
			this->time6->TabIndex = 53;
			this->time6->Text = L"time";
			// 
			// time7
			// 
			this->time7->AutoSize = true;
			this->time7->Location = System::Drawing::Point(640, 302);
			this->time7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->time7->Name = L"time7";
			this->time7->Size = System::Drawing::Size(34, 17);
			this->time7->TabIndex = 54;
			this->time7->Text = L"time";
			// 
			// time8
			// 
			this->time8->AutoSize = true;
			this->time8->Location = System::Drawing::Point(640, 335);
			this->time8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->time8->Name = L"time8";
			this->time8->Size = System::Drawing::Size(34, 17);
			this->time8->TabIndex = 55;
			this->time8->Text = L"time";
			// 
			// time9
			// 
			this->time9->AutoSize = true;
			this->time9->Location = System::Drawing::Point(640, 363);
			this->time9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->time9->Name = L"time9";
			this->time9->Size = System::Drawing::Size(34, 17);
			this->time9->TabIndex = 56;
			this->time9->Text = L"time";
			// 
			// time10
			// 
			this->time10->AutoSize = true;
			this->time10->Location = System::Drawing::Point(640, 390);
			this->time10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->time10->Name = L"time10";
			this->time10->Size = System::Drawing::Size(34, 17);
			this->time10->TabIndex = 57;
			this->time10->Text = L"time";
			// 
			// score1
			// 
			this->score1->AutoSize = true;
			this->score1->Location = System::Drawing::Point(767, 105);
			this->score1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->score1->Name = L"score1";
			this->score1->Size = System::Drawing::Size(43, 17);
			this->score1->TabIndex = 58;
			this->score1->Text = L"score";
			// 
			// score2
			// 
			this->score2->AutoSize = true;
			this->score2->Location = System::Drawing::Point(765, 139);
			this->score2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->score2->Name = L"score2";
			this->score2->Size = System::Drawing::Size(43, 17);
			this->score2->TabIndex = 59;
			this->score2->Text = L"score";
			// 
			// score3
			// 
			this->score3->AutoSize = true;
			this->score3->Location = System::Drawing::Point(765, 174);
			this->score3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->score3->Name = L"score3";
			this->score3->Size = System::Drawing::Size(43, 17);
			this->score3->TabIndex = 60;
			this->score3->Text = L"score";
			// 
			// score4
			// 
			this->score4->AutoSize = true;
			this->score4->Location = System::Drawing::Point(765, 208);
			this->score4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->score4->Name = L"score4";
			this->score4->Size = System::Drawing::Size(43, 17);
			this->score4->TabIndex = 61;
			this->score4->Text = L"score";
			// 
			// score5
			// 
			this->score5->AutoSize = true;
			this->score5->Location = System::Drawing::Point(767, 241);
			this->score5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->score5->Name = L"score5";
			this->score5->Size = System::Drawing::Size(43, 17);
			this->score5->TabIndex = 62;
			this->score5->Text = L"score";
			// 
			// score6
			// 
			this->score6->AutoSize = true;
			this->score6->Location = System::Drawing::Point(767, 272);
			this->score6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->score6->Name = L"score6";
			this->score6->Size = System::Drawing::Size(43, 17);
			this->score6->TabIndex = 63;
			this->score6->Text = L"score";
			// 
			// score7
			// 
			this->score7->AutoSize = true;
			this->score7->Location = System::Drawing::Point(767, 302);
			this->score7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->score7->Name = L"score7";
			this->score7->Size = System::Drawing::Size(43, 17);
			this->score7->TabIndex = 64;
			this->score7->Text = L"score";
			// 
			// score8
			// 
			this->score8->AutoSize = true;
			this->score8->Location = System::Drawing::Point(767, 335);
			this->score8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->score8->Name = L"score8";
			this->score8->Size = System::Drawing::Size(43, 17);
			this->score8->TabIndex = 65;
			this->score8->Text = L"score";
			// 
			// score9
			// 
			this->score9->AutoSize = true;
			this->score9->Location = System::Drawing::Point(765, 363);
			this->score9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->score9->Name = L"score9";
			this->score9->Size = System::Drawing::Size(43, 17);
			this->score9->TabIndex = 66;
			this->score9->Text = L"score";
			// 
			// score10
			// 
			this->score10->AutoSize = true;
			this->score10->Location = System::Drawing::Point(765, 390);
			this->score10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->score10->Name = L"score10";
			this->score10->Size = System::Drawing::Size(43, 17);
			this->score10->TabIndex = 67;
			this->score10->Text = L"score";
			// 
			// leaderBoard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(859, 454);
			this->Controls->Add(this->score10);
			this->Controls->Add(this->score9);
			this->Controls->Add(this->score8);
			this->Controls->Add(this->score7);
			this->Controls->Add(this->score6);
			this->Controls->Add(this->score5);
			this->Controls->Add(this->score4);
			this->Controls->Add(this->score3);
			this->Controls->Add(this->score2);
			this->Controls->Add(this->score1);
			this->Controls->Add(this->time10);
			this->Controls->Add(this->time9);
			this->Controls->Add(this->time8);
			this->Controls->Add(this->time7);
			this->Controls->Add(this->time6);
			this->Controls->Add(this->time5);
			this->Controls->Add(this->time4);
			this->Controls->Add(this->time3);
			this->Controls->Add(this->time2);
			this->Controls->Add(this->time1);
			this->Controls->Add(this->queen10);
			this->Controls->Add(this->queen9);
			this->Controls->Add(this->queen8);
			this->Controls->Add(this->queen7);
			this->Controls->Add(this->queen6);
			this->Controls->Add(this->queen5);
			this->Controls->Add(this->queen4);
			this->Controls->Add(this->queen3);
			this->Controls->Add(this->queen2);
			this->Controls->Add(this->queen1);
			this->Controls->Add(this->date10);
			this->Controls->Add(this->date9);
			this->Controls->Add(this->date8);
			this->Controls->Add(this->date7);
			this->Controls->Add(this->date6);
			this->Controls->Add(this->date5);
			this->Controls->Add(this->date4);
			this->Controls->Add(this->date3);
			this->Controls->Add(this->date2);
			this->Controls->Add(this->date1);
			this->Controls->Add(this->name9);
			this->Controls->Add(this->name10);
			this->Controls->Add(this->name2);
			this->Controls->Add(this->name3);
			this->Controls->Add(this->name4);
			this->Controls->Add(this->name5);
			this->Controls->Add(this->name6);
			this->Controls->Add(this->name7);
			this->Controls->Add(this->name8);
			this->Controls->Add(this->name1);
			this->Controls->Add(this->pos10);
			this->Controls->Add(this->pos9);
			this->Controls->Add(this->pos8);
			this->Controls->Add(this->pos7);
			this->Controls->Add(this->pos6);
			this->Controls->Add(this->pos5);
			this->Controls->Add(this->pos3);
			this->Controls->Add(this->pos4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pos1);
			this->Controls->Add(this->namelabel);
			this->Controls->Add(this->scorelabel);
			this->Controls->Add(this->timelabel);
			this->Controls->Add(this->queenlabel);
			this->Controls->Add(this->datelabel);
			this->Controls->Add(this->labelposition);
			this->Controls->Add(this->Title);
			this->Controls->Add(this->closebutton);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"leaderBoard";
			this->Text = L"leaderBoard";
			this->Load += gcnew System::EventHandler(this, &leaderBoard::leaderBoard_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// closes
	private: System::Void closebuttonclick(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}

			 // loads the data from file when leaderboard is opened
	private: System::Void leaderBoard_Load(System::Object^  sender, System::EventArgs^  e) {

		// variables
		String ^ input;
		char delim = '#';
		array<String^>^ words = { "","","","","","","","","","","" };
		array<String^>^ names = { "","","","","","","","","","",""};
		array<String^>^ date = { "","","","","","","","","","","" };
		array<String^>^ queen = { "","","","","","","","","","","" };
		array<String^>^ time = { "","","","","","","","","","", "" };
		int score[] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1 };

		String^ tempn;
		String^ tempd;
		String^ tempq;
		String^ tempt;
		int temps;
		int count = 0;
		int loop;
		int loop2;

		String^ filename = "leaderboard.txt";

		System::IO::StreamReader^ file = gcnew System::IO::StreamReader(filename, true);

		// reads until end of file
		while (!file->EndOfStream) {
			input = file->ReadLine();
			// splits the string
			words = input->Split(delim);
			// 10 entries
			if (count <= 9) {
				names[count] = words[0];
				date[count] = words[1];
				queen[count] = words[2];
				time[count] = words[3];
				score[count] = int::Parse(words[4]);

			}
			// more than 10 entries
			else {

				tempn = words[0];
				tempd = words[1];
				tempq = words[2];
				tempt = words[3];
				temps = int::Parse(words[4]);


					if (temps > score[9]){
						names[9] = tempn;
						date[9] = tempd;
						queen[9] = tempq;
						time[9] = tempt;
						score[9] = temps;

						}
					count = 9;

				}
			//bubble sort the arrays based on score
				if (count >= 1) {


					for (loop = 0; loop <= count; loop++) {

						for (loop2 = 0; loop2 <= count - loop; loop2++) {

							if (score[loop2] < score[loop2 + 1]) {
								tempn = names[loop2];
								tempd = date[loop2];
								tempq = queen[loop2];
								tempt = time[loop2];
								temps = score[loop2];
								names[loop2] = names[loop2 + 1];
								date[loop2] = date[loop2 + 1];
								queen[loop2] = queen[loop2 + 1];
								time[loop2] = time[loop2 + 1];
								score[loop2] = score[loop2 + 1];
								names[loop2 + 1] = tempn;
								date[loop2 + 1] = tempd;
								queen[loop2 + 1] = tempq;
								time[loop2 + 1] = tempt;
								score[loop2 + 1] = temps;
							}
						}

					}

				}
				count++;
		}
		file->Close();
		// prints the data
		if (score[0] != -1) {

			name1->Text = names[0];
			date1->Text = date[0];
			queen1->Text = queen[0];
			time1->Text = time[0];
			score1->Text = score[0].ToString();

		}
		if (score[1] != -1) {

			name2->Text = names[1];
			date2->Text = date[1];
			queen2->Text = queen[1];
			time2->Text = time[1];
			score2->Text = score[1].ToString();

		}
		if (score[2] != -1) {

			name3->Text = names[2];
			date3->Text = date[2];
			queen3->Text = queen[2];
			time3->Text = time[2];
			score3->Text = score[2].ToString();

		}
		if (score[3] != -1) {

			name4->Text = names[3];
			date4->Text = date[3];
			queen4->Text = queen[3];
			time4->Text = time[3];
			score4->Text = score[3].ToString();

		}
		if (score[4] != -1) {

			name5->Text = names[4];
			date5->Text = date[4];
			queen5->Text = queen[4];
			time5->Text = time[4];
			score5->Text = score[4].ToString();

		}
		if (score[5] != -1) {

			name6->Text = names[5];
			date6->Text = date[5];
			queen6->Text = queen[5];
			time6->Text = time[5];
			score6->Text = score[5].ToString();

		}
		if (score[6] != -1) {

			name7->Text = names[6];
			date7->Text = date[6];
			queen7->Text = queen[6];
			time7->Text = time[6];
			score7->Text = score[6].ToString();

		}
		if (score[7] != -1) {

			name8->Text = names[7];
			date8->Text = date[7];
			queen8->Text = queen[7];
			time8->Text = time[7];
			score8->Text = score[7].ToString();

		}
		if (score[8] != -1) {

			name9->Text = names[8];
			date9->Text = date[8];
			queen9->Text = queen[8];
			time9->Text = time[8];
			score9->Text = score[8].ToString();

		}
		if (score[9] != -1) {

			name10->Text = names[9];
			date10->Text = date[9];
			queen10->Text = queen[9];
			time10->Text = time[9];
			score10->Text = score[9].ToString();

		}


	}

};
}
