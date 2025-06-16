// перевести из градусов кельвина в цельсии и в фаренгейт И Т.Д.
#include <iostream>
using namespace std;

double KelvinToCelsia(double kelvin){
    return kelvin - 272.15;
}

double KelvinToFarengeit(double kelvin){
    return (kelvin - 272.15 )* 9.0 / 5.0 + 32;
}

double CelsiaToKelvin(double celsia){
    return celsia + 272.15;
}
 
double CelsiaToFarengeit(double celsia){
    return (celsia * 9.0 / 5.0) + 32;
}

double FarengeitToKelvin(double farengeit){
    return (farengeit - 32)  * 5.0 / 9.0 + 272.15;
}

double FarengeitToCelsia(double farengeit){
    return (farengeit - 32) * 5.0 / 9.0;
}

int main(){
    double kelvin = 150;
    cout << "Кельвин в Цельсий: " << KelvinToCelsia(kelvin) << endl;
    cout << "Кельвин в Фаренгейт: " << KelvinToFarengeit(kelvin) << endl;

    double celsia = 50;
    cout << "Цельсия в Кельвин: " << CelsiaToKelvin(celsia) << endl;
    cout << "Цельсия в Фаренгейт: " << CelsiaToFarengeit(celsia) << endl;

    double farengeit = 35;
    cout << "Фаренгейт в Кельвин: " << FarengeitToKelvin(farengeit) << endl;
    cout << "Фаренгейт в Цельсий: " << FarengeitToCelsia(farengeit) << endl;
}