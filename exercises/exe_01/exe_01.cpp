/* ---------------------------------------------------------------------
 * The Fearless Engineer - Programmieren und Elektronik
 * Copyright (C) 2020, Dr. Andreas Haja.  
 *
 * Zweck : Verschlüsseln und Entschlüsselung eines Textes in eine Geheimbotschaft 
 *         mit if-Verzweigung und while-Schleife
 * 
 * Aufgabe : Implementierung der Entschlüsselung
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

        // Schritt 1: Definiere eine Variable namens "key", in der die Modulo- sowie die Verschiebeoperation
        //            entsprechend dem Wert von "encode" mit anderem Vorzeichen gespeichert werden.
        //            Die Fallunterscheidung soll mit einer if-else-Anweisung umgesetzt werden.

        // Schritt 2: Addiere die Variable "key" zum ASCII-Code des Originalzeichens hinzu
        int ascii_code = ascii;

        code = code + char(ascii_code);
        index = index + 1;
    }

    // Schritt 3 : Passe die Ausgabe so an, dass im Fall "encode==true" der String "Verschlüsselter Text = "
    //             ausgegeben wird und im Fall "encode==false" der String "Entschlüsselter Text = "
    
    
    // Schritt 4 : Teste dein Programm, indem du den folgenden Text entschlüsselst: Ivhm#rdgk$giu$Eeopdhh$%Hhv#Iupnǹrlk%>#Whmq$Kedv#mvx#iukuexx/$vilrh$Kehrgi#~lxwiur/$ysp$xrdfoehwvilkhr#Ohvqwsilgkiujxiwxhvq2#Hd$0$dyv$gip$Niurvthmflhv#iuxriqx#ilr#Khjoyhwwiu$%[hv#trpwiux#mq$pilrhq#Fdwlwuijmvxhv#C%$-.-$Qyu$uykmj0#rxv#vxllk/$llu$omhfhr#Flxv0#iv$lww$gsfl#rxv#ilr#ooilrhv#[lx}2#Qhmq$Pilwwiu0#qhmq$Pilwwiu0#wlik$peo$gsux#%#Hd$ysurh$vgkphmflw$vmfl#ilr#Zrv}ilgkiq$isux#%#.-.#Foilf#vxllk/$ephme$uykmj0#qhmq$omhfhw#Olrg0#mfl#lrph$hw#{ligiu2#Kdr}$eivxlqpx1$Pilr#Qhmvxhv/$pilr#Qhmvxhv/$kshvvx#hx$gev$Jvrpoiq$B$Gmh$zmohhr#Flxv$gyugk$giq$Niurvthmflhv#xrpoiq$$$-.-$Qyu$uykmj0#rxv#vxllk/$gev$keeiq$zmu$jphmfl/$gmh$vthvuiq$zmu$lr#hhr#Txjiiufhvhmfl1$Hv#xdwwiw$xrg$wevxhx#{li#fhwhwviq0#Qlww$0$miw~w$kew$hv#~x$vthmflhvq$yiukhwviq0#.-.#hhv#Tusjvdqpmhvhv#wfluilx#mq$kshgkwwiu$Tydp/$ge#~xgnx#hxvfl#hdw#Jhrvxhv#ilr#Wrrqiqwwvdlo2#Hhv#Flpgwfllvp$vgkmpqhvw$lq#Qrvjiqvrx/$gev$Svrkuepq#mvx#khpƺvgkx/$giu$Svrkuepqliuiu$lww$W$R$W$$%$
}