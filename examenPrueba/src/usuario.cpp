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
string codigo;
bitacora bit;
void usuario::menuAdministrador()
{
    int Opciones;
	char x;
	do
    {
	system("cls");
	cout << "\t\t\t*==============================*" << endl;
	cout << "\t\t\t|   INGRESO DE ADMINISTRADOR   |" << endl;
	cout << "\t\t\t*==============================*" << endl;
	cout << "\t\t\t 1. Ingresar Administrador" << endl;
	cout << "\t\t\t 2. Salir del sistema" << endl;
	cout << "\t\t\t*==============================*" << endl;
	cout << "\t\t\t    Opciones a escoger:[1/2]  " << endl;
	cout << "\t\t\t*==============================*" << endl;
	cout << "\t\t\t    Ingresa una Opcion: ";
    cin >> Opciones;
    switch(Opciones)
    {
    case 0:
        system("cls");
        std::cout << "*===========================================*" << std::endl;
        std::cout << "||    Bienvenido al Programa EASTER EGG    ||" << std::endl;
        std::cout << "*===========================================*" << std::endl;
        std::cout << std::endl;
        std::cout << "    UUUU   UUUU   MMMM     MMM   GGGGGG   " << std::endl;
        std::cout << "    UUUU   UUUU   MMMMM   MMMM  GGGGGGGG  " << std::endl;
        std::cout << "    UUUU   UUUU   MMMMMM MMMMM GGG        " << std::endl;
        std::cout << "    UUUU   UUUU   MMM MMMM MMM GGG   GGGGG " << std::endl;
        std::cout << "    UUUU   UUUU   MMM  MM  MMM GGG    GGGG  " << std::endl;
        std::cout << "    UUUU   UUUU   MMM      MMM  GGGGGGGGG   " << std::endl;
        std::cout << "    UUUUUUUUUUU   MMM      MMM   GGGGGGG  " << std::endl;
        std::cout << "     UUUUUUUUU    MMM      MMM    GGGGG   " << std::endl;
        std::cout << std::endl;
        std::cout << "            Bienvenido al programa" << std::endl;
        std::cout << "Esperamos que disfrutes explorando nuevas posibilidades." << std::endl;
        std::cout << std::endl;
        std::cout << "=============================================" << std::endl;
        std::cout << "||            NOMBRE DE EL CREADOR         ||" << std::endl;
        std::cout << "=============================================" << std::endl;
        std::cout << "||     9959-22-8           Julio Molina    ||" << std::endl;
        std::cout << "=============================================" << std::endl;
        std::cout << std::endl;
        break;
    case 1:
        insertarAdministrador();
		break;
	case 2:
	    system("cls");
	    cout << "          __^__                                     __^__"<< endl;
        cout << "         ( ___ )===================================( ___ )"<< endl;
        cout << "          | / |                                     | / |"<< endl;
        cout << "          | / |     Muchas gracias por ingresar     | / |"<< endl;
        cout << "          |___|            vuelva pronto            |___|"<< endl;
        cout << "          |___|                                     |___|"<< endl;
        cout << "         (_____)===================================(_____)"<< endl;
		exit(0);
	default:
	    std::cout << "=====================================================" << std::endl;
        std::cout << "||  Opcion invalida...Por favor prueba otra vez..  ||" << std::endl;
        std::cout << "=====================================================" << std::endl;
	}
	getch();
    }while(Opciones!= 2);
}
void usuario::insertarAdministrador()
{

    vector<string> usuarios;
    vector<string> claves;

    usuarios.push_back("Julio");

    claves.push_back("JUL");


    int contador = 0;
    bool ingresa = false;
    do
    {
        system("cls");
        fstream file;
        cout << "          __^__                                     __^__"<< endl;
        cout << "         ( ___ )===================================( ___ )"<< endl;
        cout << "          | / |                                     | / |"<< endl;
        cout << "          | / | INGRESA LOS DATOS DE ADMINISTRACION | / |"<< endl;
        cout << "          |___|                                     |___|"<< endl;
        cout << "         (_____)===================================(_____)"<< endl;
        cout << "\        ================================================="<< endl;
        cout << "\t\t\tIngresa Usuario \n";

        cout << "\t\t\tUsuario: ";
        cin >> nameAdministrador;

        char caracter;
        cout << "\t\t\tPassword: ";
        caracter = getch();
        getline(cin, passwordAdministrador);

        while (caracter != ENTER)
        {

            if (caracter != BACKSPACE)
            {
                passwordAdministrador.push_back(caracter);
                cout << "*";
            }
            else
            {
                if (passwordAdministrador.length() > 0)
                {
                    cout << "\b \b";
                    passwordAdministrador = passwordAdministrador.substr(0, passwordAdministrador.length() - 1);
                }
            }

            caracter = getch();
        }

        for (int i = 0; i < usuarios.size(); i++)
        {
            if (usuarios[i] == nameAdministrador && claves[i] == passwordAdministrador)
            {
                ingresa = true;
                break;
            }
        }
        if (!ingresa)
        {
            system("cls");
            std::cout << "=====================================================" << std::endl;
            std::cout << "||  El Administrador y/o password son incorrectos  ||" << std::endl;
            std::cout << "=====================================================" << std::endl;
            cin.get();
            contador++;
        }

    } while (ingresa == false && contador < INTENTOS);

    if (ingresa == false)
    {
        system("cls");
        std::cout << "================================================================" << std::endl;
        std::cout << "||  Haz fallado 3 veces, no puedes acceder al sistema. ADIOS  ||" << std::endl;
        std::cout << "================================================================" << std::endl;
       codigo="7000";
        bitacora bit;
        bit.ingreso(nameAdministrador,codigo);
    }

    else
    {
   /*codigo="7001";
    bitacora bit2;
    bit2.ingreso(nameAdministrador,codigo);*/
    int Opciones;
	char x;
	do{
    system("cls");
	std::cout << "**=========================================================================================================**" << std::endl;
	std::cout << "||       BBBBBB   IIII   EEEEEEE  NN     NN   VV     VV   EEEEEEE   NN    NN   IIII   DDDDDD   OOOOOOO     ||" << std::endl;
    std::cout << "||       BB   BB   II    EE       NNNN   NN   VV     VV   EE        NNNN  NN    II    DD   DD  OO   OO     ||" << std::endl;
    std::cout << "||       BBBBBB    II    EEEEE    NN NN  NN    VV   VV    EEEEE     NN NN NN    II    DD   DD  OO   OO     ||" << std::endl;
    std::cout << "||       BB   BB   II    EE       NN   NNNN     VV VV     EE        NN  NNNN    II    DD   DD  OO   OO     ||" << std::endl;
    std::cout << "||       BBBBBB   IIII   EEEEEEE  NN    NNN       V       EEEEEEE   NN   NNN   IIII   DDDDDD   OOOOOOO     ||" << std::endl;
    std::cout << "**=========================================================================================================**" << std::endl;
    std::cout << "||                            Bienvenido, " << nameAdministrador << " al programa de nomina                                     ||" << std::endl;
    std::cout << "||       Esperamos que esta herramienta sea de utilidad para calcular los salarios de los empleados        ||" << std::endl;
    std::cout << "**=========================================================================================================**" << std::endl;
    std::cout << std::endl;
    system("pause");
    system("cls");
    cout << "" << endl;
    cout << "\t\t    Nombre Administrador: " << nameAdministrador << endl;
    cout << "          __^__                                     __^__"<< endl;
    cout << "         ( ___ )===================================( ___ )"<< endl;
    cout << "          | / |                                     | / |"<< endl;
    cout << "          | / |            MENU DE INICIO           | / |"<< endl;
    cout << "          |___|                                     |___|"<< endl;
    cout << "         (_____)===================================(_____)"<< endl;
    cout << "\        ================================================="<< endl;
    cout << "                 *===============================*"<< endl;
    cout << "                 |   Porfavor, elije una opcion  |"<< endl;
    cout << "                 |                               |"<< endl;
    cout << "                 | 1. Catalogos                  |"<< endl;
    cout << "                 | 2. Informes                   |"<< endl;
    cout << "                 | 3. Procesos                   |"<< endl;
    cout << "                 | 4. Salir del sistema          |"<< endl;
    cout << "                 |                               |"<< endl;
    cout << "                 *===============================*"<< endl;
    cout << "                      Ingresa una Opcion: ";
    cin >> Opciones;
    switch(Opciones)
    {
    case 1:
        menuAlumno();
		break;
    case 2:
        bit.desplegarBitacora(nameAdministrador,"7500");
        break;
    case 3:

		break;
	case 4:
	    system("cls");
	    cout << "          __^__                                     __^__"<< endl;
        cout << "         ( ___ )===================================( ___ )"<< endl;
        cout << "          | / |                                     | / |"<< endl;
        cout << "          | / |     Muchas gracias por ingresar     | / |"<< endl;
        cout << "          |___|            vuelva pronto            |___|"<< endl;
        cout << "          |___|                                     |___|"<< endl;
        cout << "         (_____)===================================(_____)"<< endl;
		exit(0);
	default:
	    std::cout << "=====================================================" << std::endl;
        std::cout << "||  Opcion invalida...Por favor prueba otra vez..  ||" << std::endl;
        std::cout << "=====================================================" << std::endl;
	}
	getch();
    }while(Opciones!= 4);
    }
}
void usuario::menuAlumno()
{
    int Opciones;
	char x;
	do
    {
    system("cls");
    cout << "                                                                                                  "<< endl;
    cout << "                                                                                                  "<< endl;
    cout << "                    88        88  88b           d88    ,ad8888ba,                                 "<< endl;
    cout << "                    88        88  888b         d888   d8''    `'8b                                "<< endl;
    cout << "                    88        88  88`8b       d8'88  d8'                                          "<< endl;
	cout << "                    88        88  88 `8b     d8' 88  88                                           "<< endl;
	cout << "                    88        88  88  `8b   d8'  88  88      88888                                "<< endl;
	cout << "                    88        88  88   `8b d8'   88  Y8,        88                                "<< endl;
	cout << "                    Y8a.    .a8P  88    `888'    88   Y8a.    .a88                                "<< endl;
	cout << "                    `''Y8888Y''   88     `8'     88   `''Y88888P''                                "<< endl;
    cout << "                                                                                           "<< endl;
	system("pause");
	system("cls");
    bitacora bit;
	codigo="7300";
	bit.ingreso(nameAdministrador,codigo);
    cout << "" << endl;
    cout << "\t\t    Nombre Administrador: " << nameAdministrador << endl;
    cout << "" << endl;
    cout << "          __^__                                     __^__"<< endl;
    cout << "         ( ___ )===================================( ___ )"<< endl;
    cout << "          | / |                                     | / |"<< endl;
    cout << "          | / |            Catalogos UMG            | / |"<< endl;
    cout << "          |___|                                     |___|"<< endl;
    cout << "         (_____)===================================(_____)"<< endl;
    cout << "\        ================================================="<< endl;
    cout << "                 *===============================*"<< endl;
    cout << "                 |   Porfavor, elije una opcion  |"<< endl;
    cout << "                 |                               |"<< endl;
    cout << "                 | 1. Ingresar Alumno            |"<< endl;
    cout << "                 | 2. Desplegar Alumno           |"<< endl;
    cout << "                 | 3. Modificar Alumno           |"<< endl;
    cout << "                 | 4. Buscar Alumno              |"<< endl;
    cout << "                 | 5. Borrar Alumno              |"<< endl;
    cout << "                 | 6. Regresar al inicio         |"<< endl;
    cout << "                 | 7. Salir del sistema          |"<< endl;
    cout << "                 |                               |"<< endl;
    cout << "                 *===============================*"<< endl;
    cout << "                    Ingresa una Opcion: ";
    cin >> Opciones;
    switch(Opciones)
    {
    case 1:
    	do
    	{
    		insertarAlumno();
    		cout << "          __^__                                     __^__"<< endl;
            cout << "         ( ___ )===================================( ___ )"<< endl;
            cout << "          | / |                                     | / |"<< endl;
            cout << "          | / |  Desea gregar un nuevo Alumno?  | / |"<< endl;
            cout << "          |___|                                     |___|"<< endl;
            cout << "         (_____)===================================(_____)"<< endl;
            cout << "         =================================================" <<endl;
            cout << "                Pulsa Y para si ||| Pulsa N para No     " <<endl;
            cout << "         =================================================" <<endl;
            cout << "                Selecciona una respuesta: ";
    		cin >> x;
		}while(x == 'y'||x == 'Y');
		break;
	case 2:
		desplegarAlumno();
		break;
	case 3:
		modificarAlumno();
		break;
	case 4:
		buscarAlumno();
		break;
	case 5:
		borrarAlumno();
		break;
    case 6:
        system("cls");
        cout << "\t\t\tNombre Administrador: " << nameAdministrador << endl;
        cout << "" << endl;
        cout << "          __^__                                     __^__"<< endl;
	    cout << "         ( ___ )-----------------------------------( ___ )"<< endl;
        cout << "          | / |                                     | / |"<< endl;
        cout << "          | / |     Muchas gracias por ingresar     | / |"<< endl;
        cout << "          |___|    Redireccionando al inicio....    |___|"<< endl;
        cout << "          |___|                                     |___|"<< endl;
        cout << "         (_____)-----------------------------------(_____)"<< endl;
                break;
	case 7:
	    system("cls");
	    bitacora bit;
        codigo="7999";
        bit.ingreso(nameAdministrador,codigo);
        cout << "\t\t\tNombre Administrador: " << nameAdministrador << endl;
        cout << "" << endl;
	    cout << "          __^__                                     __^__"<< endl;
        cout << "         ( ___ )-----------------------------------( ___ )"<< endl;
        cout << "          | / |                                     | / |"<< endl;
        cout << "          | / |     Muchas gracias por ingresar     | / |"<< endl;
        cout << "          |___|            vuelva pronto            |___|"<< endl;
        cout << "          |___|                                     |___|"<< endl;
        cout << "         (_____)-----------------------------------(_____)"<< endl;
        exit(0);
	default:
		cout << "\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
	}
	getch();
    }while(Opciones!= 6);
}
void usuario::insertarAlumno()
{
	system("cls");
	fstream file;
    cout << "" << endl;
    cout << "\t\t    Nombre Administrador: " << nameAdministrador << endl;
    cout << "" << endl;
    cout << "          __^__                                     __^__"<< endl;
    cout << "         ( ___ )-----------------------------------( ___ )"<< endl;
    cout << "          | / |                                     | / |"<< endl;
    cout << "          | / |    Agregar informacion Alumno       | / |"<< endl;
    cout << "          |___|                                     |___|"<< endl;
    cout << "         (_____)-----------------------------------(_____)"<< endl;
	cout << "\t\t  Ingresa carnet del Alumno: ";
	cin >> ID;
	cout << "\t\t  Ingresa Nombre del Alumno : ";
	cin >> name;
	cout << "\t\t  Ingresa el correo del Alumno : ";
	cin >> correo;
	cout << "\t\t  Ingrese jornada M/V (Matutina o Vespertina) ";
	cin >> jornada;
	cout << "\t\t  Ingresa El telefono del Alumno : ";
	cin >> telefono;
    system("cls");
    cout << "=============================================" <<endl;
    cout << "||     Listo! nuevo Alumno agregado         ||" <<endl;
    cout << "=============================================" <<endl;
	if (jornada=="M")
    {
        jornada="Matutina";
        file.open("Matutina.txt", ios::app | ios::out);
        file << std::left << std::setw(14) << ID << std::left << std::setw(12) << name << std::left << std::setw(32) << correo << std::left << std::left << std::setw(20)<< jornada << std::setw(15)<< telefono << endl;
        bitacora bit;
        codigo="7301";
        bit.ingreso(nameAdministrador,codigo);
        file.close();
    }
    if (jornada=="V")
    {
        jornada="Vespertina";
        file.open("Vespertina.txt", ios::app | ios::out);
        file << std::left << std::setw(14) << ID << std::left << std::setw(12) << name << std::left << std::setw(32) << correo << std::left << std::left << std::setw(20)<< jornada << std::setw(15)<< telefono << endl;
        bitacora bit;
        codigo="7301";
        bit.ingreso(nameAdministrador,codigo);
        file.close();
    }
    file.open("Alumnos.txt", ios::app | ios::out);
        file << std::left << std::setw(14) << ID << std::left << std::setw(12) << name << std::left << std::setw(32) << correo << std::left << std::left << std::setw(20)<< jornada << std::setw(15)<< telefono << endl;
	bitacora bit;
	codigo="7301";
	bit.ingreso(nameAdministrador,codigo);
	file.close();
}
void usuario::desplegarAlumno()
{
	system("cls");
	fstream file;
	string ver;
	int total = 0;
    cout << "" << endl;
    cout << "\t\t    Nombre Administrador: " << nameAdministrador << endl;
    cout << "" << endl;
	cout << "                                               __^__                                     __^__"<< endl;
    cout << "                                              ( ___ )-----------------------------------( ___ )"<< endl;
    cout << "                                               | / |                                     | / |"<< endl;
    cout << "                                               | / |   Tabla de Detalles de Alumno   | / |"<< endl;
    cout << "                                               |___|                                     |___|"<< endl;
    cout << "                                              (_____)-----------------------------------(_____)"<< endl;
    cout << "===============================================================================================================================================================" << endl;
    cout << "ID           NOMBRE       CORREO                           JORNADA         TELEFONO" << endl;
    cout << "===============================================================================================================================================================" << endl;
	file.open("Alumnos.txt",ios::in);
	if(!file)
	{
		cout << "\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		while(!file.eof())
		{
			total++;
			getline(file,ver);
            cout << ver << endl;
		}
		if(total == 0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	file.close();
    bitacora bit;
	codigo="7302";
	bit.ingreso(nameAdministrador,codigo);
}
void usuario::modificarAlumno()
{
	system("cls");
	fstream file,file1;
	string user_ID;
	int found = 0;
	cout << "\n-------------------------Modificacion Detalles Usuario-------------------------"<<endl;
	file.open("Alumnos.txt",ios::in);
	if(!file)
	{
		cout << "\n\t\t\tNo hay informacion..,";
		file.close();
	}
	else
	{   cout << "" << endl;
	    cout << "\n\tUsuario: " << nameAdministrador << endl << endl;
		cout << "\n Ingrese ID del usuario que quiere modificar: ";
		cin >> user_ID;
		file1.open("Record.txt",ios::app | ios::out);
		        file >> ID >> name >> correo >> jornada >> telefono ;
		while(!file.eof())
		{
			if(user_ID!=ID)
			{
        file<< std::left << std::setw(14) << ID << std::left << std::setw(12) << name << std::left << std::setw(32) << correo << std::left << std::left << std::setw(20)<< jornada << std::setw(15)<< telefono << endl;
			}
			else
			{
				cout << "\t\t\tIngrese ID del Alumno: ";
				cin >> ID;
				cout << "\t\t\tIngrese Nombre del Alumno: ";
				cin >> name;
				cout << "\t\t\tIngrese correo del Alumno: ";
				cin >> correo;
				cout << "\t\t\tIngrese jornada del Alumno: ";
				cin >> jornada;
                cout << "\t\t\tIngrese telefono del Alumno: ";
				cin >> telefono;
        file1 << std::left << std::setw(14) << ID << std::left << std::setw(12) << name << std::left << std::setw(32) << correo << std::left << std::left << std::setw(20)<< jornada << std::setw(15)<< telefono << endl;
				found++;
			}
		        file >> ID >> name >> correo >> jornada >> telefono ;

		}
		file1.close();
		file.close();
		remove("Alumnos.txt");
		rename("Record.txt","Alumnos.txt");
        bitacora bit;
        codigo="7303";
        bit.ingreso(nameAdministrador,codigo);
	}
}
void usuario::buscarAlumno()
{
	system("cls");
	fstream file;
	int found = 0;
	file.open("Alumnos.txt",ios::in);
	if(!file)
	{

		cout << "\n-------------------------Datos del Alumno buscada------------------------" << endl;
		cout << "\n\t\t\tNo hay informacion...";
	}
	else
	{
		string user_ID;
        cout << "" << endl;
        cout << "\t\t    Nombre Administrador: " << nameAdministrador << endl;
		cout << "          __^__                                      __^__"<< endl;
        cout << "         ( ___ )------------------------------------( ___ )"<< endl;
        cout << "          | / |                                      | / |"<< endl;
        cout << "          | / |     Datos del Alumno buscado     | / |"<< endl;
        cout << "          |___|                                      |___|"<< endl;
        cout << "         (_____)------------------------------------(_____)"<< endl;
		cout << "\nIngrese ID de la Persona que quiere buscar: ";
		cin >> user_ID;
		        file >> ID >> name >> correo >> jornada >> telefono ;
		while(!file.eof())
		{
			if(user_ID == ID)
			{
				cout << "                 *============================* "<< endl;
                cout << "                                              "<< endl;
                cout << "                   Carnet Alumno: "<< ID << endl;
                cout << "                   Nombre Alumno : "<< name << endl;
                cout << "                   Correo: "<< correo << endl;
                cout << "                   Jornada: "<< jornada << endl;
                cout << "                   Telefono: "<< telefono << endl;
                cout << "                                              "<< endl;
                cout << "                 *============================* "<< endl;
				found++;
			}
		        file >> ID >> name >> correo >> jornada >> telefono ;
		}
		if(found == 0)
		{
			cout<<"\n\t\t\t Alumno no encontrado...";
		}
		file.close();
		bitacora bit;
        codigo="7304";
        bit.ingreso(nameAdministrador,codigo);
	}
}
void usuario::borrarAlumno()
{
	system("cls");
	fstream file,file1;
	string user_ID;
	int found = 0;
	cout << "\n-------------------------Detalles Usuario a Borrar-------------------------" << endl;
	file.open("Alumnos.txt",ios::in);
	if(!file)
	{
		cout << "\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{   cout << "" << endl;
	    cout << "\n\tUsuario: " << nameAdministrador << endl << endl;
		cout << "\n Ingrese el ID del Usuario que quiere borrar: ";
		cin >> user_ID;
		file1.open("Record.txt",ios::app | ios::out);
        file >> ID >> name >> correo >> jornada >> telefono ;
		while(!file.eof())
		{
			if(user_ID!=ID)
			{
        file1 << std::left << std::setw(15) << ID << std::left << std::setw(25) << name << std::left << std::setw(15) << correo << std::left << std::left << std::setw(30)<< jornada << std::setw(15)<< telefono << endl;
			}
			else
			{
				found++;
				cout << "\n\t\t\tBorrado de informacion exitoso";
			}
        file >> ID >> name >> correo >> jornada >> telefono ;
		}
		if(found == 0)
		{
			cout<<"\n\t\t\t ID Persona no encontrado...";
		}
		file1.close();
		file.close();
		remove("Alumnos.txt");
		rename("Record.txt","Alumnos.txt");
        bitacora bit;
        codigo="7304";
        bit.ingreso(nameAdministrador,codigo);
	}
}
