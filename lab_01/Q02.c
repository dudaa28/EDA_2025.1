float MediaDig(int Numero, unsigned int Tamanho, float Soma) {
    if (Numero == 0) {
        if (Tamanho == 0) {
            return 0;
        } else {
            return Soma / Tamanho;
        }
    } else {
        Soma += Numero % 10;
        return MediaDig(Numero / 10, Tamanho + 1, Soma);
    }
}



