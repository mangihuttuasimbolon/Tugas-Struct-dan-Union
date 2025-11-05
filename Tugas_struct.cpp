#include <iostream>
using namespace std;

const int JUMLAH_SISWA = 20;

struct studentType{
    string nama_depan;
    string nama_belakang;
    int score;
    char grade;

};

void masukkan_data(studentType sesuatu[], int jumlah){
    
    for (int i = 0 ; i < jumlah ; i++){
        cout << "masukkan data siswa dalam format : nama depan , nama belakang , nilai"<< endl;
        cin >> sesuatu[i].nama_depan >> sesuatu[i].nama_belakang >> sesuatu[i].score; 
    }

}
void assign_grade(studentType sesuatu[], int jumlah){
   for (int i = 0 ; i < jumlah ; i++){
    int nilai = sesuatu[i].score;
    if (nilai >= 90){
        sesuatu[i].grade = 'A';
    }
    else if (nilai >= 80 ){
        sesuatu[i].grade = 'B';
    }
    else if (nilai >= 70){
        sesuatu[i].grade = 'C';
    }
    else if (nilai >= 50){
        sesuatu[i].grade = 'D';
    }
    else {
        sesuatu[i].grade = 'F';

    }
   }


}
int highest_score(studentType sesuatu[], int jumlah){
    int nilai_tinggi = sesuatu[0].score;
    
    for(int i = 1 ; i < jumlah ; i++){
        if (sesuatu[i].score > nilai_tinggi){
            nilai_tinggi = sesuatu[i].score;
        }
    }
    return nilai_tinggi;

}
void name_highest_score(studentType sesuatu[], int jumlah, int highest){
    string nama;
    int tinggi = highest ;
    for(int i = 0 ; i < jumlah ; i ++){
        if ( sesuatu[i].score == highest){
            nama = sesuatu[i].nama_depan + sesuatu[i].nama_belakang;
        }

    cout << "orang dengan nilai paling tinggi adalah: "<< sesuatu[i].nama_belakang << ", " << sesuatu[i].nama_depan << nama << "dengan nilai: " << tinggi << endl;
    }

}

void output_semua_data(studentType sesuatu[], int jumlah){
    for (int i = 0; i < jumlah; i++) {
        cout << "Nama: "<<  sesuatu[i].nama_belakang <<','
             << sesuatu[i].nama_depan<< endl
             << "nilai: " << sesuatu[i].score<<endl
             << "Predikat: " <<sesuatu[i].grade;
    }
}


int main(){
    int jumlah_siswa = JUMLAH_SISWA;
    studentType student[jumlah_siswa];
    masukkan_data(student , jumlah_siswa);
    assign_grade(student, jumlah_siswa);
    int highest = highest_score(student,jumlah_siswa);
    name_highest_score(student , jumlah_siswa, highest);
    output_semua_data(student,jumlah_siswa);


    return 0;
}

