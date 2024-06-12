#include "pch.h"

//using namespace GestionPasteleriaClass;

#include "GestionPasteleriaClass.h"

void GestionPasteleriaClass::Producto::agregarReceta(Receta^ receta)
{
	recetas->Add(receta);
   // throw gcnew System::NotImplementedException();
}

void GestionPasteleriaClass::Nodo::agregarHijo(Nodo^ hijo)
{
		hijos->Add(hijo);
	
}

void GestionPasteleriaClass::ArbolGeneralPasteleria::AgregarProducto(String^ nombre, String^ descripcion, double precio, int cantidad)
{
	Producto^ newproducto = gcnew Producto(nombre,descripcion,precio,cantidad);
	Nodo^ nodo = gcnew Nodo(newproducto);
	//raiz->agregarHijo(nodo);

	if (raiz == nullptr) {
		raiz = nodo;
	}
	else {
		raiz->agregarHijo(nodo);
	}
	//throw gcnew System::NotImplementedException();
}

void GestionPasteleriaClass::ArbolGeneralPasteleria::AgregarReceta(String^ nameproducto, String^ nameReceta, List<Ingrediente^>^ ingredientes, String^ pasos)
{
	Nodo^ productoNodo = buscarProductoNodo(raiz,nameproducto);
	if (productoNodo!=nullptr&& productoNodo->producto!=nullptr)
	//throw gcnew System::NotImplementedException();
	{
		//String^ preparacion ;
		//List<Ingrediente^>^ ingredientes = gcnew List<Ingrediente^>();
		Receta^ newreceta = gcnew Receta(nameReceta,pasos,ingredientes);
		Nodo^ recetaNodo = gcnew Nodo(newreceta);
		productoNodo->hijos->Add(recetaNodo);
		//productoNodo->agregarHijo(recetaNodo);
	}
}

GestionPasteleriaClass::Nodo^ GestionPasteleriaClass::ArbolGeneralPasteleria::buscarProductoNodo(Nodo^ nodo, String^ nombreProducto)
{
	//throw gcnew System::NotImplementedException();
	// TODO: Insertar una instrucción "return" aquí

	if (nodo == nullptr) return nullptr;
	if (nodo->producto != nullptr && nodo->producto->_Nombre == nombreProducto) {
		return nodo;
	}
	for each (Nodo ^ hijo in nodo->hijos) {
		Nodo^ resultado = buscarProductoNodo(hijo, nombreProducto);
		if (resultado != nullptr) return resultado;
	}
	return nullptr;
}

GestionPasteleriaClass::Producto^ GestionPasteleriaClass::ArbolGeneralPasteleria::buscarProducto(String^ nombreProducto)
{

	Nodo^ productoNodo = buscarProductoNodo(raiz, nombreProducto);
	if (productoNodo != nullptr ) {
		return productoNodo->producto;
	}
	return nullptr;
	//throw gcnew System::NotImplementedException();
	// TODO: Insertar una instrucción "return" aquí
}

bool GestionPasteleriaClass::ArbolGeneralPasteleria::eliminarProducto(Nodo^ nodo, Nodo^ padre, String^ nombreProducto)
{
	if (nodo == nullptr) return false;

	if (nodo->producto != nullptr && nodo->producto->_Nombre == nombreProducto) {
		if (padre != nullptr) {
			padre->hijos->Remove(nodo);
		}
		else {
			// Si es la raíz, necesitamos manejarla de manera diferente
			if (raiz == nodo) {
				raiz = nullptr;
			}
		}
		return true;
	}

	for each (Nodo ^ hijo in nodo->hijos) {
		if (eliminarProducto(hijo, nodo, nombreProducto)) {
			return true;
		}
	}

	return false;
}

GestionPasteleriaClass::Receta^ GestionPasteleriaClass::ArbolGeneralPasteleria::buscarReceta(String^ nombreProducto,String^ nombreReceta)
{
	Nodo^ productoNodo = buscarProductoNodo(raiz, nombreProducto);
	if (productoNodo != nullptr) {
		for each (Nodo^ hijo in productoNodo->hijos) {
			if (hijo->receta != nullptr && hijo->receta-> nombre == nombreReceta) {
				return hijo->receta;
			}
		}
	}
	return nullptr;
	//throw gcnew System::NotImplementedException();
	// TODO: Insertar una instrucción "return" aquí
}

bool GestionPasteleriaClass::ArbolGeneralPasteleria::eliminarReceta(Nodo^ nodo, String^ nombreProducto, String^ nombreReceta)
{
	if (nodo == nullptr) return false;

	if (nodo->producto != nullptr && nodo->producto->_Nombre == nombreProducto) {
		for (int i = 0; i < nodo->hijos->Count; i++) {
			Nodo^ hijo = nodo->hijos[i];
			if (hijo->receta != nullptr && hijo->receta->nombre == nombreReceta) {
				nodo->hijos->RemoveAt(i);
				return true;
			}
		}
	}

	for each (Nodo ^ hijo in nodo->hijos) {
		if (eliminarReceta(hijo, nombreProducto, nombreReceta)) {
			return true;
		}
	}

	return false;
}
