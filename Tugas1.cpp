#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string garis = "-----------------------------";
    int nilai_maks = 0;
    const int panjang_array = 3;
    string array[panjang_array][2];

    for (int i = 0; i < panjang_array; i++)
    {
        cout << garis << endl;
        cout << "Nilai ke-" << i+1 << endl;
        cout << garis << endl;
        cout << "Masukkan nilai : ";
        cin >> *(*(array+i)+1);
        cout << endl;
    }
    
    for (int j = 0; j < panjang_array; j++)
    {
        istringstream strstream(*(*(array+j)+1));
        int nilai;
        strstream >> nilai;

        if (nilai > nilai_maks)
        {
            nilai_maks = nilai;
        }
        
    }
    
    cout << garis << endl;
    cout << "|      Nilai Maksimal       |" << endl;
    cout << garis << endl;
    cout << "Nilai maksimal : "<< nilai_maks << endl;
}
