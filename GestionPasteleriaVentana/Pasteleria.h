#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace GestionPasteleriaClass;

namespace GestionPasteleriaVentana {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Pasteleria
	/// </summary>
	public ref class Pasteleria : public System::Windows::Forms::Form
	{
	public:  
		ArbolGeneralPasteleria^ pasteleria;
	private: System::Windows::Forms::Button^ buttonAddIngrediente;
	public:
		List<Ingrediente^>^ listaingredientes;
	public:
		Pasteleria(void)
		{
			InitializeComponent();
			//
			pasteleria = gcnew ArbolGeneralPasteleria();
			listaingredientes = gcnew List<Ingrediente^>();
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Pasteleria()
		{
			if (components)
			{
				delete components;
			}
		}

	private:

		//groupbox
		System::Windows::Forms::GroupBox^ groupBox1;
		//labels
		System::Windows::Forms::Label^ label3;
		System::Windows::Forms::Label^ lblNombreProducto;
		System::Windows::Forms::Label^ lblDescripcionProducto;
		System::Windows::Forms::Label^ lblPrecioProducto;
		System::Windows::Forms::Label^ lblCantidadProducto;
	
		//Botones
		System::Windows::Forms::Button^ btnAgregarProducto;
		System::Windows::Forms::Button^ btnAgregarReceta;
		System::Windows::Forms::Button^ btnEliminarProducto;
		System::Windows::Forms::Button^ btnEliminarReceta;
		//Listas
	
		
		// Controles de interfaz
		System::Windows::Forms::TextBox^ txtNombreProducto;
		System::Windows::Forms::TextBox^ txtDescripcionProducto;
		System::Windows::Forms::TextBox^ txtPrecioProducto;
		System::Windows::Forms::TextBox^ txtCantidadProducto;
		System::Windows::Forms::TextBox^ txtNombreReceta;
	
	private: System::Windows::Forms::Label^ labelIngredientes;

	private: System::Windows::Forms::TextBox^ textBoxnameproducto2;
	private: System::Windows::Forms::TextBox^ textBoxIgredientes;

	private: System::Windows::Forms::Label^ labelNombreProducto6;
	private: System::Windows::Forms::Label^ labelPreparacion;


	private: System::Windows::Forms::Label^ labelNombreReceta;

	private: System::Windows::Forms::TextBox^ textBoxNombreReceta;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBoxPreparacion;

	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox9;
//	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ListBox^ listPasteleria;
	private: System::Windows::Forms::ListBox^ listRecetasProducto;
	private: System::Windows::Forms::Button^ buttonMostrarProductos;
	private: System::Windows::Forms::TextBox^ textBoxmostrarproducto;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttonMostrarRecetas;
    private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ buttoncancelar;






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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnAgregarProducto = (gcnew System::Windows::Forms::Button());
			this->lblNombreProducto = (gcnew System::Windows::Forms::Label());
			this->lblDescripcionProducto = (gcnew System::Windows::Forms::Label());
			this->lblPrecioProducto = (gcnew System::Windows::Forms::Label());
			this->lblCantidadProducto = (gcnew System::Windows::Forms::Label());
			this->txtNombreProducto = (gcnew System::Windows::Forms::TextBox());
			this->txtDescripcionProducto = (gcnew System::Windows::Forms::TextBox());
			this->txtPrecioProducto = (gcnew System::Windows::Forms::TextBox());
			this->txtCantidadProducto = (gcnew System::Windows::Forms::TextBox());
			this->btnEliminarProducto = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonAddIngrediente = (gcnew System::Windows::Forms::Button());
			this->labelNombreProducto6 = (gcnew System::Windows::Forms::Label());
			this->labelPreparacion = (gcnew System::Windows::Forms::Label());
			this->labelIngredientes = (gcnew System::Windows::Forms::Label());
			this->labelNombreReceta = (gcnew System::Windows::Forms::Label());
			this->textBoxnameproducto2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxIgredientes = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNombreReceta = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPreparacion = (gcnew System::Windows::Forms::TextBox());
			this->btnAgregarReceta = (gcnew System::Windows::Forms::Button());
			this->btnEliminarReceta = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtNombreReceta = (gcnew System::Windows::Forms::TextBox());
			this->listPasteleria = (gcnew System::Windows::Forms::ListBox());
			this->listRecetasProducto = (gcnew System::Windows::Forms::ListBox());
			this->buttonMostrarProductos = (gcnew System::Windows::Forms::Button());
			this->textBoxmostrarproducto = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonMostrarRecetas = (gcnew System::Windows::Forms::Button());
			this->buttoncancelar = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnAgregarProducto);
			this->groupBox1->Controls->Add(this->lblNombreProducto);
			this->groupBox1->Controls->Add(this->lblDescripcionProducto);
			this->groupBox1->Controls->Add(this->lblPrecioProducto);
			this->groupBox1->Controls->Add(this->lblCantidadProducto);
			this->groupBox1->Controls->Add(this->txtNombreProducto);
			this->groupBox1->Controls->Add(this->txtDescripcionProducto);
			this->groupBox1->Controls->Add(this->txtPrecioProducto);
			this->groupBox1->Controls->Add(this->txtCantidadProducto);
			this->groupBox1->Controls->Add(this->btnEliminarProducto);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(18, 35);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(335, 323);
			this->groupBox1->TabIndex = 41;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Producto";
			// 
			// btnAgregarProducto
			// 
			this->btnAgregarProducto->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAgregarProducto->Location = System::Drawing::Point(99, 281);
			this->btnAgregarProducto->Name = L"btnAgregarProducto";
			this->btnAgregarProducto->Size = System::Drawing::Size(86, 26);
			this->btnAgregarProducto->TabIndex = 40;
			this->btnAgregarProducto->Text = L"Agregar";
			this->btnAgregarProducto->UseVisualStyleBackColor = true;
			this->btnAgregarProducto->Click += gcnew System::EventHandler(this, &Pasteleria::btnAgregarProducto_Click);
			// 
			// lblNombreProducto
			// 
			this->lblNombreProducto->AutoSize = true;
			this->lblNombreProducto->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNombreProducto->Location = System::Drawing::Point(12, 25);
			this->lblNombreProducto->Name = L"lblNombreProducto";
			this->lblNombreProducto->Size = System::Drawing::Size(62, 19);
			this->lblNombreProducto->TabIndex = 0;
			this->lblNombreProducto->Text = L"Nombre: ";
			// 
			// lblDescripcionProducto
			// 
			this->lblDescripcionProducto->AutoSize = true;
			this->lblDescripcionProducto->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 9.749999F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblDescripcionProducto->Location = System::Drawing::Point(13, 156);
			this->lblDescripcionProducto->Name = L"lblDescripcionProducto";
			this->lblDescripcionProducto->Size = System::Drawing::Size(82, 19);
			this->lblDescripcionProducto->TabIndex = 3;
			this->lblDescripcionProducto->Text = L"Descripcion:";
			// 
			// lblPrecioProducto
			// 
			this->lblPrecioProducto->AutoSize = true;
			this->lblPrecioProducto->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPrecioProducto->Location = System::Drawing::Point(12, 113);
			this->lblPrecioProducto->Name = L"lblPrecioProducto";
			this->lblPrecioProducto->Size = System::Drawing::Size(49, 19);
			this->lblPrecioProducto->TabIndex = 3;
			this->lblPrecioProducto->Text = L"Precio:";
			// 
			// lblCantidadProducto
			// 
			this->lblCantidadProducto->AutoSize = true;
			this->lblCantidadProducto->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCantidadProducto->Location = System::Drawing::Point(12, 71);
			this->lblCantidadProducto->Name = L"lblCantidadProducto";
			this->lblCantidadProducto->Size = System::Drawing::Size(66, 19);
			this->lblCantidadProducto->TabIndex = 4;
			this->lblCantidadProducto->Text = L"Cantidad:";
			// 
			// txtNombreProducto
			// 
			this->txtNombreProducto->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->txtNombreProducto->ForeColor = System::Drawing::SystemColors::WindowText;
			this->txtNombreProducto->Location = System::Drawing::Point(99, 26);
			this->txtNombreProducto->MaxLength = 10;
			this->txtNombreProducto->Multiline = true;
			this->txtNombreProducto->Name = L"txtNombreProducto";
			this->txtNombreProducto->Size = System::Drawing::Size(119, 25);
			this->txtNombreProducto->TabIndex = 16;
			this->txtNombreProducto->TextChanged += gcnew System::EventHandler(this, &Pasteleria::txtNombreProducto_TextChanged);
			// 
			// txtDescripcionProducto
			// 
			this->txtDescripcionProducto->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->txtDescripcionProducto->ForeColor = System::Drawing::SystemColors::WindowText;
			this->txtDescripcionProducto->Location = System::Drawing::Point(98, 156);
			this->txtDescripcionProducto->Multiline = true;
			this->txtDescripcionProducto->Name = L"txtDescripcionProducto";
			this->txtDescripcionProducto->Size = System::Drawing::Size(185, 102);
			this->txtDescripcionProducto->TabIndex = 18;
			this->txtDescripcionProducto->TextChanged += gcnew System::EventHandler(this, &Pasteleria::txtDescripcionProducto_TextChanged);
			// 
			// txtPrecioProducto
			// 
			this->txtPrecioProducto->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->txtPrecioProducto->ForeColor = System::Drawing::SystemColors::WindowText;
			this->txtPrecioProducto->Location = System::Drawing::Point(99, 111);
			this->txtPrecioProducto->Multiline = true;
			this->txtPrecioProducto->Name = L"txtPrecioProducto";
			this->txtPrecioProducto->Size = System::Drawing::Size(119, 25);
			this->txtPrecioProducto->TabIndex = 19;
			this->txtPrecioProducto->TextChanged += gcnew System::EventHandler(this, &Pasteleria::txtPrecioProducto_TextChanged);
			// 
			// txtCantidadProducto
			// 
			this->txtCantidadProducto->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->txtCantidadProducto->ForeColor = System::Drawing::SystemColors::WindowText;
			this->txtCantidadProducto->Location = System::Drawing::Point(99, 69);
			this->txtCantidadProducto->MaxLength = 50;
			this->txtCantidadProducto->Multiline = true;
			this->txtCantidadProducto->Name = L"txtCantidadProducto";
			this->txtCantidadProducto->Size = System::Drawing::Size(119, 25);
			this->txtCantidadProducto->TabIndex = 20;
			this->txtCantidadProducto->TextChanged += gcnew System::EventHandler(this, &Pasteleria::txtCantidadProducto_TextChanged);
			// 
			// btnEliminarProducto
			// 
			this->btnEliminarProducto->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEliminarProducto->Location = System::Drawing::Point(199, 281);
			this->btnEliminarProducto->Name = L"btnEliminarProducto";
			this->btnEliminarProducto->Size = System::Drawing::Size(85, 26);
			this->btnEliminarProducto->TabIndex = 40;
			this->btnEliminarProducto->Text = L"Eliminar";
			this->btnEliminarProducto->UseVisualStyleBackColor = true;
			this->btnEliminarProducto->Click += gcnew System::EventHandler(this, &Pasteleria::btnEliminarProducto_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->buttonAddIngrediente);
			this->groupBox2->Controls->Add(this->labelNombreProducto6);
			this->groupBox2->Controls->Add(this->labelPreparacion);
			this->groupBox2->Controls->Add(this->labelIngredientes);
			this->groupBox2->Controls->Add(this->labelNombreReceta);
			this->groupBox2->Controls->Add(this->textBoxnameproducto2);
			this->groupBox2->Controls->Add(this->textBoxIgredientes);
			this->groupBox2->Controls->Add(this->textBoxNombreReceta);
			this->groupBox2->Controls->Add(this->textBoxPreparacion);
			this->groupBox2->Controls->Add(this->btnAgregarReceta);
			this->groupBox2->Controls->Add(this->btnEliminarReceta);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(444, 35);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(368, 323);
			this->groupBox2->TabIndex = 59;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Receta";
			// 
			// buttonAddIngrediente
			// 
			this->buttonAddIngrediente->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAddIngrediente->Location = System::Drawing::Point(276, 114);
			this->buttonAddIngrediente->Name = L"buttonAddIngrediente";
			this->buttonAddIngrediente->Size = System::Drawing::Size(86, 26);
			this->buttonAddIngrediente->TabIndex = 41;
			this->buttonAddIngrediente->Text = L"Agregar";
			this->buttonAddIngrediente->UseVisualStyleBackColor = true;
			this->buttonAddIngrediente->Click += gcnew System::EventHandler(this, &Pasteleria::buttonAddIngrediente_Click);
			// 
			// labelNombreProducto6
			// 
			this->labelNombreProducto6->AutoSize = true;
			this->labelNombreProducto6->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNombreProducto6->Location = System::Drawing::Point(12, 25);
			this->labelNombreProducto6->Name = L"labelNombreProducto6";
			this->labelNombreProducto6->Size = System::Drawing::Size(117, 19);
			this->labelNombreProducto6->TabIndex = 0;
			this->labelNombreProducto6->Text = L"Nombre Producto: ";
			// 
			// labelPreparacion
			// 
			this->labelPreparacion->AutoSize = true;
			this->labelPreparacion->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPreparacion->Location = System::Drawing::Point(13, 156);
			this->labelPreparacion->Name = L"labelPreparacion";
			this->labelPreparacion->Size = System::Drawing::Size(120, 19);
			this->labelPreparacion->TabIndex = 3;
			this->labelPreparacion->Text = L"Pasos Preparacion:";
			// 
			// labelIngredientes
			// 
			this->labelIngredientes->AutoSize = true;
			this->labelIngredientes->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelIngredientes->Location = System::Drawing::Point(12, 113);
			this->labelIngredientes->Name = L"labelIngredientes";
			this->labelIngredientes->Size = System::Drawing::Size(87, 19);
			this->labelIngredientes->TabIndex = 3;
			this->labelIngredientes->Text = L"Ingredientes:";
			// 
			// labelNombreReceta
			// 
			this->labelNombreReceta->AutoSize = true;
			this->labelNombreReceta->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNombreReceta->Location = System::Drawing::Point(12, 71);
			this->labelNombreReceta->Name = L"labelNombreReceta";
			this->labelNombreReceta->Size = System::Drawing::Size(59, 19);
			this->labelNombreReceta->TabIndex = 4;
			this->labelNombreReceta->Text = L"Nombre:";
			// 
			// textBoxnameproducto2
			// 
			this->textBoxnameproducto2->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBoxnameproducto2->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBoxnameproducto2->Location = System::Drawing::Point(135, 27);
			this->textBoxnameproducto2->MaxLength = 10;
			this->textBoxnameproducto2->Multiline = true;
			this->textBoxnameproducto2->Name = L"textBoxnameproducto2";
			this->textBoxnameproducto2->Size = System::Drawing::Size(119, 25);
			this->textBoxnameproducto2->TabIndex = 16;
			this->textBoxnameproducto2->TextChanged += gcnew System::EventHandler(this, &Pasteleria::textBox2_TextChanged);
			// 
			// textBoxIgredientes
			// 
			this->textBoxIgredientes->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBoxIgredientes->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBoxIgredientes->Location = System::Drawing::Point(135, 115);
			this->textBoxIgredientes->Multiline = true;
			this->textBoxIgredientes->Name = L"textBoxIgredientes";
			this->textBoxIgredientes->Size = System::Drawing::Size(119, 25);
			this->textBoxIgredientes->TabIndex = 18;
			// 
			// textBoxNombreReceta
			// 
			this->textBoxNombreReceta->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBoxNombreReceta->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBoxNombreReceta->Location = System::Drawing::Point(135, 71);
			this->textBoxNombreReceta->Multiline = true;
			this->textBoxNombreReceta->Name = L"textBoxNombreReceta";
			this->textBoxNombreReceta->Size = System::Drawing::Size(119, 25);
			this->textBoxNombreReceta->TabIndex = 19;
			// 
			// textBoxPreparacion
			// 
			this->textBoxPreparacion->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBoxPreparacion->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBoxPreparacion->Location = System::Drawing::Point(139, 156);
			this->textBoxPreparacion->MaxLength = 50;
			this->textBoxPreparacion->Multiline = true;
			this->textBoxPreparacion->Name = L"textBoxPreparacion";
			this->textBoxPreparacion->Size = System::Drawing::Size(182, 102);
			this->textBoxPreparacion->TabIndex = 20;
			// 
			// btnAgregarReceta
			// 
			this->btnAgregarReceta->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAgregarReceta->Location = System::Drawing::Point(135, 281);
			this->btnAgregarReceta->Name = L"btnAgregarReceta";
			this->btnAgregarReceta->Size = System::Drawing::Size(86, 26);
			this->btnAgregarReceta->TabIndex = 40;
			this->btnAgregarReceta->Text = L"Agregar";
			this->btnAgregarReceta->UseVisualStyleBackColor = true;
			this->btnAgregarReceta->Click += gcnew System::EventHandler(this, &Pasteleria::btnAgregarReceta_Click);
			// 
			// btnEliminarReceta
			// 
			this->btnEliminarReceta->Location = System::Drawing::Point(236, 281);
			this->btnEliminarReceta->Name = L"btnEliminarReceta";
			this->btnEliminarReceta->Size = System::Drawing::Size(85, 26);
			this->btnEliminarReceta->TabIndex = 40;
			this->btnEliminarReceta->Text = L"Eliminar";
			this->btnEliminarReceta->UseVisualStyleBackColor = true;
			this->btnEliminarReceta->Click += gcnew System::EventHandler(this, &Pasteleria::btnEliminarReceta_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(308, -1);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(207, 28);
			this->label3->TabIndex = 2;
			this->label3->Text = L"GESTION PASTELERIA";
			// 
			// txtNombreReceta
			// 
			this->txtNombreReceta->Location = System::Drawing::Point(0, 0);
			this->txtNombreReceta->Name = L"txtNombreReceta";
			this->txtNombreReceta->Size = System::Drawing::Size(100, 20);
			this->txtNombreReceta->TabIndex = 0;
			// 
			// listPasteleria
			// 
			this->listPasteleria->BackColor = System::Drawing::Color::GhostWhite;
			this->listPasteleria->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listPasteleria->FormattingEnabled = true;
			this->listPasteleria->ItemHeight = 18;
			this->listPasteleria->Location = System::Drawing::Point(29, 374);
			this->listPasteleria->Name = L"listPasteleria";
			this->listPasteleria->Size = System::Drawing::Size(272, 166);
			this->listPasteleria->TabIndex = 60;
			this->listPasteleria->SelectedIndexChanged += gcnew System::EventHandler(this, &Pasteleria::listPasteleria_SelectedIndexChanged);
			// 
			// listRecetasProducto
			// 
			this->listRecetasProducto->BackColor = System::Drawing::Color::GhostWhite;
			this->listRecetasProducto->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listRecetasProducto->FormattingEnabled = true;
			this->listRecetasProducto->ItemHeight = 17;
			this->listRecetasProducto->Location = System::Drawing::Point(324, 374);
			this->listRecetasProducto->Name = L"listRecetasProducto";
			this->listRecetasProducto->Size = System::Drawing::Size(275, 157);
			this->listRecetasProducto->TabIndex = 61;
			// 
			// buttonMostrarProductos
			// 
			this->buttonMostrarProductos->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonMostrarProductos->Location = System::Drawing::Point(664, 364);
			this->buttonMostrarProductos->Name = L"buttonMostrarProductos";
			this->buttonMostrarProductos->Size = System::Drawing::Size(118, 30);
			this->buttonMostrarProductos->TabIndex = 41;
			this->buttonMostrarProductos->Text = L"Mostrar Productos";
			this->buttonMostrarProductos->UseVisualStyleBackColor = true;
			this->buttonMostrarProductos->Click += gcnew System::EventHandler(this, &Pasteleria::buttonMostrarProductos_Click);
			// 
			// textBoxmostrarproducto
			// 
			this->textBoxmostrarproducto->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBoxmostrarproducto->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBoxmostrarproducto->Location = System::Drawing::Point(664, 446);
			this->textBoxmostrarproducto->MaxLength = 10;
			this->textBoxmostrarproducto->Multiline = true;
			this->textBoxmostrarproducto->Name = L"textBoxmostrarproducto";
			this->textBoxmostrarproducto->Size = System::Drawing::Size(119, 25);
			this->textBoxmostrarproducto->TabIndex = 41;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(660, 410);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(117, 19);
			this->label1->TabIndex = 41;
			this->label1->Text = L"Nombre Producto: ";
			// 
			// buttonMostrarRecetas
			// 
			this->buttonMostrarRecetas->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonMostrarRecetas->Location = System::Drawing::Point(662, 488);
			this->buttonMostrarRecetas->Name = L"buttonMostrarRecetas";
			this->buttonMostrarRecetas->Size = System::Drawing::Size(115, 30);
			this->buttonMostrarRecetas->TabIndex = 62;
			this->buttonMostrarRecetas->Text = L"Mostrar Recetas";
			this->buttonMostrarRecetas->UseVisualStyleBackColor = true;
			this->buttonMostrarRecetas->Click += gcnew System::EventHandler(this, &Pasteleria::buttonMostrarRecetas_Click);
			// 
			// buttoncancelar
			// 
			this->buttoncancelar->BackColor = System::Drawing::Color::IndianRed;
			this->buttoncancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttoncancelar->Location = System::Drawing::Point(710, 533);
			this->buttoncancelar->Name = L"buttoncancelar";
			this->buttoncancelar->Size = System::Drawing::Size(96, 30);
			this->buttoncancelar->TabIndex = 46;
			this->buttoncancelar->Text = L"Cancelar";
			this->buttoncancelar->UseVisualStyleBackColor = false;
			this->buttoncancelar->Click += gcnew System::EventHandler(this, &Pasteleria::buttoncancelar_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Controls->Add(this->buttonMostrarProductos);
			this->groupBox3->Controls->Add(this->buttonMostrarRecetas);
			this->groupBox3->Controls->Add(this->buttoncancelar);
			this->groupBox3->Controls->Add(this->textBoxmostrarproducto);
			this->groupBox3->Controls->Add(this->listRecetasProducto);
			this->groupBox3->Controls->Add(this->listPasteleria);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->groupBox2);
			this->groupBox3->Controls->Add(this->groupBox1);
			this->groupBox3->Location = System::Drawing::Point(11, 10);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(828, 578);
			this->groupBox3->TabIndex = 63;
			this->groupBox3->TabStop = false;
			// 
			// Pasteleria
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(851, 600);
			this->Controls->Add(this->groupBox3);
			this->Name = L"Pasteleria";
			this->Text = L"Pasteleria";
			this->Load += gcnew System::EventHandler(this, &Pasteleria::Pasteleria_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Pasteleria_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
    private: System::Void listPasteleria_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
     }

   //Agregar Producto
	private: System::Void btnAgregarProducto_Click(System::Object^ sender, System::EventArgs^ e) {

		//String^ nombre = txtNombreProducto->Text;
			// Obtener el nombre del producto del cuadro de texto
		String^ nombreProducto = txtNombreProducto->Text;
		String^ descripcion = txtDescripcionProducto->Text;
		double precio = Convert::ToDouble(txtPrecioProducto->Text);
		int cantidad = Convert::ToInt32(txtCantidadProducto->Text);


		Producto^ newproducto = gcnew Producto(nombreProducto, descripcion, precio, cantidad);
		//pasteleria->AgregarProducto(nombre, descripcion, precio, cantidad);

	

		// Crear una nueva lista de recetas para este producto
		List<Receta^>^ recetasProducto = gcnew List<Receta^>();
		//recetasProducto->Add(descripcion,precio,cantidad);

		// Agregar el producto a la pasteleria
		pasteleria->AgregarProducto(newproducto);

		// Agregar el producto a la lista de productos en la interfaz de usuario
		//listProductos->Items->Add(nombreProducto);

		MessageBox::Show("Producto Agregado");

		txtCantidadProducto->Clear();
		txtDescripcionProducto->Clear();
		txtNombreProducto->Clear();
		txtPrecioProducto->Clear();

		

	}

	//Agregar Ingrediente
	private: System::Void buttonAddIngrediente_Click(System::Object^ sender, System::EventArgs^ e) {

		// Buscar el producto
		//Producto^ producto = pasteleria->buscarProducto(nombreProducto);
		if (!String::IsNullOrEmpty(textBoxIgredientes->Text)) {

			String^ nombreProducto = txtNombreProducto->Text;
			String^ nombreReceta = txtNombreReceta->Text;
			Ingrediente^ ingrediente = gcnew Ingrediente(textBoxIgredientes->Text,"");
			pasteleria->agregarIngredienteAReceta(nombreProducto, nombreReceta, ingrediente);
			listaingredientes->Add(ingrediente);
		}
			

		textBoxIgredientes->Clear();
		MessageBox::Show("Ingrediente Agregado");
	}

    //Agregar Receta
	private: System::Void btnAgregarReceta_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ nombreProducto = textBoxnameproducto2->Text;
		String^ nombreReceta = textBoxNombreReceta->Text;
	
		String^ preparacion = textBoxPreparacion->Text;
	
		pasteleria->AgregarReceta(nombreProducto,nombreReceta,listaingredientes,preparacion);
		listaingredientes->Clear();

		textBoxnameproducto2->Clear();

		textBoxNombreReceta->Clear();
		textBoxIgredientes->Clear();
		textBoxPreparacion->Clear();
		MessageBox::Show("Receta Agregada");
	}

		   //Eliminar Producto
	private: System::Void btnEliminarProducto_Click(System::Object^ sender, System::EventArgs^ e) {

		// Obtener el nombre del producto a eliminar
		String^ nombreProductoEl = txtNombreProducto->Text;

		// Eliminar el producto del árbol
		bool eliminado = pasteleria->EliminarProducto(nombreProductoEl);

		if (eliminado) {
			// Mostrar un mensaje de éxito si se eliminó el producto
			MessageBox::Show("Producto eliminado correctamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);


			
		}
		else {
			// Mostrar un mensaje de error si no se pudo eliminar el producto
			MessageBox::Show("No se encontró el producto especificado.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		


	}
		   
		   //Eliminar Receta
	private: System::Void btnEliminarReceta_Click(System::Object^ sender, System::EventArgs^ e) {

		// Obtener el nombre de la receta a eliminar
		String^ nombreProducto= textBoxnameproducto2->Text;
		String^ nombreReceta = textBoxNombreReceta->Text;

		// Eliminar la receta del árbol
		bool eliminado = pasteleria->EliminarReceta(nombreProducto,nombreReceta);

		if (eliminado) {
			// Mostrar un mensaje de éxito si se eliminó la receta
			MessageBox::Show("Receta eliminada correctamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			// Mostrar un mensaje de error si no se pudo eliminar la receta
			MessageBox::Show("No se encontró la receta especificada.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		
	}
    
	//Mostrar Productos
	private: System::Void buttonMostrarProductos_Click(System::Object^ sender, System::EventArgs^ e) {
		listPasteleria->Items->Clear();
		listRecetasProducto->Items->Clear();
		String^ nombreProducto = textBoxmostrarproducto->Text;
		Producto^ producto = pasteleria->buscarProducto(nombreProducto);

		if (String::IsNullOrEmpty(textBoxmostrarproducto->Text)) {

			// Iterar a través de todos los productos en 'pasteleria'
			for each (Producto ^ producto in pasteleria->getProductos()) {
				if (producto != nullptr) {
					listPasteleria->Items->Add("Nombre: " + producto->_Nombre);
					listPasteleria->Items->Add("Precio: " + producto->precio);
					listPasteleria->Items->Add("Cantidad: " + producto->CantDisponible);
					listPasteleria->Items->Add("Descripcion: " + producto->descripcion);
					//listPasteleria->Items->Add("Recetas: ");
				}
			}

		}
		else if  (textBoxmostrarproducto->Text){
		if (producto != nullptr) {
			listPasteleria->Items->Add("Nombre: " + producto->_Nombre);

			listPasteleria->Items->Add("Precio: " + producto->precio);
			listPasteleria->Items->Add("Cantidad: " + producto->CantDisponible);
			listPasteleria->Items->Add("Descripcion: " + producto->descripcion);
		}
		else {
			MessageBox::Show("No se encontró el producto especificado.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	  }
	}

		   //Mostrar Recetas
	private: System::Void buttonMostrarRecetas_Click(System::Object^ sender, System::EventArgs^ e) {
		listPasteleria->Items->Clear();
		listRecetasProducto->Items->Clear();
		String^ nombreProducto = textBoxmostrarproducto->Text;

		List<Nodo^>^ recetas = pasteleria->obtenerRecetas(nombreProducto);
		Producto^ producto = pasteleria->buscarProducto(nombreProducto);

			if (producto != nullptr) {
				//List<Receta^> recetas = producto->obtenerRecetas;
				listRecetasProducto->Items->Add("Nombre: " + producto->_Nombre);
				//lstRecetas->Items->Add("Descripcion: " + producto->descripcion);
				listRecetasProducto->Items->Add("Recetas: ");
				// Agregar las recetas del producto a la lista de recetas en la interfaz de usuario
				for each (Nodo ^ nodoreceta in recetas) {
					if (nodoreceta != nullptr) {

						Receta^ receta = nodoreceta->receta;
						if (receta != nullptr) {
							listRecetasProducto->Items->Add(receta->nombre);
							listRecetasProducto->Items->Add("Ingredientes: ");
							for each (Ingrediente ^ ingrediente in receta->ingredientes) {
								listRecetasProducto->Items->Add("- " + ingrediente->Nombre);
							}
						}
						
					}
				}
			}
			else {
				MessageBox::Show("No se encontró el producto especificado.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

		//// Buscar el nodo del producto
		//Nodo^ nodoProducto = pasteleria->buscarProductoNodo(pasteleria->raiz, nombreProducto);

		//// Verificar si el nodo del producto existe
		//if (nodoProducto != nullptr)
		//{
		//	// Obtener las recetas del producto
		//	List<Receta^>^ recetas = nodoProducto->producto->getRecetas();

		//	// Iterar a través de las recetas
		//	for each (Receta ^ receta in recetas)
		//	{
		//		// Mostrar el nombre de la receta
		//		Console::WriteLine("Receta: " + receta->nombre);

		//		// Mostrar los ingredientes de la receta
		//		Console::WriteLine("Ingredientes:");
		//		for each (Ingrediente ^ ingrediente in receta->ingredientes)
		//		{
		//			Console::WriteLine("- " + ingrediente->Nombre);
		//		}
		//	}
		//}
		//else
		//{
		//	// Mostrar un mensaje si el producto no existe
		//	Console::WriteLine("El producto especificado no existe.");
		//}
	
	}

	private: System::Void buttoncancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

private: System::Void txtPrecioProducto_TextChanged(System::Object^ sender, System::EventArgs^ e) { //cant
}
private: System::Void txtDescripcionProducto_TextChanged(System::Object^ sender, System::EventArgs^ e) { //precio
}
private: System::Void txtCantidadProducto_TextChanged(System::Object^ sender, System::EventArgs^ e) { //descripcion
}
private: System::Void txtNombreProducto_TextChanged(System::Object^ sender, System::EventArgs^ e) { //nombre
}
};
}
