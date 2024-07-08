#include <iostream>
#include <ctime>
#include <conio.h>
#include <iostream>

using namespace std;

void met() {
    cout << "\x1B[34m";

    cout << "🤡 menu cut bot\n" << endl;
    cout << "♛ 𝐔𝐓𝐈𝐋𝐈𝐓𝐀́𝐑𝐈𝐎𝐒 ♛ " << endl;
    cout << "\n  !GITHUB\n";
    cout << "Mostra uma lista de repositórios GitHub úteis\n" << endl;
    cout << "\n !FREE_GAMES\n";
    cout << "Link para baixar jogos grátis\n";
    cout << "\n !FREE_BOOKS\n";
    cout << "Mostra links para livros grátis\n";
    cout << "\n !DATE\n";
    cout << "Mostra a data atual\n";

     cout << "\nGAMES\n" << endl;
     cout << "\n!forca" << endl;
    
    cout << "\x1B[0m";

}

void forca(){

    char let[3] = {'S', 'o', 'l'};
    char l1, l2, l3;

    cout <<"\n dica tem 3 letras e tem no nome de uma planta \n";

    cout << "\nDigite a primeira letra: ";
    cin >> l1;

    cout << "Digite a segunda letra: ";
    cin >> l2;

    cout << "Digite a terceira letra: ";
    cin >> l3;

    if (l1 == let[0] && l2 == let[1] && l3 == let[2]) {
        cout << "（｡>‿‿<｡ ） você ganhou !" << endl;
    }else {
        cout << "ಥ_ಥ voce errou" << endl;
    }

}

void freeg() {
    cout << "\n𝐉𝐎𝐆𝐎𝐒 𝐆𝐑𝐀𝐓𝐈𝐒\n" << endl;
    cout << "\n 𝐀𝐏𝐊\n";

    cout << "\nHOLLOW KNIGHT (APK)\n";

    cout << "\x1B[34m";
    cout << "Link: https://www.mediafire.com/file/0a2mc9igg3h9i18/Hollow_knight.apk/file\n";
    cout << "\x1B[0m";

    cout << "\n 𝐌𝐈𝐍𝐄𝐂𝐑𝐀𝐅𝐓 (APK)\n";

    cout << "\x1B[34m";
    cout << "Link: https://modilimitado.io/pt/minecraft-apk/\n";
    cout << "\x1B[0m";
}

void freeb() {



    cout << "\nContos do Pizzaplex #1 - Frágil [CONTO 1].pdf (FNAF)\n";

    cout << "\x1B[34m";
    cout << "Link: https://drive.google.com/file/d/1WYAlZyRlAYwI3EkGLWfkpHPzHX0SsCUP/view?usp=drivesdk\n";
    cout << "\x1B[0m";

    cout << "\nphp_com_mysql.pdf\n"
    ;
    cout << "\x1B[34m";
    cout << "Link: https://drive.google.com/file/d/1UIj-i0ZKeT1H74K0PxoJocjN3BrJy9yA/view?usp=drivesdk\n";cout <<
    "\x1B[0m";
}

void GitHub() {
    cout << "\nGitHub repositórios\n";
    cout << "\nNANO IDE\n";
    cout << "Base visual para IDE feito com HTML e CSS\n";
    cout << "\nARSERVO\n";
    cout << "Mais de 40 projetos para iniciar programação\n";
    cout << "\nLivros de programação grátis\n";
    cout << "Estude programação de graça\n";


}

void date() {
    std::time_t rawtime;
    std::tm* timeinfo;
    std::time(&rawtime);
    timeinfo = std::localtime(&rawtime);
    cout << "\nData atual:\n" << std::asctime(timeinfo);
}

int main() {
    cout << "Olá, eu sou o cut bot!" << endl;

    while (true) {
        string op;
        cout << "$xt";
        cin >> op;

        if (op == "!menu") {
            met();
        } else if (op == "!GitHub") {
            GitHub();
        } else if (op == "!free_games") {
            freeg();
        } else if (op == "!free_books") {
            freeb();
        } else if (op == "!date") {
            date();
        } else if (op == "!forca") {
            forca();
        } else {
            cout << "😅 Comando não reconhecido. Digite '!menu' para ver a lista de comandos." << endl;
        }
     }

    return 0;
}
    
