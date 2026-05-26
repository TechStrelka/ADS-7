// Copyright 2022 NNTU-CS
#include <iostream>
#include <cstdlib>
#include "train.h"

int main() {
    std::srand(0);
    std::cout << "Length,AllOff,AllOn,Random\n";

    for (int n = 10; n <= 100; n += 10) {
        Train t1;
        for (int i = 0; i < n; i++) {
            t1.addCar(false);
        }
        t1.getLength();
        int opOff = t1.getOpCount();

        Train t2;
        for (int i = 0; i < n; i++) {
            t2.addCar(true);
        }
        t2.getLength();
        int opOn = t2.getOpCount();

        Train t3;
        for (int i = 0; i < n; i++) {
            t3.addCar((std::rand() % 2) != 0);
        }
        t3.getLength();
        int opRand = t3.getOpCount();

        std::cout << n << "," << opOff << "," << opOn << "," << opRand << "\n";
    }

    return 0;
}
