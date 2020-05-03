#include <iostream>
using namespace std;
 
 class punto  //definir clase
 {
   public:
	   float x,y; 
	   void solicitar(const char numero)  //solicitud de puntos
	   {
	    cout <<"Ingrese la coordenada "<<numero<<" de x: "<<endl;
	    cin >> x;

	    cout <<"Ingrese la coordenada "<<numero<<" de y: "<<endl;
	    cin >> y;
	   }

	   void mostrar(const char numero) //mostrar los puntos
	   {
	   cout <<"El punto "<<numero<<"es:("<<x<<","<<y<<")"<<endl;
	   }
	   void nuevo(const char numero) //mostrar los nuevos puntos cambiados
	   {
	   cout <<"El nuevo punto "<<numero<<"es:("<<x<<","<<y<<")"<<endl;
	   }
	   

 };
 int main(void) //función principal
 {
	 
   punto punto1, punto2;
   float pen;
   punto1.solicitar('1'); //aplicación de solicitud de datos punto1
   punto1.mostrar('1'); //aplicación mostrar datos punto1

   punto2.solicitar('2'); //aplicación de solicitud de datos punto2
   punto2.mostrar('2'); //aplicación mostrar datos punto2

   swap (punto1,punto2);
   
   punto1.nuevo('1');
   punto2.nuevo('2');

   pen=(punto2.y-punto1.y)/(punto2.x-punto1.x);  //operación cálculo de la pendiente

   cout <<"La pendiente es :"<<pen<<endl;


 }

 inline void swap(float &m , float &n)  //operación de intercambio
 {
	 float temp = m;
	 m=n;
	 n=temp;
 }

