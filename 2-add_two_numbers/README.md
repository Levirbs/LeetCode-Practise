# Add Two Numbers

- **Link:** [LeetCode - Add Two Numbers](https://leetcode.com/problems/add-two-numbers/description/)
- **Dificuldade:** Médio
- **Linguagem:** C++

## Enunciado

Você recebe dois números não negativos representados por listas ligadas, onde cada nó contém um dígito. Os dígitos são armazenados em ordem reversa, e cada nó contém um único dígito. Some os dois números e retorne o resultado como uma lista ligada.

Você deve somar os dígitos correspondentes, mantendo apenas o dígito da unidade em cada posição e levando o "vai um" (carry) para a próxima soma, se necessário.

## Solução

A solução percorre ambas as listas simultaneamente, somando os valores dos nós e o "vai" da soma anterior. O dígito da posição atual é obtido por `soma % 10`, e o carry para a próxima posição é `soma / 10`. O processo continua até que todas as listas e o carry sejam processados.

- **Complexidade de tempo:** O(n), onde n é o maior tamanho das listas.

## Código

Veja o arquivo [`solution.cpp`](./solution.cpp) nesta pasta para a implementação completa.
