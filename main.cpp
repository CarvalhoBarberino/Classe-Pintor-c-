#include<iostream>
#include"ClassePintor.h"

using namespace std;

int main(){
	Pintor *p1 = new Pintor(7, 3);
	cout << p1->getAltura();
}
