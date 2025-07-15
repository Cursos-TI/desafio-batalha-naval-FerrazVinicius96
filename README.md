🚢 Projeto Completo: Batalha Naval em C
=======================================

Níveis: Novato → Aventureiro → Mestre  
Linguagem: C  
Conceitos-chave: Matrizes, vetores, loops aninhados, condicionais, simulação visual

📑 Tabela de Conteúdo
----------------------
- [🎯 Objetivo Geral](#🎯-objetivo-geral)
- [🧩 Níveis e Desafios](#🧩-níveis-e-desafios)
  - [Nível Novato](#nível-novato)
  - [Nível Aventureiro](#nível-aventureiro)
  - [Nível Mestre](#nível-mestre)
- [✅ Requisitos Funcionais Gerais](#✅-requisitos-funcionais-gerais)
- [🚫 Requisitos Não Funcionais](#🚫-requisitos-não-funcionais)
- [📤 Exemplos de Saída Esperada](#📤-exemplos-de-saída-esperada)
- [⚙️ Como Compilar e Executar](#⚙️-como-compilar-e-executar)
- [💡 Dicas Finais](#💡-dicas-finais)

🎯 Objetivo Geral
------------------
Desenvolver um projeto completo de Batalha Naval utilizando linguagem C. Ao longo dos desafios, o aluno irá construir a base do jogo, posicionar navios, e simular habilidades com áreas de efeito.

🧩 Níveis e Desafios
---------------------

🔹 Nível Novato — Posicionando Navios no Tabuleiro
--------------------------------------------------
- Criar um tabuleiro 10x10 com água (`0`).
- Posicionar dois navios de tamanho 3 (um na horizontal, outro na vertical), representados por `3`.
- Exibir o tabuleiro no console com loops aninhados.

🔹 Nível Aventureiro — Tabuleiro Completo e Navios Diagonais
-------------------------------------------------------------
- Posicionar quatro navios:
  - Dois na horizontal/vertical
  - Dois na diagonal (principal e secundária)
- Validar sobreposição e limites
- Exibir o tabuleiro com navios representados por `3`

🔹 Nível Mestre — Habilidades Especiais e Áreas de Efeito
----------------------------------------------------------
- Criar matrizes de habilidade (Cone, Cruz e Octaedro) com valores `0` e `1`
- Sobrepor essas matrizes no tabuleiro, a partir de um ponto de origem
- Representar área afetada com valor `5`
- Exibir o tabuleiro com água (`0`), navios (`3`) e áreas de habilidade (`5`)

✅ Requisitos Funcionais Gerais
-------------------------------
- Utilizar matriz 10x10 para representar o tabuleiro.
- Posicionar navios de forma fixa (tamanho 3) com valores `3`.
- Evitar sobreposição de navios.
- Criar matrizes separadas para cada habilidade e sobrepô-las no tabuleiro.
- Representar:
  - Água: 0
  - Navio: 3
  - Área de Habilidade: 5
- Utilizar loops aninhados e condicionais em todas as etapas.

🚫 Requisitos Não Funcionais
-----------------------------
- Código deve executar de forma eficiente.
- Bem documentado, com comentários explicativos.
- Código limpo, com nomes descritivos e indentação consistente.

📤 Exemplos de Saída Esperada
------------------------------

**Tabuleiro com navios:**
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

**Área de Habilidade em Cone:**
```
0 0 5 0 0  
0 5 5 5 0  
5 5 5 5 5
```

**Área de Habilidade em Cruz:**
```
0 0 5 0 0  
5 5 5 5 5  
0 0 5 0 0
```

**Área de Habilidade em Octaedro:**
```
0 0 5 0 0  
0 5 5 5 0  
0 0 5 0 0
```

⚙️ Como Compilar e Executar
----------------------------
1. Salve o código como `batalha_naval.c`
2. Compile com:
   gcc batalha_naval.c -o batalha
3. Execute:
   ./batalha

💡 Dicas Finais
---------------
- Use funções para organizar o código (ex: inicializar_tabuleiro, posicionar_navio, aplicar_habilidade).
- Comente cada parte do código para facilitar a manutenção.
- Teste seu tabuleiro visualmente após cada adição.

Você agora domina o campo de batalha — que vença o melhor estrategista! 🧠🎯