/*
Author      : Delanika Olympiani Trieswari Caesarini
NPM         : 140810180026
Deskripsi   : Program ini menampilkan fizz untuk setiap kelipatan 3, buzz untuk keliapatn 5, fizzbuzz untuk kelipatan 3 dan 5
Tahun       : 2019
*/

#include <iostream>

using namespace std;

void fizzbuzz(int& i){
    for(i=1; i<=100; i++){
        if(i%3==0&&i%5==0){
            cout<<"FizzBuzz"<<endl;
        }
        else if (i%5==0){
            cout<<"Buzz"<<endl;
        }
        else if (i%3==0){
            cout<<"Fizz"<<endl;
        }
        else{
            cout<<i<<endl;
        }
    }
}
int main()
{
    int i;
    fizzbuzz(i);

    return 0;
}
