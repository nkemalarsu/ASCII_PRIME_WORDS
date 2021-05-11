//
//  main.cpp
//  ASCII
//
//  Created by N Kemal ARSU on 6.12.2020.
//

#include <iostream>
using namespace std;

void ASCII();
    int main() {
    srand(time(0));
    int sayac2 = 0;
    char harfArray[100];
    int indis = 0;

    for (int x = 64; x < 128; x++) {

        if ((64 < x && 91 > x) || (96 < x && x < 123)) {
            int sayac = 0;

            for (int j = 2; j < x; j++) {
                if (x % j == 0) {
                    sayac++;
                    break;
                }
            }

            if (sayac == 0) {
                sayac2++;
                harfArray[indis++] = (char)x;
            }
        }
    }


    for (int i = 0; i < 10; i++) {
        int sayi1, sayi2, sayi3;
        sayi1 = rand() % sayac2;
        sayi2 = rand() % sayac2;
        sayi3 = rand() % sayac2;
        cout << harfArray[sayi1] << "" << harfArray[sayi2] << "" << harfArray[sayi3] << endl;
    }

}

 

ß
