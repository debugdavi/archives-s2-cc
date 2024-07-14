#include <stdio.h>
#include <string.h>
void Doc(){
    printf("---------------Bom dia v1---------------\n");
    printf("----------------<opcpes>----------------\n");
    printf("--help ou -h (documentação do software) \n");
    printf("--version ou -v (versão do software)    \n");
    printf("--pt ou -1 (idioma portugues)           \n");
    printf("--en ou -2 (idioma ingles)              \n");
    printf("--es ou -3 (idioma espanhol)            \n");
    printf("--fr ou -4 (idioma frances)             \n");
    printf("--it ou -5 (idioma italiano)            \n");
    printf("--co ou -6 (idioma coreano)             \n");
    printf("--jp ou -7 (idioma japones)             \n");
    printf("--ru ou -8 (idioma russo)               \n");
}

void ErrorNoParam(){   //error type: no parameters (nomenclatura das funcoes)
    printf("ERROR: informe uma opcao\n");
    Doc();
}
void ErrorManyOptions(){   //error type: wrong option or many options (nomenclatura das funcoes)
    printf("ERROR: parametro invalido. Tente usar --help ou -h\n");
}

void Version(){
    printf("Bom dia versao 1.0\n");
}

int OptionstoInt(const char *arg){
    if(strcmp(arg, "-1") == 0 || strcmp(arg, "--pt") == 0)
        return 1;
    else if(strcmp(arg, "-2") == 0 || strcmp(arg, "--en") == 0)
        return 2;
    else if(strcmp(arg, "-3") == 0 || strcmp(arg, "--es") == 0)
        return 3;
    else if(strcmp(arg, "-4") == 0 || strcmp(arg, "--fr") == 0)
        return 4;
    else if(strcmp(arg, "-5") == 0 || strcmp(arg, "--it") == 0)
        return 5;
    else if(strcmp(arg, "-6") == 0 || strcmp(arg, "--co") == 0)
        return 6;
    else if(strcmp(arg, "-7") == 0 || strcmp(arg, "--jp") == 0)
        return 7;
    else if(strcmp(arg, "-8") == 0 || strcmp(arg, "--ru") == 0)
        return 8;
    else if(strcmp(arg, "-h") == 0 || strcmp(arg, "--help") == 0)
        return 9;
    else if(strcmp(arg, "-v") == 0 || strcmp(arg, "--version") == 0)
        return 10;
    else        //ERROR errowromop()
        return 11;
}

void printBomdia(int bomdia){
    int option = bomdia;

    switch(option){
        case 1: printf("Bom dia!\n");
                break;
        case 2: printf("Good Morning!\n");
                break;
        case 3: printf("¡Buenos días!\n");
                break;
        case 4: printf("Bonjour!\n");
                break;
        case 5: printf("Buongiorno!!\n");
                break;
        case 6: printf("안녕하세요!\n");
                break;
        case 7: printf("おはようございます！\n");
                break;
        case 8: printf("Доброе утро!\n");
                break;
        case 9:  Doc();
                 break;
        case 10: Version();
                 break;
        case 11: ErrorManyOptions();
                 break;
    }

}

int main(int argc, char **argv){
    int option;
    if(argc <= 1){
        ErrorNoParam();
    }
    if(argc >= 3){
        ErrorManyOptions();
    }

    option = OptionstoInt(argv[1]);
    printBomdia(option);
}
