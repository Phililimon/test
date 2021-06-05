#include <iostream>
#include <stdlib.h>
#include <cstdlib>

using namespace std;

void printKAKAHA() {
    cout << "KAKAHA/n";
}

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Russian");
    int i, itog;
    itog = atoi(argv[1]);
    if (argc % 2 == 1 && argc < 3) {
        return 0;
    }
        for (i = 2; i < argc; i = i + 2) {
            switch (*argv[i]) {
            case '+':
                itog = itog + atoi(argv[++i]);
                break;
            case '*':
                itog = itog * atoi(argv[++i]);
                break;
            case '/':
                if (atoi(argv[i + 1]) == 0) {
                    cout << "На ноль делить нельзя!" << endl;
                    return 0;
                }
                itog = itog / atoi(argv[++i]);
                break;
            case '-':
                itog = itog - atoi(argv[++i]);
                break;
            default:
                cout << "Некорректные данные!" << endl;
            }
        }
    
    cout << "=" << itog << endl;

    printKAKAHA();

    return 0;
}
///sdfsdf
// 2
// skdjfskdfksdjfsd
// АААААААААААААААААААААААААААААААААААААААААААААААААААААААААААААААА
