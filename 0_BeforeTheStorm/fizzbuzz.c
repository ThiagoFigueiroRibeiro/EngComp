#include <stdio.h>
#include <unistd.h>
int main() {

int click;
int i;
printf ("Coloque ate qual numero voce deseja o fizzbuzz\n");

// pegar o comando do teclado

scanf("%d", &click);

for (i = 1; i <= click; i++){
sleep (1);
printf ("%d",i);
if (i % 15 == 0){ printf (" - FizzBuzz\n");}

else if (i % 5 == 0){ printf (" - Buzz\n");}

else if (i % 3 == 0){ printf (" - Fizz\n");}

else { printf (" - \n");}
}

printf("Esse eh o fim do programa, uhuuuu\n");
return 0;
}
