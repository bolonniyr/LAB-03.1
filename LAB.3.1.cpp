// Lab_03_1.cpp
// �������� �����
// ����������� ������ 3.1
// ������������, ������ ��������: ������� � �����������.
// ������ 4


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x; // ������� ��������
    double y1; // ��������� ���������� ������
    double y2;
    double A; // �������� ��������� - ������������� ����� ������� ������
    double B1; // �������� ��������� - ������������� ����� ������� ������
    double B2;

    cout << "x = ";
    cin >> x;

    A = 1 + x;

    // ����� 1: ������������ � ��������� ����

    if (x <= 4)
        B1 = pow(exp(1), log(2 + 2 * x) + 2 * x);

    if (4 < x && x <= 7)
        B1 = 1.0 / tan((1 + x) / 9) + 8 * x;

    if (x > 7)
        B1 = 1 - 7 * x + x * x - 2 * x * x * x;

    y1 = A + B1;

    cout << endl;
    cout << "1) y = " << y1 << endl;

    // ����� 2: ������������ � ����� ����

    if (x <= 4)
        B2 = pow(exp(1), log(2 + 2 * x) + 2 * x);

    else
        if (x > 7)
            B2 = 1 - 7 * x + x * x - 2 * x * x * x;

        else
            B2 = 1.0 / tan((1 + x) / 9) + 8 * x;

    y2 = A + B2;

    cout << "2) y = " << y2 << endl;

    cin.get();
    return 0;
}
