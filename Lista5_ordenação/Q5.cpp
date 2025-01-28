void in_sort(int vetor[], int tam){

    int indice, j;

    for (int indice = 1; indice < tam; ++indice) {
        int pivo = vetor[indice];
        int j = indice - 1;

        while (j >= 0 && vetor[j] > pivo) {
            vetor[j + 1] = vetor[j];
            j = j - 1;
        }
        vetor[j + 1] = pivo;
    }
}
