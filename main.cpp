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
    setlocale(LC_ALL, "ru_RU.UTF-8");
    double temperature;
    char scale, targetScale;

    cout << "Введите сначала температуру и потом единицу измерения K - Кельвин, C - Цельсий, F - Фаренгейт (Например: 230 K ):" << endl;
    cin >> temperature >> scale;

cout << "Введите ту единицу измерения в которую хотите перевести (K - Кельвин, C - Цельсий, F - Фаренгейт):" << endl;
cin >> targetScale;

    if (scale == 'K'){
        if (targetScale == 'C'){
    cout << "Кельвин в Цельсий: " << KelvinToCelsia(temperature) << endl;
    }
        else if(targetScale == 'F'){
    cout << "Кельвин в Фаренгейт: " << KelvinToFarengeit(temperature) << endl;
    }
    else {
    cout << "Невозможно перевести Кельвины в Кельвины!" << endl;
    }
}

    else if (scale == 'C'){
        if (targetScale == 'K'){
    cout << "Цельсия в Кельвин: " << CelsiaToKelvin(temperature) << endl;
    }
    else if(targetScale == 'F'){
    cout << "Цельсия в Фаренгейт: " << CelsiaToFarengeit(temperature) << endl;
    }
    else {
        cout << "Невозможно перевести Цельсии в Цельсии!" << endl;
    }
}

    else if (scale == 'F'){
        if(targetScale == 'K'){
    cout << "Фаренгейт в Кельвин: " << FarengeitToKelvin(temperature) << endl;
    }
    else if(targetScale == 'C'){
    cout << "Фаренгейт в Цельсий: " << FarengeitToCelsia(temperature) << endl;
    }
    else{
        cout << "Невозможно перевести Фаренгейт в Фаренгейт!" << endl;
    }
}
}