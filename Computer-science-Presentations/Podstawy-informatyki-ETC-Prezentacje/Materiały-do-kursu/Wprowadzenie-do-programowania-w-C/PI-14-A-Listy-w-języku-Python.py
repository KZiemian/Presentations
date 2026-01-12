#!/usr/bin/python3

# Pewne problemy z tablicami w języku C łatwo zilurstrować, poprzez porównanie
# ich z pokrewnym typem danych w języku Python.

# UWAGA. Ze względu na to, że C i Python to języki działające w bardzo różny
# sposób (to niestety jest temat na semestralny kurs o językach
# programowania), to przyjęło się mówić, że piszemy „program w języku C”
# i że piszemy „skrypt w Pythonie”. To co Państwo czytają to jest więc
# skrypt Pythona.
#
# Ta terminologia nie jest jakoś super ściśle przestrzegana, ale będziemy się
# jej trzymać.

# To jak należy uruchomić skrypt w języku Python, niestety bardzo zależy
# od ustawień naszego systemu operacyjnego. Pod systemem GNU/Linux zwykle
# wystarczy wykonać dwa poniższe polecenia.
# $ chmod u+x PI-12-B-Listy-w-języku-Python.py
# $ ./PI-12-B-Listy-w-języku-Python.py
# Niemniej, jeśli system GNU/Linux jest trochę inaczej ustawiony, skrypt
# może nie zostać uruchomiony. W takiej sytuacji proszę się skontaktować
# z najbliższą osobą obeznajomioną z tym systemem.

# Poniżej definiujemy LISTĘ, nie TABLICĘ!
listVar1 = [1, 2.25, "To jest Python."]

print("listVar1[0] ==", listVar1[0], ".")
print("listVar1[1] ==", listVar1[1], ".")
print("listVar1[2] ==", listVar1[2], ".");

# Pomimo, że na poziomie kodu, listy wyglądają bardzo podobnie do tablic, to
# to są to BARDZO ODMIENNE BYTY. W tym przykładzie, widzimy, że lista może
# przechowywać zarówno liczby całkowite, jak i zmiennoprzecinkowe, czy nawet
# tekst (string), co nie jest możliwe w przypadku tablic.

# Widzimy też, że w Pythonie praca na tekście jest niezwykle prosta. Czy
# raczej praca na tekście w C jest niezwykle trudna, ale do tego zagadnienia
# wrócimy kiedy indziej.

# Jeśli chcemy zobaczyć jaka jest długość listy, możemy napisać coś takiego.
print("Długość listy listVar1:", len(listVar1))
