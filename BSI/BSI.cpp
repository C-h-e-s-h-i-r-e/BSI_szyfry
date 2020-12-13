#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>
#include <numeric>
#include <algorithm>
#include <list>
#include <chrono>
#include <fstream>
#include <cstdio>

using namespace std;

auto des(string text){

return text;
};

auto three_des(string text){

return text;
};

auto aes(string text){

return text;
};


int main(int argc, char **argv)
{

    if ((argc > 2) && (string(argv[1]) == "des")){
    cout << "Szyfr : " << "DES" << endl;
    cout << "Do szyfrowania : " << string(argv[2]) << endl;
    cout << "Zaszyfrowane : " << des(string(argv[2])) << endl;
    }

    if ((argc > 2) && (string(argv[1]) == "3des")){
    cout << "Szyfr : " << "3DES" << endl;
    cout << "Do szyfrowania : " << string(argv[2]) << endl;
    cout << "Zaszyfrowane : " << three_des(string(argv[2])) << endl;
    }

    if ((argc > 2) && (string(argv[1]) == "aes")){
    cout << "Szyfr : " << "AES" << endl;
    cout << "Do szyfrowania : " << string(argv[2]) << endl;
    cout << "Zaszyfrowane : " << aes(string(argv[2])) << endl;
    }

}