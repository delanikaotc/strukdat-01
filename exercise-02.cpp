/*
Author      : Delanika Olympiani Trieswari Caesarini
NPM         : 140810180026
Deskripsi   : Program ini mengonversi derajat celcius ke fahrenheit
Tahun       : 2019
*/

#include <iostream>

using namespace std;

float cel2Fah(float celcius){
    return celcius*9/5+32;
}
int main()
{
    int celcius=9;
    float fahrenheit=cel2Fah(celcius);
    cout<<"temp is "<<fahrenheit;
}
