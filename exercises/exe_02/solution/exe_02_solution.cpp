/* ---------------------------------------------------------------------
 * The Fearless Engineer - Programmieren und Elektronik
 * Copyright (C) 2020, Dr. Andreas Haja.  
 *
 * Zweck : Verschlüsseln und Entschlüsselung eines Textes in eine Geheimbotschaft 
 *         mit if-Verzweigung und while-Schleife
 * 
 * Aufgabe : Summieren aller Zahlen in einer Liste (MUSTERLÖSUNG)
 *
 * Du solltest zusammen mit diesem Programm eine Kopie der MIT-Lizenz erhalten haben.
 * Falls nicht, sieh bitte hier nach: https://opensource.org/licenses/MIT.
 *
 * http://www.thefearlessengineer.com/cpp-kurs
 * ----------------------------------------------------------------------
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int lower_number = 3;
    int upper_number = 10; 
    int sum = 0; 

    int curr_num = lower_number; 
    while(curr_num <= upper_number)
    {
        sum = sum + curr_num;
        curr_num = curr_num + 1;
    }
    cout << "Summe aller Zahlen zwischen " << lower_number << " und " << upper_number << " = " << sum << endl;


}