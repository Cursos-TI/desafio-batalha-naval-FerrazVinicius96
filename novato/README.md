🚢 Desafio: Posicionando Navios no Tabuleiro (Nível Novato)
===========================================================

Nível: Novato  
Linguagem: C  
Conceito-chave: Arrays unidimensionais e bidimensionais (vetores e matrizes)

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
Iniciar o desenvolvimento de um jogo de Batalha Naval simulando o posicionamento de navios em um tabuleiro 10x10, utilizando vetores e matrizes em linguagem C.

📌 O que você vai fazer
------------------------
1. **Representar o Tabuleiro**
   - Criar uma matriz 10x10 preenchida com `0`, representando água.

2. **Posicionar os Navios**
   - Criar dois vetores representando navios de tamanho fixo (3 casas).
   - Posicionar um navio horizontalmente e outro verticalmente no tabuleiro.
   - Usar o valor `3` para representar as casas ocupadas por navios na matriz.

3. **Exibir o Tabuleiro**
   - Utilizar `loops aninhados` com `printf` para imprimir o tabuleiro completo no console.
   - A saída deve permitir visualizar facilmente onde estão os navios.

✅ Requisitos Funcionais
-------------------------
- Coordenadas iniciais (linha e coluna) devem ser definidas diretamente no código.
- Verificar se os navios estão dentro dos limites da matriz.
- Garantir que os navios **não se sobreponham**.
- Exibir o tabuleiro no console com `0`s (água) e `3`s (navios).

🚫 Requisitos Não Funcionais
-----------------------------
- Execução eficiente, sem atrasos.
- Código comentado explicando a lógica de variáveis, laços e blocos.
- Nomes de variáveis claros e código organizado com indentação consistente.

🎯 Simplificações
------------------
- Tabuleiro de tamanho fixo: 10x10.
- Navios com tamanho fixo: 3 posições.
- Sem entrada do usuário — posições definidas no código.
- Não é necessário simular jogadas ou ataques.
- Validação de sobreposição pode ser simplificada (ex: checagem simples de colisão).

📤 Exemplo de Saída Esperada
-----------------------------
Exemplo de visualização no console:

```
0 0 0 0 0 0 0 0 0 0  
0 0 0 3 3 3 0 0 0 0  
0 0 0 0 0 0 0 0 0 0  
0 0 0 0 0 0 0 0 0 0  
0 0 0 0 0 0 0 0 0 0  
3 0 0 0 0 0 0 0 0 0  
3 0 0 0 0 0 0 0 0 0  
3 0 0 0 0 0 0 0 0 0  
0 0 0 0 0 0 0 0 0 0  
0 0 0 0 0 0 0 0 0 0  
```

⚙️ Como Compilar e Executar
----------------------------
1. Salve o código como `batalha_naval.c`
2. Compile com:
   gcc batalha_naval.c -o batalha
3. Execute:
   ./batalha

💡 Dica Final
-------------
Use funções separadas para melhorar a organização: uma para inicializar o tabuleiro, outra para posicionar os navios, e outra para exibir. Isso facilita a manutenção e evolução do projeto nos próximos desafios.

Divirta-se navegando no código! 🚢💻