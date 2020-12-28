#include <iostream>

using namespace std;

int main()
{
    int m=0, i, i_kurang, maksimal2=0, max=0, min=0, selisih[999]={0}, bil[m];
    float ratarata, rata=0;
    cout << "Nama : Duana Puspitaningrum \nNIM  : 124200055 \nTugas 9 ARRAY \n============================" << endl;
    cout << "Masukkan banyak angka : " ; cin  >> m ;
    for (int i=0; i<m; i++){
        cout << "bilangan ke-" << i+1 <<": "; cin  >> bil[i];
    }   cout << endl ;
        cout << "______HASIL______" << endl ;
        cout << "deret       : ";
        for (i=0; i<m; i++)
            cout << bil[i]<< " ";
        max = bil[0];
        for (i=0; i<m; i++){
            if (max<bil[i]){
                max = bil[i];
            }else min = bil [0];
                if (min > bil [i]){
                    min = bil [i];
                }
        }
    for(i=0; i<m; i++){
        rata = rata+bil[i];
    }ratarata=rata/m;
    m=m-1;
    for(i=0; i<m; i++){
        i_kurang=i+1;
        if (i<m) selisih[i]=bil[i]-bil[i_kurang];
        else selisih[i] = 0;
        if (selisih[i]<0) selisih[i]=selisih[i]*(-1);
        maksimal2=selisih[0];
        if (selisih[i]> maksimal2) {
            maksimal2 = selisih[i];
        }
    }
    cout << "\nmaksimum    : " << max << endl;
    cout << "minumum     : " << min << endl;
    cout << "rata-rata   : " << ratarata << endl ;
    cout << "selisih max : " << maksimal2 << endl ;
    return 0;
}
