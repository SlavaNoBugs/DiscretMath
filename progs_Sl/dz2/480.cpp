#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n;
    bool a[1000][1000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // если существует ориентированное ребро, соединяющее вершины i и j
            if (a[i][j]) {
                for (int z = 0; z < n; z++) {
                    // если из вершины j в вершину z ведёт ребро, но из i в z - нет, то граф нетранзитивен
                    if (a[j][z] && !a[i][z]) {
                        cout << "NO";
                        return 0;
                    }
                }
            }
        }
    }
    cout << "YES";
    return 0;
}