//
// Created by Chronicle on 2023/1/27.
//
// 例题 2.1

#include <iostream>

using namespace std;

int main() {
    for (int x = 0; x < 10; ++x) {
        for (int y = 0; y < 10; ++y) {
            for (int z = 0; z < 10; ++z) {
                if (100 * x + 10 * y + z + 100 * y + 10 * z + z == 532) {
                    cout << x << " " << y << " " << z << '\n';
                }
            }
        }
    }
    cout << endl;
}
