#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	cout << " Nama        = Ikko Cahya Awinata " <<endl;
	cout << " Kelas       = Teknik Informatika A 2022 " <<endl;
	cout << " NIM         = 22051204038" <<endl;
	cout << " Mata Kuliah = Struktur Data" <<endl;
	cout << " =======================================" <<endl;
	cout<<endl;
	cout << "Latihan Nomor 1" <<endl;
	int x, y; int *px;
	x = 89;
	y = x;
	px = &x;
	cout << " Nilai x = " << x << endl;
	cout << " Nilai y = " << y << endl;
	cout << " Alamat px = " << px << endl;
	cout << " Nilai px = " << *px << endl;
	getch();
}
