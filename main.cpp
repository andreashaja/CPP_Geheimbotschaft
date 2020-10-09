#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Variablen für Originaltext, Ergebnis der Verschlüsselung und Modus-Auswahl definieren
    string orig, code, mode;

    // Entscheiden, ob verschlüsselt oder entschlüsselt werden soll
    bool encode = true;
    cout << "Verschlüsseln oder Entschlüsseln? (v/e)";
    getline(cin, mode);
    if (mode == "e")
    {
        encode = false;
        cout << "Bitte Text zum ENTschlüsseln eingeben:";
    }
    else
    {
        cout << "Bitte Text zum VERschlüsseln eingeben:";
    }
    getline(cin, orig); // Umzuwandelnden Text vom Terminal einlesen

    // Schleife über alle Zeichen im Originaltext
    int pos = 0;
    while (pos < orig.size())
    {
        // ASCII-Code für aktuelles Zeichen erzeugen
        int ascii = int(orig[pos]);

        // Zeichen entweder ver- oder entschlüsseln
        if(encode==true)
            ascii += pos;
        else
            ascii -= pos;


        // Umgewandelten ASCII-Code in Zeichen konvertieren
        char newChar = char(ascii);

        // Zeichen dem Ergebnis-String hinzufügen
        code += newChar;

        // Schleifenvariable hochzählen ("inkrementieren")
        pos = pos + 1;
    }

    // Umgewandelten Text ausgeben
    cout << "Ergebnis der Umwandlung : " << code << endl;
}

/*

  // Hello World Classic
  cout << "Hello World!\n";
  
  // Hello World Advanced
  string str1 = "Hello World!\n";
  cout << str1;

  // Hello World Code
  string str2 = "Hfnos%]vzun,";
  int cnt = 0;
  while(cnt<str2.size())
  {
    cout << char(int(str2[cnt])-cnt);
    cnt++;
  }
}
*/