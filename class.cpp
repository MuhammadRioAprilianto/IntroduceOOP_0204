#include <iostream>
using namespace std;

class Hewan
{
    private://access modifier
    string jenisKelamin; 
    public://access modifier
    string tipe;
    string umur;
    void inputData()
    {
        cout << "Masukkan Jenis Kelamin : " << endl;
        cin >> jenisKelamin;
        cout << "Masukkan Tipe : " << endl;
        cin >> tipe;
        cout << "Masukkan Umur : " << endl;
        cin >> umur;
    }
    void tampilHewan()
    {
        cout << "Jenis Kelaminnya Adalah : " << jenisKelamin << endl;
    }
};

int main()
{
    Hewan ambon;//memberi nama object
    ambon.inputData();
    cout << "Umurnya Adalah : " << ambon.umur << endl;
    cout << "Tipenya Adalah : " << ambon.tipe << endl;
    ambon.tampilHewan();
}
