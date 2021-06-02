#include<stdio.h>
using namespace std;
void getName(){
	string name;
	cin >> name;
	cout << "Hello "<<name<<" to the world."<< endl;
}
int main(){
	cout << "Hello World"<<endl;
	getName();
}