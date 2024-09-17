#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int opcao, opcao_abaixo_peso_mulher, opcao_obesidade_morbida_mulher, opcao_obesidade_leve_mulher, opcao_obesidade_moderada_mulher, opcao_obesidade_moderada_homem, opcao_melhoramento_saude_obesidade_moderada_mulher,
    opcao_baixo_peso_homem, opcao_obesidade_leve_homem, opcao_obesidade_morbida_homem, opcao_melhoramento_saude_baixo_mulher, opcao_melhoramento_saude_obesidade_moderada_homem,
    opcao_melhoramento_saude_leve_mulher, opcao_melhoramento_saude_obesidade_morbida_mulher, opcao_melhoramento_saude_homem_baixo_peso,
    opcao_melhoramento_saude_homem_obesidade_leve, opcao_melhoramento_saude_homem_obesidade_morbida;

    float peso = 0;
    
    float altura = 0;

    float imc;

    int contador;

    do{

        printf("Bem-vindo ao programa de IMC, escolha uma opcao: \n");
        printf("1 - IMC para mulheres \n");
        printf("2 - IMC para homens \n");
        scanf("%i", &opcao);

    }while(opcao !=1 && opcao !=2);

    switch(opcao){

        case 1:

            printf("Voce escolheu a opcao 'IMC para mulheres' \n");

            do{

                printf("Digite seu peso atual: \n");
                scanf("%f", &peso);

            }while(peso <=0);

            do{

                printf("Digite sua altura: \n");
                scanf("%f", &altura);

            }while(altura <=0);

            imc = peso / (altura * altura);

            printf("Seu imc e: %.2f\n", imc);

            if(imc <=19){

                printf("Comparado com seu imc, seu peso esta abaixo do normal \n");

            }else if(imc >19 && imc <= 23.9){

                printf("Comparado com o seu imc, seu peso esta normal \n");

            }else if(imc >=24 && imc <=28.9){

                printf("Comparado com o seu imc, seu peso esta em obesidade leve \n");

            }else if(imc >=29 && imc <=38.9){

                printf("Comparado com o seu imc, seu peso esta em obesidade moderada \n");

            }else if(imc >39){

                printf("Comparado com o seu imc, seu peso esta em obesidade morbida \n");

            }

            if(imc <=19){

                do{

                    printf("Deseja ver as opcoes para melhorar sua saude tendo baixo peso? \n");
                    printf("1- Sim, desejo ver minhas opcoes \n");
                    printf("2- Nao, nao desejo ver minhas opcoes \n");
                    scanf("%i", &opcao_abaixo_peso_mulher);

                }while(opcao_abaixo_peso_mulher !=1 && opcao_abaixo_peso_mulher !=2);


                switch(opcao_abaixo_peso_mulher){

                    case 1:

                        printf("Voce escolheu a opcao 'Sim, desejo ver minhas opcoes' \n");
                        printf("O sistema nao pode tratar todos os casos possiveis do seu peso abaixo do normal, ademais consulte um medico \n");

                        contador = 0;

                        while(contador != 2){

                            contador++;

                            do{

                                printf("Quais das seguintes opcoes deseja ver primeiro? \n");
                                printf("1- Habitos alimentares \n");
                                printf("2- Atividades fisicas \n");
                                scanf("%i", &opcao_melhoramento_saude_baixo_mulher);

                            }while(opcao_melhoramento_saude_baixo_mulher !=1 && opcao_melhoramento_saude_baixo_mulher !=2);

                            switch(opcao_melhoramento_saude_baixo_mulher){

                                case 1:

                                    printf("Voce escolheu a opcao 'Habitos alimentares' \n\n");
                                    printf("Alimentos ricos em proteina sao grandes aliados: De preferencia as carnes magras, frango e principalmente peixes e ovos, alem de leite e queijos brancos como ricota e minas. \n");
                                    printf("Aposte nas gorduras boas: Amendoim, nozes, amendoa, avela, castanhas, azeite de oliva, linhaca e abacate. \n");
                                    printf("Aumente o consumo de massas: Paes, bolos, mandioca, batata, milho e cereais, lembrando sempre de optar pelas versoes integrais. \n");

                                break;

                                case 2:

                                    printf("Voce escolheu a opcao 'Atividades fisicas' \n\n");
                                    printf("Treinamento de forca: Exercicios como levantamento de peso, flexoes, agachamentos e abdominais ajudam a aumentar a massa muscular. \n");
                                    printf("Exercicios aerobicos leves: Caminhadas, nataçao e ciclismo sao otimos para melhorar a resistencia cardiovascular sem queimar muitas calorias. \n");

                                break;

                            }

                        }

                    break;

                    case 2:

                        printf("Obrigada por usar o nosso sistema! \n");

                    break;

                }

            }else if(imc >=24 && imc <=28.9){

                do{

                    printf("Deseja ver suas opcoes para melhorar sua saude tendo obesidade leve? \n");
                    printf("1- Sim, desejo ver minhas opcoes \n");
                    printf("2- Nao, nao desejo ver minhas opcoes \n");
                    scanf("%i", &opcao_obesidade_leve_mulher);

                }while(opcao_obesidade_leve_mulher !=1 && opcao_obesidade_leve_mulher !=2);

                switch(opcao_obesidade_leve_mulher){

                    case 1:

                        printf("Voce escolheu a opcao 'Sim, desejo ver minhas opcoes' \n");
                        printf("O sistema nao pode tratar todos os casos possiveis do seu peso com obesidade leve, ademais consulte um medico \n");

                        contador = 0;

                        while(contador != 2){

                            contador++;

                            do{

                                printf("Quais das seguintes opcoes voce desejar ver primeiro? \n\n");
                                printf("1- Habitos alimentares \n");
                                printf("2- Atividades fisicas \n");
                                scanf("%i", &opcao_melhoramento_saude_leve_mulher);

                            }while(opcao_melhoramento_saude_leve_mulher !=1 && opcao_melhoramento_saude_leve_mulher !=2);
                             
                            switch(opcao_melhoramento_saude_leve_mulher){

                                case 1:

                                    printf("Voce escolheu a opcao 'Habitos alimentares' \n\n");
                                    printf("Frutas e legumes: Consuma uma variedade de frutas e vegetais diariamente. Eles sao ricos em fibras, vitaminas e minerais, alem de serem baixos em calorias. \n");
                                    printf("Proteinas magras: Inclua fontes de proteinas como frango sem pele, peixe, ovos, tofu, leguminosas (feijao, lentilhas) e iogurte grego. \n");
                                    printf("Gorduras saudaveis: Incorpore gorduras saudaveis provenientes de fontes como abacate, nozes, sementes, azeite de oliva e peixes gordurosos como salmao. \n");

                                break;

                                case 2:

                                    printf("Voce escolheu a opcao 'Atividades fisicas' \n\n");
                                    printf("Hidroginastica: Baixo impacto e trabalha todo o corpo. Ideal para melhorar a resistencia muscular, flexibilidade e ajudar na perda de peso. \n");
                                    printf("Bicicleta estacionaria ou ciclismo: Ajuda a queimar calorias, melhorar a resistencia cardiovascular e fortalecer as pernas. \n");     
                                    printf("Caminhada: Melhora a saude cardiovascular, ajuda na perda de peso. E facil de adaptar ao nivel de condicionamento fisico. Pode comecar com caminhadas curtas e aumentar gradualmente a duracao e a intensidade. \n");

                                break;
                            }
                        }

                    break;

                    case 2:

                        printf("Obrigada por usar o nosso sistema! \n");

                    break;

                }

            }else if(imc >=29 && imc <=38.9){

                do{

                    printf("Deseja ver suas opcoes para melhorar sua saude tendo obesidade moderada? \n");
                    printf("1- Sim, desejo ver minhas opcoes \n");
                    printf("2- Nao, nao desejo ver minhas opcoes \n");
                    scanf("%i", &opcao_obesidade_moderada_mulher);

                }while(opcao_obesidade_moderada_mulher !=1 && opcao_obesidade_moderada_mulher !=2);

                switch(opcao_obesidade_moderada_mulher){

                    case 1:

                        printf("Voce escolheu a opcao 'Sim, desejo ver minhas opcoes' \n");
                        printf("O sistema nao pode tratar todos os casos possiveis do seu peso em obesidade moderada, ademais consulte um medico \n");   

                        contador = 0;

                        while(contador != 2){

                            contador++;

                           do{
                                printf("Quais das opcoes deseja ver primeiro? \n");
                                printf("1 - Habitos alimentares \n");
                                printf("2 - Atividades fisicas \n");
                                scanf("%i", &opcao_melhoramento_saude_obesidade_moderada_mulher);

                            }while(opcao_melhoramento_saude_obesidade_moderada_mulher != 1 && opcao_melhoramento_saude_obesidade_moderada_mulher !=2);

                            switch(opcao_melhoramento_saude_obesidade_moderada_mulher){

                                case 1:

                                    printf("Voce escolheu a opcao 'Habitos alimentares' \n\n");
                                    printf("Incluir, nao excluir: Ao inves de focar em dietas restritivas, pode-se concentrar em incluir novos alimentos saudaveis em sua dieta, como diferentes vegetais, sementes, e graos exoticos, sem remover os alimentos que gosta. \n");
                                    printf("Comer em ambientes incomuns: Comer ao ar livre, em ambientes silenciosos ou meditar por alguns minutos antes de comer. Sao maneiras de focar na atençao plena. \n");
                                    printf("Dietas coloridas e visuais: Fazer da alimentacao uma experiencia estetica ao criar pratos visualmente vibrantes e artisticamente apresentados pode incentivar uma alimentacao consciente. \n");

                                break;

                                case 2:

                                    printf("Voce escolheu a opcao 'Atividades fisicas' \n\n");
                                    printf("Dança com fita: Trabalha a coordenação motora, flexibilidade e promove a queima calorica, alem de ser uma atividade divertida e criativa. \n");
                                    printf("Aqua Zumba: Combina movimentos de dança com a resistencia da agua, que ajuda a reduzir o impacto nas articulacoes. \n");
                                    printf("Aqua Tai Chi: Utiliza movimentos de Tai Chi de forma fluida e lenta na agua, melhorando a flexibilidade e o equilibrio. \n");

                                break;
                            }
                        } 

                    break;

                    case 2:

                        printf("Obrigado por usar nosso sistema! \n");

                    break;
                }


            }else if(imc >39){

                do{

                    printf("Deseja ver suas opcoes para melhorar sua saude tendo obesidade morbida? \n");
                    printf("1- Sim, desejo ver minhas opcoes \n");
                    printf("2- Nao, nao desejo ver minhas opcoes \n");
                    scanf("%i", &opcao_obesidade_morbida_mulher);

                }while(opcao_obesidade_morbida_mulher !=1 && opcao_obesidade_morbida_mulher !=2);

                switch(opcao_obesidade_morbida_mulher){

                    case 1:

                        printf("Voce escolheu a opcao 'Sim, desejo ver minhas opcoes' \n");
                        printf("O sistema nao pode tratar todos os casos possiveis do seu peso em obesidade morbida, ademais consulte um medico \n");    

                        contador = 0;

                        while(contador != 2){

                            contador++;

                            do{

                                printf("Quais das opcoes voce deseja ver primeiro? \n\n");
                                printf("1- Habitos alimentares \n");
                                printf("2- Atividades fisicas \n");
                                scanf("%i", &opcao_melhoramento_saude_obesidade_morbida_mulher);

                            }while(opcao_melhoramento_saude_obesidade_morbida_mulher !=1 && opcao_melhoramento_saude_obesidade_morbida_mulher !=2);

                            switch(opcao_melhoramento_saude_obesidade_morbida_mulher){

                                case 1:

                                    printf("Voce escolheu a opcao 'Habitos Alimentares' \n\n");
                                    printf("Controle das porcoes: Reduzir gradualmente o tamanho das porcoes pode ajudar a controlar a ingestao calorica. Usar pratos menores e comer devagar pode ajudar a sentir-se satisfeita com menos comida. \n");
                                    printf("Alimentos ricos em nutrientes: Priorize alimentos densos em nutrientes, como frutas, legumes, verduras, graos integrais e proteinas magras. \n");
                                    printf("Reducao de acucares e alimentos processados: Limitar o consumo de açucares refinados, bebidas acucaradas, fast food e alimentos ultraprocessados ajuda a controlar o peso e melhorar a saude em geral. \n");
        
                                break;

                                case 2:

                                    printf("Voce escolheu a opcao 'Atividades Fisicas' \n\n");
                                    printf("Exercicios de baixo impacto: Exercicios como bicicleta ergometrica, eliptico e remo sao atividades de baixo impacto que podem ser adaptadas ao nivel de condicionamento fisico de cada pessoa. \n");
                                    printf("Atividades diarias: Atividades como subir escadas, jardinagem, limpar a casa ou passear com o cachorro tambem contam como exercicios fisicos e podem ser um bom ponto de partida. \n");
                                    printf("Exercicios sentados: Para pessoas com mobilidade muito limitada, exercicios feitos sentados, como levantar e abaixar os bracos, levantar as pernas ou usar faixas elasticas, podem ser eficazes. \n");

                                break;
                            }

                        }                

                    break;

                    case 2:

                        printf("Obrigada por usar o nosso sistema! \n");

                    break;

                }

            }

        break;

        case 2:

            printf("Voce escolheu a opcao 'IMC para homens' \n");

            do{

                printf("Digite seu peso: \n");
                scanf("%f", &peso);

            }while(peso <=0);

            do{

                printf("Digite sua altura: \n");
                scanf("%f", &altura);

            }while(altura <=0);

            imc = peso / (altura * altura);

            printf("Seu imc e: %.2f\n", imc);

            if(imc <20){

                printf("Comparado com seu imc, seu peso esta abaixo do normal \n");

            }else if(imc >=20 && imc <=24.9){

                printf("Comparado com seu imc, seu peso esta normal \n");

            }else if(imc >=25 && imc <=29.9){

                printf("Comparado com seu imc, seu peso esta em obesidade leve \n");

            }else if(imc >=30 && imc <=39.9){

                printf("Comparado com seu imc, seu peso esta em obesidade moderada \n");

            }else if(imc >39.9){

                printf("Comparado com seu imc, seu peso esta em obesidade morbida \n");

            }

            if(imc<20){

                do{

                    printf("Deseja ver as opcoes para melhorar sua saude tendo baixo peso? \n");
                    printf("1- Sim, desejo ver minhas opcoes \n");
                    printf("2- Nao, nao desejo ver minhas opcoes \n");
                    scanf("%i", &opcao_baixo_peso_homem);

                }while(opcao_baixo_peso_homem !=1 && opcao_baixo_peso_homem !=2);

                switch(opcao_baixo_peso_homem){

                    case 1:

                        printf("Voce escolheu a opcao 'Sim, desejo ver minhas opcoes' \n\n");
                        printf("O sistema nao pode tratar todos os casos possiveis do seu peso abaixo do normal, ademais consulte um medico \n");

                        contador = 0;

                        while(contador !=2){

                            contador++;

                            do{

                                printf("Quais das opcoes deseja ver primeiro? \n\n");
                                printf("1 - Habitos Alimentares \n");
                                printf("2 - Atividades Fisicas \n");
                                scanf("%i", &opcao_melhoramento_saude_homem_baixo_peso);

                            }while(opcao_melhoramento_saude_homem_baixo_peso !=1 && opcao_melhoramento_saude_homem_baixo_peso !=2);

                            switch(opcao_melhoramento_saude_homem_baixo_peso){

                                case 1:
                                
                                    printf("Voce escolheu a opcao 'Habitos alimentares' \n\n");
                                    printf("Consuma mais calorias do que gasta: Para ganhar peso, e essencial consumir mais calorias do que voce queima. \n");
                                    printf("Hidratação adequada: Beber agua é fundamental, mas evite consumir grandes quantidades de liquidos antes das refeicoes, pois isso pode reduzir o apetite. \n");
                                    printf("Evitar alimentos processados: Evite calorias vazias, como alimentos ricos em acucares refinados e gorduras saturadas, que podem levar ao ganho de gordura corporal, mas nao contribuem para uma nutricao adequada. \n");

                                break;

                                case 2:

                                    printf("Voce escolheu a opcao 'Atividades fisicas' \n\n");
                                    printf("Exercicios com Peso Livre: Agachamentos, levantamento terra, supino, remadas e desenvolvimentos sao excelentes para construir massa muscular. \n");
                                    printf("Treinamento de peso corporal: Flexoes e Variantes: Flexoes classicas, flexoes diamante (para triceps), flexoes inclinadas e declinadas sao eficazes para o desenvolvimento do tronco. \n");
                                    printf("Caminhada ou corrida leve: Se o objetivo e ganhar peso, atividades aerobicas de longa duracao devem ser limitadas, mas caminhadas ou corridas leves podem ser incorporadas para melhorar o condicionamento fisico sem prejudicar o ganho de massa muscular. \n");

                                break;
                            }

                        }

                    break;

                    case 2:

                        printf("Obrigada por usar nosso sistema! \n");

                    break;

                }


            }else if(imc >=25 && imc <=29.9){

                do{

                    printf("Deseja ver suas opcoes tendo obesidade leve? \n\n");
                    printf("1 - Sim, desejo ver minhas opcoes \n");
                    printf("2 - Nao desejo ver minhas opcoes \n");
                    scanf("%i", &opcao_obesidade_leve_homem);

                }while(opcao_obesidade_leve_homem !=1 && opcao_obesidade_leve_homem !=2);

                switch(opcao_obesidade_leve_homem){

                    case 1:

                        printf("Voce escolheu a opcao 'Sim, desejo ver minhas opcoes' \n");
                        printf("O sistema nao pode tratar todos os casos possiveis do seu peso em obesidade leve, ademais consulte um medico \n");

                        contador = 0;

                        while(contador !=2){

                            contador++;

                            do{

                                printf("Quais das opcoes deseja ver primeiro? \n");
                                printf("1 - Habitos Alimentares \n");
                                printf("2 - Atividades Fisicas \n");
                                scanf("%i", &opcao_melhoramento_saude_homem_obesidade_leve);

                            }while(opcao_melhoramento_saude_homem_obesidade_leve !=1 && opcao_melhoramento_saude_homem_obesidade_leve !=2);

                            switch(opcao_melhoramento_saude_homem_obesidade_leve){

                                case 1:

                                    printf("Voce escolheu a opcao 'Habitos Alimentares' \n\n");
                                    printf("Alimentação balanceada: Priorize alimentos naturais: Legumes, verduras, frutas, graos integrais e proteinas magras devem ser a base da dieta. \n");
                                    printf("Reduza o consumo de alimentos ultraprocessados: Evite alimentos como biscoitos, salgadinhos, fast food e refrigerantes, que sao ricos em calorias vazias e pobres em nutrientes. \n");
                                    printf("Leve lanches saudaveis: Tenha opçaes saudaveis a mao, como frutas, iogurte natural ou castanhas, para evitar a tentacao de lanches menos saudaveis. \n");

                                break;

                                case 2:

                                    printf("Voce escolheu a opcao 'Atividades Fisicas' \n\n");
                                    printf("Exercicios na agua: Hidroginastica combina os beneficios da natacao com a resistencia da agua, proporcionando um treino eficaz e de baixo impacto. \n");
                                    printf("Exercicio divertido e eficaz: A danca, como Zumba ou aulas de dança aerobica, oferece uma forma divertida de aumentar a frequencia cardiaca e queimar calorias. \n");
                                    printf("Manutencao da flexibilidade: Alongamentos regulares ajudam a melhorar a flexibilidade, reduzir o risco de lesoes e aliviar dores musculares apos outras atividades fisicas. \n");

                                break;
                            }

                        }

                    break;

                    case 2:

                        printf("Obrigada por usar nosso sistema! \n");

                    break;

                }

            }else if(imc >=30 && imc <=39.9){

                do{

                    printf("Deseja ver suas opcoes tendo obesidade moderada? \n");
                    printf("1 - Sim, desejo ver minhas opcoes \n");
                    printf("2 - Nao desejo ver minhas opcoes \n");
                    scanf("%i", &opcao_obesidade_moderada_homem);

                }while(opcao_obesidade_moderada_homem !=1 && opcao_obesidade_moderada_homem !=2 );

                switch(opcao_obesidade_moderada_homem){

                    case 1:

                        printf("Voce escolheu a opcao 'Sim, desejo ver minhas opcoes' \n");
                        printf("O sistema nao pode tratar todos os casos possiveis do seu peso em obesidade moderada, ademais consulte um medico \n");

                        contador = 0;

                        while(contador !=2){

                            contador++;

                           do{
                                printf("Quais das opcoes deseja ver primeiro? \n");
                                printf("1 - Habitos Alimentares \n");
                                printf("2 - Atividades Fisicas \n");
                                scanf("%i", &opcao_melhoramento_saude_obesidade_moderada_homem);

                            }while(opcao_melhoramento_saude_obesidade_moderada_homem !=1 && opcao_melhoramento_saude_obesidade_moderada_homem !=2);


                            switch(opcao_melhoramento_saude_obesidade_moderada_homem){


                                case 1:

                                    printf("Voce escolheu a opcao 'Habitos alimentares' \n\n");
                                    printf("Alimentacao com intervalos de exercicios: Dividir uma refeicao em pequenas porcoes, intercalando com curtos periodos de movimento (como 2-3 minutos de caminhada ou alongamentos leves) entre cada porcao. Essa pratica pode ajudar a melhorar a digestao e aumentar a queima calorica sem precisar fazer grandes exercicios antes ou depois da refeicao. \n");
                                    printf("Combinação de alimentos pelo indice glicemico: Em vez de seguir uma dieta de contagem de calorias, focar na combinacao de alimentos que tenham um baixo impacto no nivel de glicose no sangue. \n");
                                    printf("Comer com a mao nao dominante: Para reduzir o ritmo da alimentacao e aumentar a atencao plena durante as refeicoes, podem tentar comer com a mao nao dominante. Isso naturalmente desacelera o processo, ajudando o cerebro a detectar os sinais de saciedade antes de comer em excesso. \n");

                                break;

                                case 2:

                                    printf("Voce escolheu a opcao 'Atividades fisicas' \n\n");
                                    printf("Polo aquatico recreativo: Em uma piscina rasa ou adaptada pode ser uma excelente maneira de melhorar o condicionamento cardiovascular. Como o jogo e dinamico e envolve natacao, arremessos e defesa, ele mantem a frequencia cardiaca elevada, enquanto a agua alivia o impacto nas articulacoes. \n");
                                    printf("Parkour para iniciantes: Embora o parkour seja conhecido por movimentos acrobaticos avancados, ha variacoes para iniciantes que focam em superar obstaculos urbanos de maneira controlada. Saltos leves, escaladas e movimentos de deslocamento podem ajudar a melhorar a agilidade, forca e confianca. \n");
                                    printf("Capoeira adaptada: Uma versao adaptada com movimentos simplificados pode melhorar a flexibilidade, coordenacao e resistencia, enquanto aumenta a consciencia corporal de maneira divertida e culturalmente rica. \n");

                                break;
                            }

                        }


                    break;

                    case 2:

                        printf("Obrigado por usar nosso sistema! \n");

                    break;
                }


            }else if(imc >39.9){

                do{

                    printf("Deseja ver suas opcoes tendo obesidade morbida? \n");
                    printf("1 - Sim, desejo ver minhas opcoes \n");
                    printf("2 - Nao desejo ver minhas opcoes \n");
                    scanf("%i", &opcao_obesidade_morbida_homem);

                }while(opcao_obesidade_morbida_homem !=1 && opcao_obesidade_morbida_homem !=2 );

                switch(opcao_obesidade_morbida_homem){

                    case 1:

                        printf("Voce escolheu a opcao 'Sim, desejo ver minhas opcoes' \n");
                        printf("O sistema nao pode tratar todos os casos possiveis do seu peso em obesidade morbida, ademais consulte um medico \n");

                        contador = 0;

                        while(contador != 2){

                            contador++;

                            do{

                                printf("Quais das opcoes deseja ver primeiro: \n");
                                printf("1 - Habitos alimentares \n");
                                printf("2 - Atividades fisicas \n");
                                scanf("%i", &opcao_melhoramento_saude_homem_obesidade_morbida);

                            }while(opcao_melhoramento_saude_homem_obesidade_morbida !=1 && opcao_melhoramento_saude_homem_obesidade_morbida !=2);

                            switch(opcao_melhoramento_saude_homem_obesidade_morbida){

                                case 1:

                                    printf("Voce escolheu a opcao 'Habitos alimentares' \n\n");
                                    printf("Consuma mais fibras: Alimentos ricos em fibras, como vegetais, frutas, leguminosas e graos integrais, ajudam a aumentar a saciedade e regular o transito intestinal. \n");
                                    printf("Comece as refeicoes com vegetais: Isso pode ajudar a controlar o apetite e a reduzir a quantidade de alimentos consumidos nas refeicoes. \n");
                                    printf("Evite comer por emocao: Identifique gatilhos emocionais que podem levar a comer sem fome, como estresse, tedio ou ansiedade. Encontre outras formas de lidar com essas emocoes. \n");

                                break;

                                case 2:

                                    printf("Voce escolheu a opcao 'Atividades fisicas' \n\n");
                                    printf("Envolvimento social: A participacao em esportes recreativos pode aumentar a motivacao e ajudar a manter a regularidade. \n");
                                    printf("Exercícios intervalados leves: Combina periodos curtos de exercicios de intensidade moderada com pausas de recuperacao. Por exemplo, alternar entre caminhada rapida e caminhada lenta. \n");
                                    printf("Exercícios de resistência: Exercicios com pesos leves, elasticos de resistencia, ou mesmo com o peso corporal (como agachamentos, elevacoes de perna e flexoes de joelhos) ajudam a aumentar a massa muscular, que por sua vez melhora o metabolismo. \n");

                                break;
                            }
                        }

                    break;

                    case 2:

                        printf("Obrigada por usar nosso sistema! \n");

                    break;

                }
            }

        break;

        default:

            printf("Para melhor aproveitamento do sistema, por favor digite as opcoes corretamente. Obrigada! \n");

        break;
    }

    return 0;

}
