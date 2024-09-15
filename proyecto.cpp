#include <iostream>
#include <cstdlib>
#include <string>

int main() {
// 	opciones:

// - Mostrar la información actual de las conexiones de red.
// - Mostrar el contenido del archivo de configuración de las interfaces de red.
// - Mostrar todos los usuarios existentes en tu sistema operativo.
// - Agregar o eliminar un usuario en específico.
// - Mostrar la lista de todos los procesos que se encuentran en ejecución.
// - Eliminar/Detener un proceso en específico.
// - Cambiar los permisos a un archivo o directorio en específico.
// - Cambiar de propietario y/o grupo a un archivo o directorio en específico.
// - Actualizar los paquetes instalados y el sistema operativo.
// - Salir de la aplicación.

	std::string command = "whiptail --title 'Proyecto de Administracion de SOs y Virtualizacion' --menu 'Elige una opcion' 15 50 4 "
		"1 'Mostrar la informacion actual de las conexiones de red'"
		"2 'Mostrar el contenido del archivo de configuracion de las interfaces de red'"
		"3 'Mostrar todos los usuarios existentes en tu sistema operativo'"
		"4 'Agregar o eliminar un usuario en especifico'"
		"5 'Mostrar la lista de todos los procesos que se encuentran en ejecucion'"
		"6 'Eliminar/Detener un proceso en especifico'"
		"7 'Cambiar los permisos a un archivo o directorio en especifico'"
		"8 'Cambiar de propietario y/o grupo a un archivo o directorio en especifico'"
		"9 'Actualizar los paquetes instalados y el sistema operativo'"
		"10 'Salir de la aplicacion' 3>&1 1>&2 2>&3";
	return 0;
}
