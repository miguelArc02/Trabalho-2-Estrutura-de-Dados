## README de Execução

O código foi desenvolvido para a disciplina **Estrutura de Dados I - 2025/2** (Prof. Dr. Johnatan Oliveira) e tem como objetivo **analisar o desempenho dos algoritmos de ordenação**: **Bubble Sort, Selection Sort, Insertion Sort, Quick Sort** e **Merge Sort**.

Cada algoritmo foi instrumentado para contar **comparações** e **trocas**, sendo testado com **n = 1000** em quatro cenários: **ordenado, reverso, aleatório e com duplicados**.
O programa exibe no terminal uma **tabela de resultados** com o número de operações e uma prévia do vetor analisado.

### Estrutura

```
main.c
bubble_sort.c
selection_sort.c
insertion_sort.c
quick_sort.c
merge_sort.c
sorts.h
```

### Execução

Compile e rode com:

```bash
gcc main.c bubble_sort.c selection_sort.c insertion_sort.c quick_sort.c merge_sort.c -o ordenacao
./ordenacao
```

### Autor(es)

Trabalho desenvolvido para a disciplina **Estrutura de Dados I (2025/2)**
**Curso:** Engenharia de Software / Ciência da Computação
**Professor:** Dr. Johnatan Oliveira
**Instituição:** Universidade Federal de Lavras (UFLA)
**Aluno 1:** *(Higor Felipe dos Reis)*
**Aluno 1:** *(Hugo do Nascimento Silva)*
**Aluno 1:** *(Miguel Arcanjo Figueiredo Rodrigues Silva)*


