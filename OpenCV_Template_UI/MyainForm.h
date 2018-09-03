#pragma once
#include <opencv2/core/core.hpp>
#include <opencv2\highgui\highgui.hpp>
#include "IntensityTransForm.h"

namespace OpenCVTemplateUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Resumen de MyainForm
	/// </summary>
	public ref class MyainForm : public System::Windows::Forms::Form
	{
		public:
			MyainForm(void)
			{
				InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
			}

		protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
			~MyainForm()
			{
				if (components)
				{
					delete components;
				}
			}
		private: System::Windows::Forms::MenuStrip^  menuStrip1;
				 
		protected:
		private: System::Windows::Forms::ToolStripMenuItem^  negativeTransformationToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^  negativeToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^  gammaToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^  logaritmicToolStripMenuItem;
				 IntensityTransForm^ h;





		private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  fig307ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  fig308ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  fig309ToolStripMenuItem;

		protected:

		protected:

		private:
		///		<summary>
		/// Variable del dise�ador necesaria.
		///		</summary>
				System::ComponentModel::Container ^components;

		#pragma region Windows Form Designer generated code
		///		<summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		///		</summary>
				void InitializeComponent(void)
		{
					this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
					this->negativeTransformationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
					this->negativeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
					this->gammaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
					this->fig307ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
					this->fig308ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
					this->fig309ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
					this->logaritmicToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
					this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
					this->menuStrip1->SuspendLayout();
					this->SuspendLayout();
					// 
					// menuStrip1
					// 
					this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
						this->negativeTransformationToolStripMenuItem,
							this->aboutToolStripMenuItem
					});
					this->menuStrip1->Location = System::Drawing::Point(0, 0);
					this->menuStrip1->Name = L"menuStrip1";
					this->menuStrip1->Size = System::Drawing::Size(1385, 24);
					this->menuStrip1->TabIndex = 0;
					this->menuStrip1->Text = L"menuStrip1";
					// 
					// negativeTransformationToolStripMenuItem
					// 
					this->negativeTransformationToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
						this->negativeToolStripMenuItem,
							this->gammaToolStripMenuItem, this->logaritmicToolStripMenuItem
					});
					this->negativeTransformationToolStripMenuItem->Name = L"negativeTransformationToolStripMenuItem";
					this->negativeTransformationToolStripMenuItem->Size = System::Drawing::Size(148, 20);
					this->negativeTransformationToolStripMenuItem->Text = L"Intensity Transformation";
					this->negativeTransformationToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyainForm::negativeTransformationToolStripMenuItem_Click);
					// 
					// negativeToolStripMenuItem
					// 
					this->negativeToolStripMenuItem->Name = L"negativeToolStripMenuItem";
					this->negativeToolStripMenuItem->Size = System::Drawing::Size(180, 22);
					this->negativeToolStripMenuItem->Text = L"Negative";
					this->negativeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyainForm::negativeToolStripMenuItem_Click);
					// 
					// gammaToolStripMenuItem
					// 
					this->gammaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
						this->fig307ToolStripMenuItem,
							this->fig308ToolStripMenuItem, this->fig309ToolStripMenuItem
					});
					this->gammaToolStripMenuItem->Name = L"gammaToolStripMenuItem";
					this->gammaToolStripMenuItem->Size = System::Drawing::Size(180, 22);
					this->gammaToolStripMenuItem->Text = L"Gamma";
					this->gammaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyainForm::gammaToolStripMenuItem_Click);
					// 
					// fig307ToolStripMenuItem
					// 
					this->fig307ToolStripMenuItem->Name = L"fig307ToolStripMenuItem";
					this->fig307ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
					this->fig307ToolStripMenuItem->Text = L"Fig_3_07";
					this->fig307ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyainForm::fig307ToolStripMenuItem_Click);
					// 
					// fig308ToolStripMenuItem
					// 
					this->fig308ToolStripMenuItem->Name = L"fig308ToolStripMenuItem";
					this->fig308ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
					this->fig308ToolStripMenuItem->Text = L"Fig_3_08";
					this->fig308ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyainForm::fig308ToolStripMenuItem_Click);
					// 
					// fig309ToolStripMenuItem
					// 
					this->fig309ToolStripMenuItem->Name = L"fig309ToolStripMenuItem";
					this->fig309ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
					this->fig309ToolStripMenuItem->Text = L"Fig_3_09";
					this->fig309ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyainForm::fig309ToolStripMenuItem_Click);
					// 
					// logaritmicToolStripMenuItem
					// 
					this->logaritmicToolStripMenuItem->Name = L"logaritmicToolStripMenuItem";
					this->logaritmicToolStripMenuItem->Size = System::Drawing::Size(180, 22);
					this->logaritmicToolStripMenuItem->Text = L"Logaritmic";
					this->logaritmicToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyainForm::logaritmicToolStripMenuItem_Click);
					// 
					// aboutToolStripMenuItem
					// 
					this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
					this->aboutToolStripMenuItem->Size = System::Drawing::Size(52, 20);
					this->aboutToolStripMenuItem->Text = L"About";
					// 
					// MyainForm
					// 
					this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
					this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
					this->ClientSize = System::Drawing::Size(1385, 674);
					this->Controls->Add(this->menuStrip1);
					this->IsMdiContainer = true;
					this->KeyPreview = true;
					this->MainMenuStrip = this->menuStrip1;
					this->Name = L"MyainForm";
					this->Text = L"Digital Image Processing";
					this->Load += gcnew System::EventHandler(this, &MyainForm::MyainForm_Load);
					this->menuStrip1->ResumeLayout(false);
					this->menuStrip1->PerformLayout();
					this->ResumeLayout(false);
					this->PerformLayout();

				}
		#pragma endregion
		private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
		{

		}
		private: System::Void MyainForm_Load(System::Object^  sender, System::EventArgs^  e) 
		{

		}
		private: System::Void tableLayoutPanel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) 
		{

		}
		private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) 
		{

		}
		private: System::Void negativeTransformationToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		{

		}
		private: System::Void negativeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
		{
			selectTransform(1);	
		
		}
		private: System::Void gammaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			
		}
		private: System::Void logaritmicToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			selectTransform(3);
		}
		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		{
	
		}

		private: System::Void selectTransform(int caso)
		{
			for each(Form^ c in MdiChildren)
			{
				c->Close();
			}
			IntensityTransForm^ h =gcnew IntensityTransForm(caso);
			h->MdiParent = this;
			h->MaximizeBox = true;
			h->Show();
			h->Activate();
				
			
			
		}
				 
		
private: System::Void fig308ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	selectTransform(2);
}
private: System::Void fig307ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	selectTransform(4);
}
private: System::Void fig309ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	selectTransform(5);
}
};
}
