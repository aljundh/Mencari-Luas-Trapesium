#include<iostream>
using namespace std;

void rumus(){
	int a,b,t;
	float L;
	
	cout<<"Luas TRAPESIUM"<<endl;
	cout<<"Htunglah luas trapesium ()"<<endl;
	cout<<"a = "; cin >>a;
	cout<<"b = "; cin >>b;
	cout<<"t = "; cin >>t;
	L=(a+b)*t*0.5;
	cout<<"Luas Trapesium adalah = "<<L<<endl;
}

int main(){
	rumus();
}
