🚀 Desafio: Habilidades Especiais e Áreas de Efeito (Nível Mestre)
==================================================================

Nível: Mestre  
Linguagem: C  
Conceitos-chave: Matrizes, sobreposição, loops aninhados, condicionais, simulação visual

📑 Tabela de Conteúdo
----------------------
- [🎯 Objetivo](#🎯-objetivo)
- [📌 O que você vai fazer](#📌-o-que-você-vai-fazer)
- [✅ Requisitos Funcionais](#✅-requisitos-funcionais)
- [🚫 Requisitos Não Funcionais](#🚫-requisitos-não-funcionais)
- [🎯 Simplificações](#🎯-simplificações)
- [📤 Exemplos de Saída Esperada](#📤-exemplos-de-saída-esperada)
- [⚙️ Como Compilar e Executar](#⚙️-como-compilar-e-executar)
- [💡 Dica Final](#💡-dica-final)

🎯 Objetivo
-----------
Adicionar habilidades especiais ao jogo de Batalha Naval, simulando suas áreas de efeito no tabuleiro 10x10, utilizando matrizes auxiliares e lógica condicional.

📌 O que você vai fazer
------------------------
1. **Definir o Tabuleiro**
   - Utilizar o mesmo tabuleiro 10x10 criado anteriormente.
   - Inicializar com `0` para representar água.

2. **Criar Matrizes de Habilidade**
   - Criar três matrizes (5x5 ou 7x7) com valores `0` (não afetado) e `1` (afetado) representando:
     - **Cone**: Área que se expande de cima para baixo.
     - **Cruz**: Área em forma de cruz com origem no centro.
     - **Octaedro**: Área com formato de losango, simulando uma vista frontal de um octaedro.

3. **Integrar Habilidades ao Tabuleiro**
   - Definir um ponto de origem para cada habilidade (linha, coluna).
   - Sobrepor a matriz de habilidade ao tabuleiro centralizada nesse ponto.
   - Marcar as casas afetadas no tabuleiro com o valor `5`.

4. **Exibir o Tabuleiro**
   - Usar `printf()` com `loops aninhados` para mostrar o tabuleiro.
   - Utilizar caracteres distintos:
     - `0` → Água
     - `3` → Navio
     - `5` → Área afetada pela habilidade

5. **Utilizar Condicionais**
   - A construção das matrizes e a sobreposição devem ser feitas com estruturas `if` dentro de `for` aninhados.

✅ Requisitos Funcionais
-------------------------
- Criar três matrizes de habilidade (Cone, Cruz e Octaedro) com valores 0 e 1.
- Definir ponto de origem de cada habilidade no tabuleiro.
- Sobrepor cada matriz ao tabuleiro, marcando áreas afetadas com `5`.
- Exibir o tabuleiro final com água, navios e habilidades.
- Utilizar loops aninhados e condicionais na construção e sobreposição.

🚫 Requisitos Não Funcionais
-----------------------------
- Código eficiente, sem travamentos.
- Comentários explicativos sobre a lógica de cada habilidade.
- Código limpo, com indentação, nomes descritivos e organização clara.

🎯 Simplificações
------------------
- Ponto de origem das habilidades definido diretamente no código.
- Não implementar lógica de dano (somente visualização da área afetada).
- Tamanho das matrizes de habilidade pode ser fixo (ex: 5x5).
- A verificação de limites pode ser feita de forma simplificada.

📤 Exemplos de Saída Esperada
------------------------------

**Cone:**
```
0 0 3 0 0  
0 3 3 3 0  
3 3 3 3 3
```

**Cruz:**
```
0 0 3 0 0  
3 3 3 3 3  
0 0 3 0 0
```

**Octaedro:**
```
0 0 3 0 0  
0 3 3 3 0  
0 0 3 0 0
```

⚙️ Como Compilar e Executar
----------------------------
1. Salve o código como `batalha_naval_mestre.c`
2. Compile com:
   gcc batalha_naval_mestre.c -o batalha
3. Execute:
   ./batalha

💡 Dica Final
-------------
Crie funções separadas para cada habilidade e para a sobreposição no tabuleiro. Isso facilitará o entendimento e a manutenção do código.

Você chegou ao nível mestre. Agora é hora de deixar seu código estratégico e poderoso! 🚀🧠
