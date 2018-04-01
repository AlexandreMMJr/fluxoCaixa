# SISTEMA DE FLUXO DE CAIXA

## Tarefas

### Herik:

- Criação do Fluxo de Caixa;
- Criação do arquivo default;
- Exibição do Fluxo de Caixa;

### João Victor:

- Criação do Menu inicial (5 itens do fluxograma);
- Edição do Fluxo de Caixa;
- Remoção do Fluxo de Caixa;

## Cronograma de implementação

### 01/04 (Herik)

- Organização do projeto;

## Observações

- Conferir e remodelar dados de acordo com o professor e João Victor;
- Colocar no commit mensagem explicando o que foi realmente feito:
```bash
$ git commit -m "Adicionei funcao X no processo Y"
```
- Estrutura dos itens do fluxo:
```c
typedef struct{
  int linha = 0, coluna = 0;
  char nome[30];
  float valor = 0;
}Item;
```
- Funções de utilidades:

```c
void limpaTela();      // Limpa Tela
void insereLinha();    // Inserir Linha de Exibição
void pausar();         // Função de pausar com getchar()

```

