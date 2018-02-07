#include<iostream>
#include<cstdlib>
#include "unistd.h"

using namespace std;

int main(){
	short i=0;
	while(i<=5){
		sleep(1); // bir saniye bekleyecek ondan sonra siradaki kodu isleyecek
		i++;
	}
	system("shutdown -h"); // kapatma komutu
	return 0;
}
