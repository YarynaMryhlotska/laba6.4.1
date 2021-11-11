#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int n, const int Low, const int High)
{
    for (int i = 0; i < n; i++)
        a[i] = Low + rand() % (High - Low + 1);
}

void Print(int* a, const int n)
{
    for (int i = 0; i < n; i++)
        cout << setw(4) << a[i];
    cout << endl;

}


int Min(int* a, const int n)
{
    int min = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] < min)
            min = a[i];
    return min;
}

int Find1(int* a, const int n)
{
    for (int i1 = 0; i1 < n; i1++)
    {
        if (a[i1] > 0)

            return i1;
        else

            i1 + 1;
    }
    return -1;
}

int Find2(int* a, const int n)
{
    for (int i2 = n - 1; i2 > -1 && i2 < n; i2--)
    {
        if (a[i2] > 0)
            return i2;

    }
    return  -1;
}

int Sum(int* a, int i1, int i2)
{
    int S = 0;
    for (int i = i1; i <= i2; i++)
        S += a[i];
    return S;
}

void Sort(int* a, const int n)
{
    for (int i = 1; i < n; i++)
    {
        int k = 0;
        for (int j = 0; j < n - i; j++)
            if (a[j + 1] == 0)
            {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
                k = 1;
            }
        if (k == 0)
            return;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int n;
    cout << "n = "; cin >> n;
    int* r = new int[n];
    int Low = -20;
    int High = 20;

    Create(r, n, Low, High);
    Print(r, n);

    cout << "min = " << Min(r, n) << endl;

    int i1 = Find1(r, n);
    if (i1 > -1)
        cout << endl;
    else
        cout << "Not found 1 " << endl;

    int i2 = Find2(r, n);
    if (i2 > -1)
        cout << endl;
    else
        cout << "Not found 2 =  " << endl;

    cout << "S = " << Sum(r, i1, i2) << endl;

    Sort(r, n);
    Print(r, n);

    return 0;
}
