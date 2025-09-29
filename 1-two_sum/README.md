# Two Sum

- **Link:** [LeetCode - Two Sum](https://leetcode.com/problems/two-sum/)
- **Dificuldade:** Fácil
- **Linguagem:** C++

## Enunciado

Dado um array de inteiros `nums` e um inteiro `target`, retorne os índices de dois números de forma que a soma deles seja igual a `target`.

Você pode assumir que cada entrada terá exatamente uma solução e não pode usar o mesmo elemento duas vezes.

## Solução

Minha primeira ideia foi a abordagem mais ingênua: força bruta, usando dois laços para testar todas as combinações possíveis. No entanto, isso resulta em complexidade O(n²), e a questão sugere buscar uma solução mais eficiente.

Pensei também na técnica de "Two Pointers" (dois ponteiros), que consiste em limitar o espaço de busca com um ponteiro à esquerda e outro à direita. Se a soma for maior que o target, diminuímos o ponteiro da direita; se for menor, aumentamos o da esquerda. Apesar de eficiente, essa abordagem não se aplica aqui por dois motivos: seria necessário ordenar o array (perdendo os índices originais) e a questão exige o retorno dos índices, não apenas dos valores.

A solução ideal é utilizar um hash map para armazenar os valores já vistos e seus respectivos índices. Assim, percorremos o array apenas uma vez. Para cada elemento, calculamos o complemento (`complement = target - nums[i]`). Se o complemento já estiver no hash map, encontramos a dupla de índices (o atual e o do complemento). Caso contrário, adicionamos o elemento atual e seu índice ao hash map.

- **Complexidade de tempo:** O(n)

## Código

Veja o arquivo [`solution.cpp`](./solution.cpp) nesta pasta para a implementação completa.