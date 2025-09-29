# Longest Substring Without Repeating Characters

- **Link:** [LeetCode - Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/description/)
- **Dificuldade:** Médio
- **Linguagem:** C++

## Enunciado

Dada uma string `s`, encontre o comprimento da maior substring sem repetição de caracteres.



## Abordagem

Implementei duas soluções:

1. **Solução 1:** Uma abordagem mais direta, menos eficiente, que pode ser encontrada em `solution1.cpp`.
2. **Solução 2:** Utiliza a técnica de janela deslizante (sliding window) com hash map para rastrear os caracteres e seus índices, garantindo eficiência. Essa solução está em `solution2.cpp`.

A ideia principal é manter uma janela que se expande até encontrar um caractere repetido. Quando isso acontece, a janela é ajustada para começar após a última ocorrência desse caractere. O tamanho máximo da janela durante o processo é a resposta.

- **Complexidade de tempo:** O(n), onde n é o tamanho da string.

## Código

Veja os arquivos [`solution1.cpp`](./solution1.cpp) (versão inicial) e [`solution2.cpp`](./solution2.cpp) (versão otimizada) nesta pasta para as implementações completas.
