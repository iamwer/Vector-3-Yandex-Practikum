/*� ���������� ����� ������������ �������� �������� ��� � ������� � ����� �� �������� ����� ��������������� �����: 0 � zero, 1 � one, 2 � two, 3 � three, 4 � four, 5 � five, 6 � six, 7 � seven, 8 � eight, 9 � nine, 10 � ten, 11 � eleven, 12 � twelve, 13 � thirteen, 14 � fourteen, 15 � fifteen, 16 � sixteen, 17 � seventeen, 18 � eighteen, 19 � nineteen.
� ������ �� 20 �� 99 ������� � ������� ������������ ����� �����. ��������: 24 � twenty-four, 48 � forty-eight. ������� ���������� ���: 20 � twenty, 30 � thirty, 40 � fourty, 50 � fifty, 60 � sixty, 70 � seventy, 80 � eighty, 90 � ninety.
�������� ��������� ��� ����������� ����� � ����� �� ���������� �����. ���� ��� ���������� ������������ ����������� �������.
��� ���������� ����� ���� � ��������� ����.
������ ������� ������
���� ����� ����� � �������� �� 0 �� 99.*/


#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> num_names = { "zero"s, "one"s, "two"s, "three"s, "four"s, "five"s,
                                 "six"s, "seven"s, "eight"s, "nine"s, "ten"s, "eleven"s,
                                 "twelve"s, "thirteen"s, "fourteen"s, "fifteen"s,
                                 "sixteen"s, "seventeen"s, "eighteen"s, "nineteen"s };

    vector<string> tens_names = { "twenty"s, "thirty"s, "fourty"s, "fifty"s,
                                  "sixty"s, "seventy"s, "eighty"s, "ninety"s };
    int number;
    cin >> number;

    // �������� ������� � ������� ��� ������� � �������:
    int units = number % 10;
    int tens = number / 10;

    if (number < 20) {
        cout << num_names[number] << endl;
    }
    else if (units == 0) {
        cout << tens_names[tens - 2] << endl;
    }
    else {
        cout << tens_names[tens - 2] << "-"s << num_names[units] << endl;
    }
}