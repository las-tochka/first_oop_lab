#include <iostream>

//проверка на квадрат
int is_square(int value) {
    for (int i = 1; i * i <= value; i++) {
        if (i * i == value) return 1;
    }
    return 0;
}

//найдем ближайшую пару n,m^ n+m=c1^2 m-n=c2^2, out1=m, out2=n
void closest_pair_tonum(int value, int& out1, int& out2) {
    int n = 0;
    for (int m = value - 1; m > 1; m--) {
        for (int i = 1; i * i < m; i ++) {
            n = m - i * i;
            if (is_square(n + m)) {
                out1 = m;
                out2 = n;
                return;
            }
        }
    }
    out1 = 0;
    out2 = 0;
}

int main() {
    int value, m = 0, n = 0; 
    std::cin >> value;

    closest_pair_tonum(value, m, n);

    if (n != 0 && m != 0) std::cout << m << ' ' << n << std::endl;
    else std::cout << "Such pair isn't exist" << std::endl;
    
    return 0;
}