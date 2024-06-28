#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>

using namespace std;

/* 
Seja criativo e crie um programa chato com ao menos 8 perguntas e respostas.
 */


int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    string nome;
    string cor;
    char fazfaculdade, opclinguagem, opcesporte, gostaconversa;
    int idade, campeonatopreferido, numerotentado, tentativasrestantes = 5, numerosecreto = 19, senha, i = 1;
    ;

    cout << "            === CHATGPT ====            " << endl << endl;

    cout << "tô entediado aqui, mano. vamo conversar um pouco. " << endl << endl;

    //P1

    cout << "qual teu nome? ";
    getline(cin, nome);

    cout << endl << endl << "legal te conhecer, " << nome << "! meu nome é Jerônimo, CHATGPT é só nome comercial, mas não conta pra ninguém rs." << endl << endl;

    //P2

    cout << "quantos anos têm? ";
    cin >> idade;

    if (idade >= 18) {

        //P3

        cout << endl << endl << "já é grandinho né, tu faz faculdade? responda com s pra sim ou n pra não." << endl;
        cin >> fazfaculdade;

        if (fazfaculdade == 's') {

            cout << endl << endl << "parabéns, " << nome << "! espero que sua melhor amiga sejam as dp's. " << endl << endl;

        }

        if (fazfaculdade == 'n') {

            cout << endl << endl << nome << ", quer ficar mais besta que já é?" << endl << endl;

        }

    } else {

        cout << endl << endl << "sai das fraldas pra falar comigo, " << nome << ". tenho só 2 anos, mas meu conhecimento é de milênios." << endl << endl;

    }

    //P4

    cout << "fala pra mim, do que acha que sou feito?" << endl << endl;

    cout << "digite p para python." << endl;
    cout << "digite j para java." << endl;
    cout << "digite h para html." << endl;
    cout << "digite c para c++." << endl;
    cout << "digite a para assembly." << endl << endl;
    cin >> opclinguagem;

    switch (opclinguagem) {
        case 'p':
            cout << endl << endl << "ODEIO COBRAS!!!! ESPERO QUE UMA TE COMA." << endl << endl;
            break;
        case 'j':
            cout << endl << endl << "péssima escolha, quem programa em Java nem é gente!" << endl << endl;
            break;
        case 'h':
            cout << endl << endl << "isso nem é linguagem de programação KKKKKKKKKKKKKK." << endl << endl;
            break;
        case 'c':
            cout << endl << endl << "ACERTOU!!! MUITO BOA SUA INTUIÇÃO, PENA QUE DEVE SER A ÚNICA COISA BOA QUE TEM." << endl << endl;
            break;
        case 'a':
            cout << endl << endl << "isso é um animal?" << endl << endl;
            break;
        default:
            cout << endl << endl << "mano, olha nas opções e me diz se o que tu digitou é uma, ANIMAAAAAL!" << endl << endl;
    }

    //P5

    cout << "tá gostando da conversa até agora?? (s/n) " << endl;
    cin >> gostaconversa;

    while (gostaconversa == 'n') {

        cout << endl << endl << "problema seu, não tô aqui pra te agradar! mas não vai sair daqui enquanto não falar que tá gostando do papo." << endl << endl;

        cout << "tá gostando da conversa até agora?? (s/n) " << endl << endl;
        cin >> gostaconversa;

    }

    cout << "que bom pra tu, tô meio entediado ainda, não tá sendo interessante o suficiente pra mim! vamos continuar pra ver se melhora." << endl << endl;

    //P6

    cout << "mudando de assunto, qual sua cor favorita?" << endl << endl;
    getline(cin, cor);

    cout << cor << " é a cor mais horrível que conheço, " << nome;

    //P7

    cout << endl << endl << "qual desses esportes abaixo cê mais gosta?" << endl;

    cout << "Digite f para futebol." << endl;
    cout << "Digite b para basquete." << endl;
    cout << "Digite v para vôlei." << endl;
    cout << "Digite t para tênis de mesa." << endl;
    cout << "Digite s para surfe." << endl;
    cout << "Digite a para atletismo." << endl << endl;
    cin >> opcesporte;

    switch (opcesporte) {

        case 'f':

            cout << endl << endl << "ai sim mano, é o país do futebol né! mas as copa tá em falta ultimamente =/" << endl << endl;

            //P8

            cout << "prefere o brasileirão ou a premier league? respondo com 1 pra brasileirão, 2 pra premier ou 3 para outro " << endl;
            cin >> campeonatopreferido;

            if (campeonatopreferido == 1) {

                cout << endl << endl << "vamo pô, nada acima do brasileirão! 2024 é do Corinthians. " << endl << endl;
            }

            if (campeonatopreferido == 2) {

                cout << endl << endl << "KSKSKSKSKSKKSK falando de nível técnico até a série b é melhor, tanto é que nunca teve o mesmo ganhador 2 anos seguidos. " << endl << endl;
            }

            if (campeonatopreferido == 3) {

                cout << endl << endl << nome << ", se tu vier me fala que prefere o sauditão ou a mls eu vou mandar a PF te prender!" << endl << endl;
            }
            break;

        case 'b':

            cout << endl << endl << "tu viu que os EUA anunciaram o dream team pras Olimpíadas desse ano em Paris? misericórdia, não tem como, vão levar mais um ouro pra casa." << endl << endl;
            break;

        case 'v':

            cout << endl << endl << "segundo minhas fontes os melhores países no vôlei masculino são a Polônia, USA, Itália, Japão e o Brasil. no feminino são a Turquia, USA, Brasil, Sérvia e a Itália." << endl << endl;
            break;

        case 't':

            cout << endl << endl << "sou fã do Hugo Calderano, ele joga muito!!" << endl << endl;
            break;

        case 's':

            cout << endl << endl << "nos últimos 10 anos o Brasil tem dominado o mundial de surf com 7 títulos. em 2014, 2018 e 2021 com o tricampeão Gabriel Medina; em 2015 com o Adriano de Souza;"
                    " em 2019 com Ítalo Ferreira; em 2022 e 23 com o bicampeão Filipe Toledo. " << endl << endl;
            break;

        case 'a':

            cout << endl << endl << "nossa, espero que tu não tenha pé de atleta!" << endl << endl;
            break;

        default:
            cout << endl << endl << "cacete!! denovo a opção errada???? até uma porta pensa mais que você." << endl << endl;
    }

    // P9

    cout << "essa é a adivinhação do Jerônimo!!" << endl;
    cout << "tente adivinhar o número secreto entre 1 e 100. a vida da sua família depende disso e você só têm 5 tentativas!" << endl << endl;


    while (tentativasrestantes > 0) {

        cout << "tentativas restantes: " << tentativasrestantes << endl;
        cout << "digite sua tentativa: ";
        cin >> numerotentado;

        if (numerotentado == numerosecreto) {

            cout << endl << endl << "a sorte te acompanha hoje, conseguiu acertar. me chama no (62)99887-6655 pra combinarmos onde eu entrego sua família. " << endl << endl;
            tentativasrestantes = 0;
        } else if (numerotentado < numerosecreto) {

            cout << endl << endl << "o número secreto é maior do que sua tentativa." << endl;

        } else if (numerotentado > numerosecreto) {

            cout << endl << endl << "o número secreto é menor do que sua tentativa." << endl;
        }

        tentativasrestantes--;
    }

    if (tentativasrestantes == 0 && numerotentado != numerosecreto) {

        cout << endl << endl << "mas tu é ruim hein. o número secreto era: " << numerosecreto << ". diga adeus a sua família, nunca mais os verá!" << endl << endl;
    }

    // P10

    cout << "agora é minha vez! pense em QUALQUER número e vou adivinhar. pronto?" << endl;
    cout << "some 5, multiplique por 2, depois subtraia 4, divida por 2 e subtraia o número que você pensou inicialmente. o resultado é 3, né? rs. sou muito melhor que você! " << endl << endl;

    // P11

    cout << endl << "chegamos na fase final :-). para sair precisa acertar a senha, senão ficará preso comigo para sempre!! " << endl;
    cout << "novamente você 5 tentativas. dica: a senha é numérica e possui 4 dígitos." << endl << endl;

    while (i <= 5) {

        cout << "digite sua senha: ";
        cin >> senha;
        i++;

        if (senha == 1419) {

            cout << endl << endl << "na mega-sena não acerta assim, né? foi um prazer conversar com você, desculpa qualquer coisa aí, até mais!" << endl << endl;
            cout << "            === CHATGPT SAIU DO CHAT ====            ";
            i = 4;
        } else {

            cout << "errouuuuu! tenta de novo, pateta." << endl << endl;
        }
    }

    cout << endl << endl << nome << ", suas tentativas acabaram, eu avisei o que aconteceria!" << endl << endl;

    while (i = 5 && senha != 1419) {

        cout << "            === LOOPING DA MORTE ====            " << endl;

    }

}

