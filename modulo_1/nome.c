#include <cs50.h>
#include <stdio.h>
int main(void)
{
 string resposta = get_string("Qual é o seu nome?");
 printf("olá, %s! ", resposta);
}

