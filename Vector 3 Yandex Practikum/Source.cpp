/*¬ английском €зыке числительные стро€тс€ примерно как в русском Ч числа до двадцати имеют самосто€тельные имена: 0 Ч zero, 1 Ч one, 2 Ч two, 3 Ч three, 4 Ч four, 5 Ч five, 6 Ч six, 7 Ч seven, 8 Ч eight, 9 Ч nine, 10 Ч ten, 11 Ч eleven, 12 Ч twelve, 13 Ч thirteen, 14 Ч fourteen, 15 Ч fifteen, 16 Ч sixteen, 17 Ч seventeen, 18 Ч eighteen, 19 Ч nineteen.
¬ числах от 20 до 99 дес€тки и единицы записываютс€ через дефис. Ќапример: 24 Ч twenty-four, 48 Ч forty-eight. ƒес€тки называютс€ так: 20 Ч twenty, 30 Ч thirty, 40 Ч fourty, 50 Ч fifty, 60 Ч sixty, 70 Ч seventy, 80 Ч eighty, 90 Ч ninety.
Ќапишите программу дл€ превращени€ чисел в текст на английском €зыке. ѕока что достаточно ограничитьс€ двузначными числами.
¬се английские слова даны в заготовке кода.
‘ормат входных данных
ќдно целое число в пределах от 0 до 99.*/


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

    // ¬ычислим единицы и дес€тки как остаток и частное:
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