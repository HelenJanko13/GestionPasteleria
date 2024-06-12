#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace GestionPasteleriaClass {
	public ref class Ingrediente
	{
	public:
		property String ^ Nombre;
		String^ cantidad;

		Ingrediente (String^ Nombre, String^ cantidad) {
			this->Nombre = Nombre;
			this->cantidad = cantidad;
		}

		String^ getNombre() {
			return Nombre;
		}
		String^ getCantidad() {
			return cantidad;
		}

		void setNombre(String^ Nombre) {
			this->Nombre = Nombre;
		}
		void setCantidad(String^ cantidad) {
			this->cantidad = cantidad;
		}

		// TODO: Agregue aquí los métodos de esta clase.
	};

	public ref class Receta
	{
	public:
		String^ nombre;
		//String^ descripcion;
		String^ PasosPreparacion;
		List<Ingrediente^>^ ingredientes;

		Receta(String^ nombre, String^ preparacion, List<Ingrediente^>^ ingredientes) {
			this->nombre = nombre;
			this->PasosPreparacion = preparacion;
			this->ingredientes = ingredientes;
		}
	};

	public ref class Producto 	{
	public:
		String^ _Nombre;
		String^ descripcion;
		double precio;
		int CantDisponible;
		//List<Ingrediente^>^ ingredientes;
		List<Receta^>^ recetas;

		List<Receta^>^ getRecetas() {
			return recetas;
		}

		Producto(String^ _nombre, String^ descripcion, double precio,int cantDisponible) {
			this->_Nombre = _nombre;
			this->descripcion = descripcion;
			this->precio = precio;
			this->CantDisponible = cantDisponible;
			//this->recetas = recetas;
		}
		void agregarReceta(Receta^ receta);
	};

	public  ref class Nodo {

	public:
		Producto^ producto;
		Receta^ receta;
		List<Nodo^>^ hijos;

		Nodo(Producto^ producto) {
			this->producto = producto;
			this->receta = nullptr;
			this->hijos = gcnew List<Nodo^>();
		}

		Nodo(Receta^ receta) {
			this->producto = nullptr;
			this->receta = receta;
			this->hijos = gcnew List<Nodo^>();
		}

		void agregarHijo(Nodo^ hijo);
	};

	public ref class ArbolGeneralPasteleria {

		Nodo^ raiz;
	public:

		void recorrer(Nodo^ nodo, List<Producto^>^ productos) {
			if (nodo == nullptr) {
				return;
			}

			// Agregar el producto del nodo actual a la lista
			productos->Add(nodo->producto);

			// Recorrer los hijos del nodo actual
			for each (Nodo ^ hijo in nodo->hijos) {
				recorrer(hijo, productos);
			}
		}

		List<Producto^>^ productos = gcnew List<Producto^>();
		List<Producto^>^ getProductos() {

			recorrer(raiz, productos);
			// Ordenar los productos por su nombre en orden alfabético
			/*productos->Sort(gcnew Comparison<Producto^>([](Producto^ a, Producto^ b) {
				return String::Compare(a->_Nombre, b->_Nombre);
				}));*/
			return productos;
		}

		ArbolGeneralPasteleria() {
			raiz = nullptr;
		}
		void AgregarProducto(String^ nombre, String^ descripcion, double precio, int cantidad);
		
		void AgregarReceta(String^nameproducto, String^ nameReceta, List<Ingrediente^>^ ingredientes, String^ pasos);
		Nodo^ buscarProductoNodo(Nodo^ nodo, String^ nombreProducto);
		Producto^ buscarProducto(String^ nombreProducto);
		bool eliminarProducto(Nodo^ nodo, Nodo^ padre, String^ nombreProducto);
		Receta^ buscarReceta(String^ nombreProducto,String^ nombreReceta);
		bool eliminarReceta(Nodo^ nodo, String^ nombreProducto, String^ nombreReceta);

		bool EliminarReceta(String^ nombreProducto, String^ nombreReceta) {
			return eliminarReceta(raiz, nombreProducto, nombreReceta);
		}

		bool EliminarProducto(String^ nombreProducto) {
			return eliminarProducto(raiz, nullptr, nombreProducto);
		}
			
		
		
	};
}
