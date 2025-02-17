#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_words(char *line) {
    int count = 0, inWord = 0;
    for (int i = 0; line[i] != '\0'; i++) {
        if (isalpha(line[i])) {
            if (!inWord) {
                count++;
                inWord = 1;
            }
        } else if (isspace(line[i])) {
            inWord = 0;
        }
    }
    return count;
}

int main() {
    FILE *file = fopen("testdata.in", "r");
    if (!file) {
        printf("Error opening file\n");
        return 1;
    }

    int X;
    fscanf(file, "%d", &X);
    fgetc(file);

    char line[51];
    int page = 1, wordCount = 0;
    int pages [10];
    int wordCounts[10];
    int pagesCount = 0;

    while (fgets(line, 51, file)) {
        if (line[0] == '#') {
            if (wordCount < X) {
                pages[pagesCount] = page;
                wordCounts[pagesCount] = wordCount;
                pagesCount++;
            }
            page++;
            wordCount = 0;
        } else {
            wordCount += count_words(line);
        }
    }

    fclose(file);
    if (pagesCount == 0) {
        printf("The essay is correct\n");
    } else {
        for (int i = 0; i < pagesCount; i++) {
            printf("page %d: %d word(s)\n", pages[i], wordCounts[i]);
        }
    }

    return 0;
}

// #include <stdio.h>

// #define MAX_LINE_LENGTH 1000

// int main() {
//     int X;  // Jumlah kata minimum per halaman
//     char ch;
//     char line[MAX_LINE_LENGTH];
//     int wordCount = 0;
//     int page = 1;  // Nomor halaman
//     int found = 0;  // Menandakan apakah ada halaman yang tidak memenuhi syarat
//     int i = 0;  // Indeks untuk menulis baris

//     // Membuka file testdata.in
//     FILE *file = fopen("testdata.in", "r");
//     if (file == NULL) {
//         printf("Error opening file.\n");
//         return 1;
//     }

//     // Membaca jumlah kata minimum per halaman
//     fscanf(file, "%d", &X);
//     fgetc(file);  // Membaca newline setelah angka X

//     // Membaca setiap karakter dari file
//     while ((ch = fgetc(file)) != EOF) {
//         // Simpan karakter ke dalam array baris
//         if (ch == '#') {
//             line[i] = '\0';  // Menandakan akhir halaman

//             // Menghitung jumlah kata pada halaman
//             int pageWordCount = 0;
//             int inWord = 0;  // Flag untuk mendeteksi apakah kita berada dalam sebuah kata

//             for (int j = 0; line[j] != '\0'; j++) {
//                 if ((line[j] >= 'a' && line[j] <= 'z') || (line[j] >= 'A' && line[j] <= 'Z') || (line[j] >= '0' && line[j] <= '9')) {
//                     if (!inWord) {
//                         inWord = 1;  // Mulai kata baru
//                         pageWordCount++;
//                     }
//                 } else {
//                     inWord = 0;  // Karakter non-alfabet, bukan bagian dari kata
//                 }
//             }

//             // Jika jumlah kata kurang dari X, cetak halaman tersebut
//             if (pageWordCount < X) {
//                 printf("page %d: %d word(s)\n", page, pageWordCount);
//                 found = 1;
//             }
//             page++;  // Pindah ke halaman berikutnya
//             i = 0;  // Reset indeks baris
//         } else {
//             line[i++] = ch;  // Menambahkan karakter ke baris
//         }
//     }

//     // Jika tidak ada halaman yang memenuhi syarat
//     if (!found) {
//         printf("The essay is correct\n");
//     }

//     // Menutup file setelah selesai
//     fclose(file);

//     return 0;
// }
