#include <iostream>
using namespace std;

class Luas
{
    public:
    double jarijari;
    double luas;

    void inputData()
    {
        cout << "Masukkan Panjang Jari-Jari : " << endl;
        cin >> jarijari;
    }
    
    double hitungLuas()
    {
        return 22/7*jarijari*jarijari;
    }
};

int main()
{
    Luas lingkaran;
    lingkaran.inputData();
    cout << endl;
    cout << "Luasnya Adalah : " << lingkaran.hitungLuas() << endl;
    cout << endl;
}