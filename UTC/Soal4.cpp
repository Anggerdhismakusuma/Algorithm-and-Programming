// #include <stdio.h>
// #include <string.h>

// int main() {
// 	char S[35];
// 	scanf("%[^\n]", S);
	
// 	int l = strlen(S);
	
// 	// Input
// 	// Hello World
// 	// Output
// 	// olleH dlroW
	
	
// 	char newWord[35]; // Tempat untuk kata sementara tujuannya buat dibalik (misal : hello jadi olleh)
// 	int counterHuruf = 0; // Counter banyak huruf yang mau dibalik (misal : hello = 5)
// 	for (int i = 0; i <= l; i++) {
// 		if (S[i] == ' ' || S[i] == '\0') { // Kalo ketemu spasi atau null terminator
// 			newWord[counterHuruf] = '\0'; // Kalo udah beres kata barunya di newWord, kita kasih terminator di belakangnya supaya array itu dianggap sebagai string 
// 			// string itu isinya harus : "Hello\0" -> di paling belakang ada null terminatornya (WAJIB!!!!)
// 			for (int j = counterHuruf - 1; j >= 0; j--) {
// 				printf("%c", newWord[j]); // Print huruf dari belakang
// 			}
// 			if (S[i] == ' ') printf(" "); // Tambahin spasi setelah print satu kata kalo kata itu bukan kata terakhir
// 			else if (S[i] == '\0') printf("\n"); // Kalo kata paling terakhir, kita print enter kalo ga nanti ojnya merah gara2 ga ada enter
			
// 			counterHuruf = 0; // Reset counternya nya artinya kata itu udah dibalik sama udah di print, kita pake lagi j nya buat kata selanjutnya
// 		} else {
// 			newWord[counterHuruf] = S[i]; // Masukin huruf ke array kata baru yang sementara
// 			counterHuruf++; // Tambah counter huruf sementaranya
// 		}
// 	}
// 	return 0;
// }

#include <stdio.h>
#include <string.h>

int main(){
    char S[100];
    scanf("%[^\n]", S);
    int l = strlen(S);
    char temp[100];
    int counter = 0;
    for(int i = 0; i <= l; i++){
        if (S[i] == ' ' || S[i] == '\0'){
            temp[counter] = '\0';
            for(int j = counter - 1; j >= 0; j--){
                printf("%c", temp[j]);
            }
            if(S[i] == ' '){
                printf(" ");
            } else if (S[i] == '\0'){
                printf("\n");
            }
            counter = 0;
        } else {
            temp[counter] = S[i];
            counter++;
        }
    }
    return 0;
}

// #include <stdio.h>
// #include <string.h>

// int main() {
// 	char S[35];
// 	scanf("%[^\n]", S);
// 	int l = strlen(S);
// 	char newWord[35]; // Tempat untuk kata sementara tujuannya buat dibalik (misal : hello jadi olleh)
// 	int counterHuruf = 0; // Counter banyak huruf yang mau dibalik (misal : hello = 5)
// 	for (int i = 0; i <= l; i++) {
// 		if (S[i] == ' ' || S[i] == '\0') { // Kalo ketemu spasi atau null terminator
// 			newWord[counterHuruf] = '\0'; // Kalo udah beres kata barunya di newWord, kita kasih terminator di belakangnya supaya array itu dianggap sebagai string 
// 			// string itu isinya harus : "Hello\0" -> di paling belakang ada null terminatornya (WAJIB!!!!)
// 			for (int j = counterHuruf - 1; j >= 0; j--) {
// 				printf("%c", newWord[j]); // Print huruf dari belakang
// 			}
// 			if (S[i] == ' ') printf(" "); // Tambahin spasi setelah print satu kata kalo kata itu bukan kata terakhir
// 			else if (S[i] == '\0') printf("\n"); // Kalo kata paling terakhir, kita print enter kalo ga nanti ojnya merah gara2 ga ada enter
			
// 			counterHuruf = 0; // Reset counternya nya artinya kata itu udah dibalik sama udah di print, kita pake lagi j nya buat kata selanjutnya
// 		} else {
// 			newWord[counterHuruf] = S[i]; // Masukin huruf ke array kata baru yang sementara
// 			counterHuruf++; // Tambah counter huruf sementaranya
// 		}
// 	}
// 	return 0;
// }