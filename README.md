# WAR - Estruturas de Dados em C

![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Status](https://img.shields.io/badge/Status-Em%20Desenvolvimento-yellow)

Repositório dedicado ao desenvolvimento da base lógica do jogo **WAR** utilizando conceitos de **Estruturas de Dados** na linguagem C. O projeto simula o gerenciamento de territórios, ataques e missões estratégicas, aplicando na prática o uso de `struct`, ponteiros, alocação dinâmica de memória e modularização.

## Objetivo do Projeto

Construir uma versão simplificada e funcional da lógica do jogo WAR, com foco em:

- Representação de dados utilizando `struct`
- Organização de informações com vetores de structs
- Manipulação de dados por meio de ponteiros
- Alocação dinâmica de memória (`malloc` e `free`)
- Modularização do código
- Simulação de mecânicas de ataque e verificação de condições de vitória

## Níveis do Desafio

### 🏅 Nível Novato
Implementação da base do jogo com o uso de **structs** para representar os territórios.

- Criação de uma `struct` para armazenar os dados de cada território (nome, cor e quantidade de tropas).
- Utilização de um **vetor de structs** para cadastrar e gerenciar os territórios.
- Implementação de funções para exibir os territórios cadastrados.
- Ênfase na organização e estruturação dos dados em memória.

### 🥈 Nível Aventureiro
Implementação da lógica de **ataque entre territórios** utilizando ponteiros e alocação dinâmica de memória.

- Uso de `malloc` para alocar territórios dinamicamente.
- Passagem de parâmetros por referência (ponteiros).
- Simulação de batalhas e atualização do estado dos territórios após ataques.
- Modularização do código com funções bem definidas.

### 🥇 Nível Mestre
Implementação do sistema de **missões estratégicas** e verificação de condições de vitória.

- Desenvolvimento de missões com objetivos específicos.
- Verificação de condições de vitória do jogador.
- Refinamento da arquitetura do código (encapsulamento, passagem por valor e referência).
- Preparação do sistema para futuras expansões.

## Conceitos Aplicados

- `struct` e vetor de `struct`
- Ponteiros e aritmética de ponteiros
- Alocação dinâmica de memória (`malloc`, `free`)
- Passagem de parâmetros por valor e por referência
- Modularização e organização de código
- Boas práticas de documentação e legibilidade

## Estrutura do Repositório
```text
estrutura-de-dados-war/
├── README.md
├── nivel_novato/
│   └── main.c
├── nivel_aventureiro/
│   └── main.c
├── nivel_mestre/
│   └── main.c
└── docs/
└── (documentação adicional)
```


## Como Executar

Cada nível possui seu próprio arquivo `main.c`. Para compilar e executar:

```bash
# Exemplo - Nível Novato
cd nivel_novato
gcc main.c -o war_novato
./war_novato
```

## Status de Desenvolvimento
| Nível | Status | Data de Conclusão |
| --- | --- | --- | 
| Novato | Concluído ✅ | 22/05/2026 |
| Aventureiro | Em andamento | - |
| Mestre | Pendente | - |

<div>
## Autor
**Gabriel Moura Batista**
Estudante de Engenharia de Software - Estácio

Me acompanhe também:
[LinkedIn](https://www.linkedin.com/in/gabrielduraky) | [@itsDuraky](https://x.com/itsDuraky)
</div>