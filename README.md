# Lista2_LucasM_TiagoM
  
  Projeto realizado por @medeiroslucas e @tmcstiago.
  
## Rodando o projeto
  
  Utilize os comandos abaixo para compilar as aplicações
  
```sh
g++ -o prog gerar_veiculos.cpp
g++ -o proj lista4.cpp
```
  
  Rode o comando abaixo na primeira vez que for utlizar e sempre que quiser gerar uma nova base de pessoas.
  
```sh
./prog > Veiculos.txt
```
  Para rodar a aplicação, utilize o comando abaixo:

```sh
./proj
```

## Descrição

  Para este trabalho, utilizando o algoritmo de ordenação Radix Sort para ordenar grandes quantidades de veículos através da placa dos mesmos. Segue abaixo alguns resultados obtidos.
  
 ### Ordenação
 

<img src="https://github.com/EDAII/Lista4_LucasM_TiagoM/blob/master/grafico.jpeg">

Após a análise dos resultados obtidos, podemos notar que o Radix tem a desvantagem por consumir muita memória, uma vez que duplica o tamanho do vetor.

Devito a isso, podemos notar que os itens ordenados por ms cae drasticamente quando se é utilizado uma grande quantidade de informações. Como exemplo temos a tentativa de ordenação de 20 milhões de itens, no qual o sistema precisou realocar mais de 30 GB de memória no SSD do computador e demorou 18x mais tempo pra ordenar em relação a um vetor de metade do seu tamanho. Lembrando que o tempo gasto deveria ser 2x maior, sendo que o algoritmo Radix Sort é linear.

