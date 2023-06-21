#ifndef USUARIO_H
#define USUARIO_H

#include "usuario.h"
#include "bitacora.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cstdlib>
#include <conio.h>
#include <iomanip>
#include <string>
#include <vector>
#include <chrono>
#define ENTER 13
#define BACKSPACE 8
#define INTENTOS 3

using namespace std;
class usuario
{
	private:
		string IDAdministrador,nameAdministrador,passwordAdministrador;
		string ID,name,password, jornada, correo;
		int telefono;
	public:
		void menuAdministrador();
		void insertarAdministrador();
		void desplegarAdministrador();
		void buscarAdministrador();
		void menuAlumno();
		void insertarAlumno();
		void desplegarAlumno();
		void modificarAlumno();
		void buscarAlumno();
		void borrarAlumno();
		void desplegarAplicaciones();
		void desplegarAdministracion();
		void desplegarContabilidad();
        void desplegarRecepcion();
        void desplegarVentas();
		void menuDepartamentos();
};

#endif // USUARIO_H
