#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int caso;
const double  lados_triangulo = 3;
const double lados_cuadrilatero = 4;
const double  lados_pentagono = 5;
const double lados_hexagono = 6;
const double lados_heptagono = 7;
const double  lados_octagono = 8;
const double lados_eneagono = 9;
const double lados_decagono = 10;

struct Poligonos_medidas
{
	double lado;
	double apotema;
	double altura;

	//metodos
public:double Perimetro_figuras(double lado, double lados) {
		return lado * lados;
	};

public:double Area_triangulos(double lado, double altura) {
		return (lado * altura) / 2;
	};

public:double Area_cuadrilatero(double lado, double lados) {
		return (lado * altura);
	};

public : double Area_Poligonos(double lado, double lados, double apotema) {
		return (lado * lados) * apotema / 2;
	};

}
triangulo, cuadrilatero, pentagono, hexagono, heptagono, octagono, eneagono, decagono;

int main(char argc, int argv)
{
	cout << " Datos de Poligonos" << endl;
	cout << "(Ingrese los datos que corresponden a cada poligono)" << endl;
	cout << "-----------------------------------------------------------------" << endl;

	cout << "Ingrese el valor del lado del triangulo" << endl;
	cin >> triangulo.lado;
	cout << "Ingrese el valor de la altura del triangulo" << endl;
	cin >> triangulo.altura;


	cout << "Ingrese el valor del lado del cuadrilatero" << endl;
	cin >> cuadrilatero.lado;
	cout << "Ingrese el valor de la altura cuadrilatero" << endl;
	cin >> cuadrilatero.altura;

	cout << "Ingrese el valor del lado del pentagono" << endl;
	cin >> pentagono.lado;
	cout << "Ingrese el valor del apotema del pentagono" << endl;
	cin >> pentagono.apotema;

	cout << "Ingrese el valor del lado del hexagono" << endl;
	cin >> hexagono.lado;
	cout << "Ingrese el valor del apotema del hexagono"  << endl;
	cin >> hexagono.apotema;

	cout << "Ingrese el valor del lado del heptagono" << endl;
	cin >> heptagono.lado;
	cout << "Ingrese el valor del apotema del heptagono" << endl;
	cin >> heptagono.apotema;

	cout << "Ingrese el valor del lado octagono" << endl;
	cin >> octagono.lado;
	cout << "Ingrese el valor del apotema octagono" << endl;
	cin >> octagono.apotema;

	cout << "Ingrese el valor del lado eneagono" << endl;
	cin >> eneagono.lado;
	cout << "Ingrese el valor del apotema eneagono"  << endl;
	cin >> eneagono.apotema;

	cout << "Ingrese el valor del lado decagono" << endl;
	cin >> decagono.lado;
	cout << "Ingrese el valor del apotema decagono"  << endl;
	cin >> decagono.apotema;
	
	system("cls");

	cout << "Resultados"<<endl;

	cout << "El perimetro del triangulo es de: " << triangulo.Perimetro_figuras(triangulo.lado, lados_triangulo)<<endl;
	cout << "El area del triangulo es de: " << triangulo.Area_triangulos(triangulo.lado, triangulo.altura) << endl << endl;

	cout<< "El perimetro del cuadrilatero es de: " << cuadrilatero.Perimetro_figuras(cuadrilatero.lado, lados_cuadrilatero) << endl;
	cout << "El area del triangulo es de: " << cuadrilatero.Area_cuadrilatero(cuadrilatero.lado, cuadrilatero.altura) << endl << endl;

	cout << "El perimetro del pentagono es de: " << pentagono.Perimetro_figuras(pentagono.lado, lados_pentagono) << endl;
	cout << "El area del pentagono es de: " << pentagono.Area_Poligonos(pentagono.lado, lados_pentagono, pentagono.apotema) << endl << endl;

	cout << "El perimetro del hexagono es de: " << hexagono.Perimetro_figuras(hexagono.lado, lados_hexagono) << endl;
	cout << "El area del hexagono es de: " << hexagono.Area_Poligonos(hexagono.lado, lados_hexagono, hexagono.apotema) << endl << endl;

	cout << "El perimetro del heptagono es de: " << heptagono.Perimetro_figuras(heptagono.lado, lados_heptagono) << endl;
	cout << "El area del heptagono es de: " << heptagono.Area_Poligonos(heptagono.lado, lados_heptagono, heptagono.apotema) << endl << endl;

	cout << "El perimetro del octagono es de: " << octagono.Perimetro_figuras(octagono.lado, lados_octagono) << endl;
	cout << "El area del octagono es de: " << octagono.Area_Poligonos(octagono.lado, lados_octagono, octagono.apotema) << endl << endl;

	cout << "El perimetro del eneagono es de: " << eneagono.Perimetro_figuras(eneagono.lado, lados_eneagono) << endl;
	cout << "El area del eneagono es de: " << eneagono.Area_Poligonos(eneagono.lado, lados_eneagono, eneagono.apotema) << endl << endl;

	cout << "El perimetro del decagono es de: " << decagono.Perimetro_figuras(decagono.lado, lados_decagono) << endl;
	cout << "El area del decagono es de: " << decagono.Area_Poligonos(decagono.lado, lados_decagono, decagono.apotema) << endl << endl;

	return 0;
}
