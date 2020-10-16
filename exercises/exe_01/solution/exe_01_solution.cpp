/* ---------------------------------------------------------------------
 * The Fearless Engineer - Programmieren und Elektronik
 * Copyright (C) 2020, Dr. Andreas Haja.  
 *
 * Zweck : Verschlüsseln und Entschlüsselung eines Textes in eine Geheimbotschaft 
 *         mit if-Verzweigung und while-Schleife
 * 
 * Aufgabe : Implementierung der Entschlüsselung (MUSTERLÖSUNG)
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
    ///////////////
    // Teil 1 : Entscheidung für Ver- oder Entschlüsselung
    ///////////////
    bool encode = false;
    string input;
    cout << "Verschlüsseln oder Entschlüsseln? (v/e): ";
    getline(cin, input);

    if (input == "v")
    {
        cout << "Bitte Text zum VERschlüsseln eingeben: ";
        encode = true;
    }
    else if (input == "e")
    {
        cout << "Bitte Text zum ENTschlüsseln eingeben: ";
    }
    else
    {
        cout << "Ungültige Eingabe!" << endl;
        exit(EXIT_FAILURE);
    }
    string text; 
    getline(cin, text);

    ///////////////
    // Teil 2 : Berechnung des verschlüsselten Texts
    // (Hinweis: Die Entschlüsselung ist Teil einer Übungsaufgabe)
    ///////////////
    int index = 0;
    string code = "";
    while (index < text.size())
    {
        int ascii = int(text[index]);
        int key = 0;
        if(encode==true)
        {
            key = (index % 2) + 3;
        }
        else
        {   
            key = - (index % 2) - 3;
        }
        int ascii_code = ascii + key;
        code = code + char(ascii_code);

        index = index + 1;
    }

    if(encode==true)
        cout << "Verschlüsselter Text = " << code << endl;
    else
        cout << "Entschlüsselter Text = " << code << endl;
}