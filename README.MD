# Simulação de Movimentos de Peças de Xadrez

Este projeto é uma simulação simples dos movimentos de três peças de xadrez: Torre, Bispo e Rainha. O objetivo é demonstrar o uso de estruturas de repetição em C para simular os movimentos no tabuleiro.

## Descrição do Projeto

O programa simula os movimentos das seguintes peças:
- **Torre**: Move-se em linha reta horizontalmente ou verticalmente. Neste programa, a Torre se move 5 casas para a direita.
- **Bispo**: Move-se na diagonal. Neste programa, o Bispo se move 5 casas na diagonal para cima e à direita.
- **Rainha**: Move-se em todas as direções. Neste programa, a Rainha se move 8 casas para a esquerda.

Cada peça utiliza uma estrutura de repetição diferente:
- `for` para a Torre.
- `while` para o Bispo.
- `do-while` para a Rainha.

## Como Executar

1. Certifique-se de ter um compilador C instalado (como `gcc`).
2. Clone este repositório:
   ```bash
   git clone <URL_DO_REPOSITORIO>