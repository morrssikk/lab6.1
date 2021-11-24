#include <iostream>
#include <iomanip>

using namespace std;

void Filling(int* list, const int size, const int Low, const int High);
void Calculate(int* list, const int size, int& sum, int& count);
void Output(int* list, const int size);

int main()
{

    srand((unsigned)time(NULL));

    const int n = 23;
    int r[n];

    int Min = 4;
    int Max = 68;

    int sum = 0;
    int count = 0;

    cout << "iter" << endl;
    cout << endl;

    Filling(r, n, Min, Max);
    cout << "Before: "; Output(r, n);

    Calculate(r, n, sum, count);
    cout << "After:  "; Output(r, n);

    cout << endl;

    cout << "Sum: " << setw(4) << sum << endl
        << "Count: " << setw(2) << count << endl;
}

// Заповнення масиву випадковими значеннями
void Filling(int* list, const int size, const int Min, const int Max)
{
    for (int i = 0; i < size; i++)
        list[i] = rand() % (Max - Min + 1) + Min; // де Min - ліва межа, а Max - права
}

// обчислення кількості, суми та присвоєння елементам, що підходять по умові значення 0
void Calculate(int* list, const int size, int& sum, int& count) {
    for (int i = 0; i < size; i++)
    {
        if (!(list[i] % 2) || !(list[i] % 13) != 0) { // парний або індекс не кратрий 8
            sum += list[i];
            list[i] = 0;
            count++;
        }
    }
}

// Вивід масиву
void Output(int* list, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(3) << list[i];
    cout << endl;
}