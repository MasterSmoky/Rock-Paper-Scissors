```markdown
# Jogo Pedra, Papel e Tesoura (Rock, Paper, Scissors)

Este é um simples jogo de **Pedra, Papel e Tesoura** implementado em C, onde o jogador joga contra o computador.

## Descrição

O jogo é um clássico onde:
- Pedra (1) vence Tesoura (3).
- Tesoura (3) vence Papel (2).
- Papel (2) vence Pedra (1).
  
O programa solicita que o jogador escolha entre Pedra, Papel ou Tesoura usando números (1, 2 ou 3), e em seguida, o computador faz sua escolha aleatória. O resultado do jogo é então mostrado na tela, indicando quem venceu, ou se houve um empate.

## Funcionalidades

- **Escolha do computador:** O computador escolhe aleatoriamente entre Pedra, Papel ou Tesoura.
- **Validação da escolha do jogador:** O programa verifica se a entrada do jogador é válida (deve ser um número entre 1 e 3).
- **Exibição do resultado:** O resultado é exibido após cada rodada, mostrando o que o computador e o jogador escolheram, e quem venceu.

## Como Jogar

1. Compile o código com um compilador C, por exemplo, `gcc`:
   ```bash
   gcc -o rps rps.c
   ```

2. Execute o jogo:
   ```bash
   ./rps
   ```

3. O menu será exibido com as opções:
   - 1 para **Pedra**
   - 2 para **Papel**
   - 3 para **Tesoura**

4. Após isso, você pode escolher jogar ou sair do jogo:
   - Digite **p** para jogar uma rodada.
   - Digite **q** para sair do jogo.

## Exemplo de Execução

```
Welcome to RPS (Rock Paper Scissors)
--------------------------------------
MENU:
1. Rock
2. Paper
3. Scissors
--------------------------------------

Do you want to play? (p to play, q to quit): p

Choose your play (Use numbers 1 for Rock, 2 for Paper, 3 for Scissors): 1

-----------------------------------------------------
Computer: 2, Player: 1, Result: Computer won!
-----------------------------------------------------

Do you want to play? (p to play, q to quit): p

Choose your play (Use numbers 1 for Rock, 2 for Paper, 3 for Scissors): 2

-----------------------------------------------------
Computer: 1, Player: 2, Result: Player won!
-----------------------------------------------------

Do you want to play? (p to play, q to quit): q
Ok, see ya!
```

## Como Funciona

- **`computerChoice()`**: Função que gera uma escolha aleatória para o computador, retornando um número entre 1 e 3.
- **`displayResult(int computer, int player)`**: Função que exibe o resultado da partida, comparando as escolhas do computador e do jogador.
- **`getPlayerChoice()`**: Função que garante que o jogador insira uma escolha válida entre 1, 2 ou 3.
- **`main()`**: Função principal que coordena o fluxo do jogo, interagindo com o usuário e chamando as funções apropriadas.

## Compilação e Execução

1. Compile o código com o seguinte comando:

   ```bash
   gcc -o rps rps.c
   ```

2. Execute o programa compilado:

   ```bash
   ./rps
   ```

## Contribuições

Sinta-se à vontade para fazer um **fork** deste repositório e enviar **pull requests**. Todas as melhorias são bem-vindas!

## Licença

Este projeto está licenciado sob a Licença MIT - veja o arquivo [LICENSE](LICENSE) para mais detalhes.

```

Este `README.md` fornece uma visão geral completa do seu projeto, explica como o programa funciona, como compilar e executar o código, e como contribuir para o projeto. Você pode copiar e colar isso diretamente no seu repositório no GitHub.