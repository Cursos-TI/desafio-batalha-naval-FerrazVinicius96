🚢 Desafio: Tabuleiro Completo e Navios Diagonais (Nível Aventureiro)
=====================================================================

Nível: Aventureiro  
Linguagem: C  
Conceito-chave: Matrizes, loops aninhados, diagonais em matrizes, validação de sobreposição

📑 Tabela de Conteúdo
----------------------
- [🎯 Objetivo](#🎯-objetivo)
- [📌 O que você vai fazer](#📌-o-que-você-vai-fazer)
- [✅ Requisitos Funcionais](#✅-requisitos-funcionais)
- [🚫 Requisitos Não Funcionais](#🚫-requisitos-não-funcionais)
- [🎯 Simplificações](#🎯-simplificações)
- [📤 Exemplo de Saída Esperada](#📤-exemplo-de-saída-esperada)
- [⚙️ Como Compilar e Executar](#⚙️-como-compilar-e-executar)
- [💡 Dica Final](#💡-dica-final)

🎯 Objetivo
-----------
Aprimorar o programa do desafio anterior adicionando navios na diagonal ao tabuleiro de Batalha Naval, utilizando uma matriz 10x10 em C.

📌 O que você vai fazer
------------------------
1. **Criar um Tabuleiro**
   - Declarar e inicializar uma matriz 10x10 com `0` representando água.

2. **Posicionar Quatro Navios**
   - Dois navios posicionados horizontal ou verticalmente.
   - Dois navios posicionados **na diagonal**:
     - Diagonal principal: `tabuleiro[i][i]`
     - Diagonal secundária: `tabuleiro[i][9-i]`
   - Todos os navios devem ter **tamanho fixo de 3 posições**.
   - As casas ocupadas devem ser marcadas com `3`.
   - Garantir que os navios estejam **dentro dos limites do tabuleiro** e **não se sobreponham**.

3. **Exibir o Tabuleiro**
   - Usar `loops aninhados` com `printf()` para imprimir a matriz completa.
   - Incluir espaços entre os elementos para facilitar a leitura visual.

✅ Requisitos Funcionais
-------------------------
- Utilizar uma matriz 10x10 para representar o tabuleiro.
- Posicionar 4 navios, sendo 2 na diagonal.
- Garantir que:
    - As coordenadas estejam dentro dos limites.
    - Os navios **não se sobreponham**, inclusive nas diagonais.
- Exibir o tabuleiro corretamente no console.

🚫 Requisitos Não Funcionais
-----------------------------
- Código eficiente e responsivo.
- Comentários explicando a função de cada variável, bloco e estrutura de repetição.
- Código legível, com indentação clara e nomes de variáveis descritivos.

🎯 Simplificações
------------------
- Coordenadas e tamanhos definidos diretamente no código.
- Tamanho dos navios fixo (3 posições).
- Validação de sobreposição pode ser simples, mas deve incluir diagonais.
- Não é necessário implementar ataques ou lógica de jogo.

📤 Exemplo de Saída Esperada
-----------------------------
Saída exemplo (valores `3` representam partes dos navios):

```
3 0 0 0 0 0 0 0 0 0  
0 3 0 0 0 0 0 0 0 0  
0 0 3 0 0 0 0 0 0 0  
0 0 0 0 0 0 0 0 0 3  
0 0 0 0 0 0 0 0 3 0  
0 0 0 0 0 0 0 3 0 0  
0 0 0 0 0 0 0 0 0 0  
0 0 0 3 3 3 0 0 0 0  
0 0 0 0 0 0 0 0 0 0  
0 0 0 0 0 0 0 0 0 0  
```

⚙️ Como Compilar e Executar
----------------------------
1. Salve o código como `batalha_naval_diagonal.c`
2. Compile com:
   gcc batalha_naval_diagonal.c -o batalha
3. Execute:
   ./batalha

💡 Dica Final
-------------
Use funções auxiliares para posicionar os navios, especialmente os diagonais, e para verificar sobreposição. Manter o código modular facilita alterações e futuras melhorias.

Continue avançando no mar da programação! 🌊🚀
