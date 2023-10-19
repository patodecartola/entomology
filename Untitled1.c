#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
int pergunta(int op1, int op2);

main(){
    setlocale(LC_ALL, "portuguese");
    int pergunta[22], i;
    char enunciado[][300] = {
       "pressione 1 se: Asas anteriores de aspecto robusto, duro e sem as nervuras das asas visiveis se as nervuras forem visiveis, o inseto tem um par de patas diferente dos outros inseto sem asas\npressione 2 se: Asas anteriores delicadas, membranosas e com nervuras bem visiveis",
        "pressione 1 se o inseto so tem Um par de asas (anteriores) \n pressione 2 se o inseto tem Dois pares de asas (anteriores e posteriores)",
        "pressione 1 se o inseto tem Antenas formadas por três segmentos ou menos \n pressione 2 se o inseto tem Antenas formadas por mais de três segmentos",
        "pressione 1 se o inseto tem Antenas curtas (menores ou iguais à cabeça) \n pressione 2 se o inseto tem Antenas compridas (maiores do que a cabeça)",
        "pressione 1 se o inseto tem Asas anteriores ovais \n pressione 2 se o inseto tem Asas anteriores triangulares",
        "pressione 1 se o inseto tem Boca com grandes mandíbulas \n pressione 2 se o inseto tem boca em forma de sugador ou picador",
        "pressione 1 se o inseto tem Asas anteriores mais estreitas que as posteriores \n pressione 2 se o inseto tem Asas anteriores e posteriores semelhantes",
        "pressione 1 se o inseto tem Asas sem revestimento, translucidas (deixam passar a luz) \n pressione 2 se o inseto tem Asas revestidas, opacas (que dificultam a passagem da luz)",
        "pressione 1 se o inseto tem Asas com poucas nervuras, quase sem nervuras transversais \n pressione 2 se o inseto tem Asas com aspeto de rede, pela presença de muitas nervuras transversais e longitudinais",
        "pressione 1 se o inseto tem Estrangulamento entre o tórax e o abdómen (com cintura) \n pressione 2 se o inseto Sem estrangulamento entre o tórax e o abdómen (sem cintura)",
        "pressione 1 se o inseto tem Cabeça sem prolongamento \n pressione 2 se o inseto tem Parte da frente da cabeça prolongada num focinho",
        "pressione 1 se o inseto tem Asas cobertas por escamas \n pressione 2 se o inseto tem Asas cobertas por pelos (sem escamas)",
        "pressione 1 se o inseto tem Antenas em forma de maça, ou seja, que terminam numa dilatação arredondada \n pressione 2 se o inseto tem Antenas de várias formas, mas nunca em forma de maça",
        "pressione 1 se o inseto tem Terceiro par de patas com forma e tamanho semelhantes aos restantes \n pressione 2 se o inseto tem Terceiro par de patas comprido e adaptado ao salto",
        "pressione 1 se o inseto tem Antenas compridas, com tamanho superior ao do corpo \n pressione 2 se o inseto tem Antenas de tamanho claramente inferior ao do corpo",
        "pressione 1 se o inseto tem asas pressione 2 se o inseto não tem asas",
        "pressione 1 se o inseto tem Forma do corpo semelhante a um pau pressione 2 se o inseto tem Corpo sem aspeto de pau ",
        "pressione 1 se o inseto tem Abdómen sem apêndices, ou, quando os tem, não são em forma de pinça presione 2 se o inseto tem Abdómen a terminar em pinças",
        "pressione 1 se o inseto tem Final do abdómen com apêndices visíveis ou muito curtos, pouco visíveis (cercos) pressione 2 se o inseto tem Final do abdómen sem apêndices",
        "pressione 1 se o inseto tem Três pares de patas com aspeto semelhante \n pressione 2 se o inseto tem Primeiro par de patas mais largo e espinhoso do que os restantes e com aspeto de garras",
        "pressione 1 se o inseto tem Boca em forma de estilete (ou agulha) \n pressione 2 se o inseto tem Boca com mandíbulas visíveis",
        "pressione 1 se o inseto tem Asas anteriores divididas em duas áreas: mais perto da cabeça, a asa tem um aspeto robusto e forte; na extremidade, a asa é mais delicada, translúcida e tem as nervuras visíveis pressione 2 se o inseto tem Asas anteriores com o mesmo aspeto em toda a sua extensão",


   };

   printf("%s",&enunciado[12][0]);
}

int pergunta(int op1, int op2){
    char resposta;

}
