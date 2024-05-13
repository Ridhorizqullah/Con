#include <iostream>
using namespace std;

class angka {
private:
	int* arr;
	int panjang;
public:
	angka(int); //construktor
	~angka(); // destruktor
	void cetakData();
	void isiData();
};

//definisi member function
angka::angka(int i) {
	panjang = i
		arr = new int[i];
		isiData();
}
angka::~angka() {
	cout << endl;
	cetakData();
	delete[]arr;
	cout << " alamat arry sudah dilepaskan " <<endl;
}

