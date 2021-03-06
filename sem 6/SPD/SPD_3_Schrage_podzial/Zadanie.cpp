#pragma once
#include "Zadanie.h"

using namespace std;

Zadanie::Zadanie() {} // konstruktor domyślny
Zadanie::~Zadanie() {} // destruktor

// przeciązanie operatora niezbędne aby koeljka obsługiwała obiekty typu Zadanie
bool operator<(const Zadanie& o1, const Zadanie& o2) {
	return o1.q > o2.q;
}
// przeciążenie operatora potrzebne do łatwego wyświeltnia zadań
ostream& operator<<(ostream& stream, const Zadanie& o) {
	stream << o.nr << " || " << o.r << " " << o.p << " " << o.q << endl;
	return stream;
}






