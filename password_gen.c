// libraries needed for this program.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generatepassword(int length) {
  char charset[] = "abcdefghijkmnopqrstuvwxyzABCDEFGHIJKMNOPQRSTUVWXYZ123456789"
                   "0!@#$%*;"; //symbols wanted for password
  char password[length + 1];
  srand(time(NULL));

  for (int i = 0; i < length; i++) { // For loop 
    int randomIndex = rand() % (sizeof(charset) - 1);
    password[i] = charset[randomIndex];
  }
  password[length] = '\0'; // Null terminate
  printf("Password: %s\n", password);
}

int main() {
  int len;
  printf("Enter the length of the password : ");
  scanf("%d", &len);
  generatepassword(len);
  return 0;
}
