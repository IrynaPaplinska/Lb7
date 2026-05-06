#pragma once
const int n = 3; // Розмір матриці 
int mat[n][n];   // Оголошення двовимірного масиву
namespace Lb7 {

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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(73, 30);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(913, 73);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(50, 158);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(431, 150);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Column1";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Column2";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Column3";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column4,
					this->Column5, this->Column6
			});
			this->dataGridView2->Location = System::Drawing::Point(570, 158);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(416, 150);
			this->dataGridView2->TabIndex = 2;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellContentClick);
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Column4";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Column5";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Column6";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 125;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(133, 351);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(245, 52);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Заповнити та обчислити";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(616, 354);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(241, 48);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Сортувати непарні стовпці";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(414, 444);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(177, 16);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Сума головної діагоналі: 0";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1036, 510);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Random^ rand = gcnew Random();

		// Очищення та налаштування dataGridView1
		dataGridView1->Columns->Clear();
		dataGridView1->Rows->Clear();
		for (int i = 0; i < n; i++) {
			dataGridView1->Columns->Add(i.ToString(), "C" + i.ToString());
		}
		dataGridView1->Rows->Add(n);

		// Заповнення масиву та вивід у таблицю
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				mat[i][j] = rand->Next(0, 100); // Випадкові числа
				dataGridView1->Rows[i]->Cells[j]->Value = mat[i][j];
			}
		}

		// Обчислення суми головної діагоналі (слід матриці)
		int sum = 0;
		for (int i = 0; i < n; i++) {
			sum += mat[i][i]; // Елементи, де індекс рядка дорівнює індексу стовпця
		}

		// Вивід результату в Label
		label1->Text = "Сума елементів головної діагоналі: " + sum.ToString();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {// Алгоритм сортування бульбашкою для НЕПАРНИХ стовпців за спаданням
	private: System::Void button2_Click(System::Object ^ sender, System::EventArgs ^ e) {
		// 1. Зчитуємо дані з першої таблиці у масив перед сортуванням
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (dataGridView1->Rows[i]->Cells[j]->Value != nullptr) {
					mat[i][j] = System::Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
				}
			}
		}

		for (int j = 1; j < n; j += 2) { // Крок 2, починаючи з індексу 1
			for (int i = 0; i < n - 1; i++) {
				for (int k = i + 1; k < n; k++) {
					if (mat[i][j] < mat[k][j]) { // Сортування за спаданням
						int temp = mat[i][j];
						mat[i][j] = mat[k][j];
						mat[k][j] = temp;
					}
				}
			}
		}

		// 3. Вивід вже відсортованої матриці у dataGridView2
		dataGridView2->Columns->Clear();
		dataGridView2->Rows->Clear();

	
		}

	private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {// Очищення та вивід результату у dataGridView2
		dataGridView2->Columns->Clear();
		dataGridView2->Rows->Clear();
		for (int i = 0; i < n; i++) {
			dataGridView2->Columns->Add(i.ToString(), "C" + i.ToString());
		}
		dataGridView2->Rows->Add(n);

		// Заповнення другої таблиці відсортованими даними
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				dataGridView2->Rows[i]->Cells[j]->Value = mat[i][j];

			}
		}
	}

	};
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
}
