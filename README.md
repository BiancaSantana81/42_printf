# ft_printf

Neste projeto eu recodifiquei a função `printf` da libc. Ela deve seguir o mesmo comportamento da função original (exceto no gerenciamento de buffer) e realizar as seguintes conversões: 

| Type | Descrição |
|----------|----------|
| %c  | imprime um único caractere.  |
|  %s  | imprime uma cadeia de caracteres (conforme definido pela convenção C comum). |
| %p  | o argumento do ponteiro void * deve ser impresso em formato hexadecimal. |
| %d  | imprime um número decimal (base 10). |
| %i   | imprime um número inteiro na base 10  |
| %u   | imprime um número decimal sem sinal (base 10). |
| %x  | imprime um número no formato hexadecimal (base 16) em letras minúsculas. |
| %X   | imprime um número no formato hexadecimal (base 16) em letras maiúsculas. |
| %%   | imprime um sinal de porcentagem.|
