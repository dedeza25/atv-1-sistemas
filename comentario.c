#include <stdio.h>
// A diretiva #include <stdio.h> serve para incluir a biblioteca padrão
// de entrada e saída da linguagem C.
// Ela é necessária para usar a função printf().

int main(void)
// O programa começa a ser executado na função main().
// Independentemente de onde ela esteja no código, a execução inicia aqui.
{
    printf("Hello, World!\n");
    // O \n é um caractere especial que representa uma quebra de linha.
    // Se ele for removido, o texto será impresso sem pular para a próxima linha.

    return 0;
    // O return 0 indica que o programa terminou com sucesso.
    // Se ele for removido, o programa geralmente ainda funciona,
    // mas o valor de retorno para o sistema operacional fica indefinido
    // (embora compiladores modernos costumem assumir return 0 automaticamente).
}
