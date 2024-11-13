#include <stdio.h>  // Inclui a biblioteca de entrada e saída

int main() {
    // Declaração das variáveis inteiras
    int tv_2020, tv_2021, tv_2022;
    int noteb_2020, noteb_2021, noteb_2022;
    int smart_2020, smart_2021, smart_2022;

    // Declaração das médias como variáveis do tipo float (para permitir médias com casas decimais)
    float media_2020 = 0, media_2021 = 0, media_2022 = 0;

    // Inicialização das variáveis (exemplo, você pode atribuir valores reais conforme necessário)
    tv_2020 = 10; noteb_2020 = 8; smart_2020 = 7;
    tv_2021 = 9; noteb_2021 = 7; smart_2021 = 6;
    tv_2022 = 8; noteb_2022 = 9; smart_2022 = 7;

    // Cálculo da média de cada ano
    media_2020 = (tv_2020 + noteb_2020 + smart_2020) / 3.0;  // Média de 2020
    media_2021 = (tv_2021 + noteb_2021 + smart_2021) / 3.0;  // Média de 2021
    media_2022 = (tv_2022 + noteb_2022 + smart_2022) / 3.0;  // Média de 2022

    // Verifica se 2020 obteve a maior média
    printf("2020 obteve a maior media? %d", ((media_2020 > media_2021) && (media_2020 > media_2022)));

    return 0;  // Retorna 0, indicando que o programa foi executado com sucesso
}
