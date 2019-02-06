/*###################################################
  #                                                 #
  #   Body Mass Index (BMI) Calculator              #
  #   Copyright (c) 2008 - 2018 Junian Triajianto   #
  #                                                 #
  ###################################################*/

#include <cstdio>
#include <cstdlib>

char toUpper(char x);

int main() {
  char r;
  do {
    float TB, IMT;
    int BB;
    printf("Body Mass Index (BMI) Calculator\n");
    printf("================================\n\n");
    printf("BW   : Weight (kg)\n");
    printf("BH   : Height (m)\n");
    printf("BMI  : Body Mass Index\n\n");
    printf("BW   : ");
    scanf("%d", & BB);
    printf("BH   : ");
    scanf("%f", & TB);
    IMT = BB / (TB * TB);
    printf("BMI  : %0.2f\n\n", IMT);
    printf("You are ");
    if (IMT < 18.5)
      printf("Underweight");
    else if (IMT < 23)
      printf("Normal weight");
    else if (IMT < 25)
      printf("Overweight");
    else if (IMT < 30)
      printf("Obesity");
    else
      printf("Over Obesity");
    printf("\n\nTry again [Y/N]? ");
    do {
      r = getchar();
      r = toUpper(r);
    } while (r != 'Y' && r != 'N');
  } while (r == 'Y');
  return 0;
}

char toUpper(char x) {
  if (x >= 97 && x <= 122) x = x - 32;
  return x;
}
