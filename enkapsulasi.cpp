#include <iostream>
using namespace std;

class remoteLampu {
private:
    string saklarNo[10];
public:
    void setsaklarNo(int i, string value) {
        saklarNo[i] = value;
    }
    string getSaklarNo(int i) {
        return saklarNo[i];
    }
};

int main() {
	remoteLampu lampuRumah;

	lampuRumah.setsaklarNo(0, "Lampu Teras Rummah");
	lampuRumah.setsaklarNo(1, "Lampu Ruang Tamu");
	lampuRumah.setsaklarNo(2, "Lampu kamar Tidur");
	lampuRumah.setsaklarNo(3, "Lampu dapur ");

	cout << lampuRumah.getSaklarNo(0) << endl;
	cout << lampuRumah.getSaklarNo(1) << endl;
	cout << lampuRumah.getSaklarNo(2) << endl;
	cout << lampuRumah.getSaklarNo(3) << endl;

	return 0;

}