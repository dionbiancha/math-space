int titulo_jogo()
{
    gotoxy(10,2); printf (BLU".___  ___.      ___   .___________. __    __          _______..______      ___       ______  _______ ");
    gotoxy(10,3); printf (BLU"|   \\/   |     /   \\  |           ||  |  |  |        /       ||   _  \\    /   \\     /      ||   ____|");
    gotoxy(10,4); printf (BLU"|  \\  /  |    /  ^  \\ `---|  |----`|  |__|  |       |   (----`|  |_)  |  /  ^  \\   |  ,----'|  |__   ");
    gotoxy(10,5); printf (BLU"|  |\\/|  |   /  /_\\  \\    |  |     |   __   |        \\   \\    |   ___/  /  /_\\  \\  |  |     |   __|  ");
    gotoxy(10,6); printf (BLU"|  |  |  |  /  _____  \\   |  |     |  |  |  |    .----)   |   |  |     /  _____  \\ |  `----.|  |____ ");
    gotoxy(10,7); printf (BLU"|__|  |__| /__/     \\__\\  |__|     |__|  |__|    |_______/    | _|    /__/     \\__\\ \\______||_______|");
}

int grama_jogo()
{
    gotoxy(1,26); printf (GREEN"____^/\\___^--____/\\____O______________/\\/\\---/\\___________---__________________^/\\___^--____/\\____O__________________/\\");
    gotoxy(1,27); printf (GREEN"   /\^   ^  ^    ^                  ^^ ^  '\ ^          ^       ---   /\^   ^  ^    ^                  ^^ ^  '\ ^          ^   ");
    gotoxy(1,28); printf (GREEN"   --  __                      ___--  ^  ^                         --  __   --  __                      ___--  ^  ^            ");

}

int planet_jogo()
{
    gotoxy(1,16); printf (BLU"                 *       +");
    gotoxy(1,17); printf (BLU"           '                  |");
    gotoxy(1,18); printf (BLU"       ()    .-.,=и-ии=.    - o -");
    gotoxy(1,19); printf (BLU"             '=/_       \\     |");
    gotoxy(1,20); printf (BLU"          *   |  '=._    |");
    gotoxy(1,21); printf (BLU"               \\     `=./`,        '");
    gotoxy(1,22); printf (BLU"            .   '=.__.=' `='      *");
    gotoxy(1,23); printf (BLU"   +                         +");
    gotoxy(1,24); printf (BLU"        O      *        '       .");

}

int astronauta()
{
        gotoxy(10,14); printf (C_BLACK"        _..._");
        gotoxy(10,15); printf (C_BLACK"      .'     '.      _");
        gotoxy(10,16); printf (C_BLACK"     /    .-  -\\   _/ \\");
        gotoxy(10,17); printf (C_BLACK"   .-|   /:.   |  |   |");
        gotoxy(10,19); printf (C_BLACK"   |  \\  |:.   /.-'-./");
        gotoxy(10,20); printf (C_BLACK"   | .-'-;:__.'    =/");
        gotoxy(10,22); printf (C_BLACK"   .'=  *=|VASA _.='");
        gotoxy(10,23); printf (C_BLACK"  /   _.  |    ;");
        gotoxy(10,24); printf (C_BLACK" ;-.-'|    \\   |");
        gotoxy(10,25); printf (C_BLACK"/   | \\    _\\  _\\");
        gotoxy(10,26); printf (C_BLACK"\\__/'._;.  ==' ==\\");
        gotoxy(10,27); printf (C_BLACK"         \\    \\   |");
        gotoxy(10,28); printf (C_BLACK"         /    /   /");
        gotoxy(10,29); printf (C_BLACK"         /-._/-._/");
        gotoxy(10,30); printf (C_BLACK"         \\   `\\  \\");
        gotoxy(10,31); printf (C_BLACK"          `-._/._/");
}

int professor()
{
        gotoxy(85,4); printf (C_BLACK"              ,.,_,.");
        gotoxy(85,5); printf (C_BLACK"           ,.''     \\");
        gotoxy(85,6); printf (C_BLACK"          '          '   ");
        gotoxy(85,7); printf (C_BLACK"        /'           |");
        gotoxy(85,8); printf (C_BLACK"      /_-            | ");
        gotoxy(85,9); printf (C_BLACK"    .'__      _-_    :");
        gotoxy(85,10); printf (C_BLACK"   /__        _-_    :");
        gotoxy(85,11); printf (C_BLACK"  ,_,._     ,_,._~   |___");
        gotoxy(85,12); printf (C_BLACK".'-_ '.'.-.'-_ '.'._-^_  '.");
        gotoxy(85,13); printf (C_BLACK"|  -_ |.| |  -_ | | / |");
        gotoxy(85,14); printf (C_BLACK" ',_,' /  _',_,'_'  /|/");
        gotoxy(85,15); printf (C_BLACK"  .  .|    ',. ._-^  |'");
        gotoxy(85,16); printf (C_BLACK"   ' '.   .'  '.    '/|");
        gotoxy(85,17); printf (C_BLACK" ,'    '''    __'.  \\/ -_");
        gotoxy(85,18); printf (C_BLACK"'_=-..--..--'^  '', : \\. '.");
        gotoxy(85,19); printf (C_BLACK"     ',    .  ,   ,' \\/ |  |-_");
        gotoxy(85,20); printf (C_BLACK"     / ',.. '. '. ,../  |  |  '-_");
        gotoxy(85,21); printf (C_BLACK"   ,'  . \\'.:.''''    .''. '.    ");
        gotoxy(85,22); printf (C_BLACK" ,'    | |\\       ,../   |  |    ");
        gotoxy(85,23); printf (C_BLACK" |     ' ''.,.''''       ', ',    ");

}

int astronauta_nivel_um()
{
        gotoxy(1,1); printf (C_BLACK"________________________________________________________________________________");
        gotoxy(1,2); printf (C_BLACK"                        |        |");
        gotoxy(1,3); printf (C_BLACK"                        |        |  //                 \\\\ | |");
        gotoxy(1,4); printf (C_BLACK"                        \\        | //                 /_\\\\| |         _.-~");
        gotoxy(1,5); printf (C_BLACK"                         \\       |||                 |  ||/ |     _.-~");
        gotoxy(1,6); printf (C_BLACK"                  ________\\      |||                  \\ ||  |__.-~");
        gotoxy(1,7); printf (C_BLACK"                 /       /~`. ___\\||___________________/||_/______________");
        gotoxy(1,8); printf (C_BLACK"               _/_______/__/]---.               _____               ;:");
        gotoxy(1,9); printf (C_BLACK"              /         /( )/\\   `._____________\\    \\               :");
        gotoxy(1,10); printf (C_BLACK"             /         / /\\ \\    / .=============\\    \\             ::");
        gotoxy(1,11); printf (C_BLACK"            /         / / / /\\   | :            | \\(_)_\\            ::");
        gotoxy(1,12); printf (C_BLACK"           /         / / / /-\\\\ _\\'             | |\\  \\             ::");
        gotoxy(1,13); printf (C_BLACK"          /        /' / / /._/.'_`.             | |/\\  \\            ::");
        gotoxy(1,14); printf (C_BLACK"         /        /  / / / - / _-  \\____________|_/ /\\  \\           ::");
        gotoxy(1,15); printf (C_BLACK"        /       /'  / / /-   |      \\====/\\======= /  \\_ \\           ::");
        gotoxy(1,16); printf (C_BLACK"       /       /   / : (  - -\\       \_(/ /\\    / /    \\ \\           ::");
        gotoxy(1,17); printf (C_BLACK"      /...----'   /  . `. -   \\ -_   _'.\\\\ /|  / /|     \\ \\          ::");
        gotoxy(1,18); printf (C_BLACK"      \\           \\  /`. `._  /\\   _-    \\\\/  / / |      \\ \\        ::");
        gotoxy(1,19); printf (C_BLACK"       \\___________\\/  `. `._..'\\_______.'___/ /| |       \\ \\_       :");
        gotoxy(1,20); printf (C_BLACK"                /`.      `.....' |==========/ / \\ \\        \\_ \\      ::");
        gotoxy(1,21); printf (C_BLACK"               /-_   :  --..___ \\/       / / /   \\ \\         \\ \\_    ::");
        gotoxy(1,22); printf (C_BLACK"               |-._   :          \\      / / /     \\ \\         \\_ \\   ::");
        gotoxy(1,23); printf (C_BLACK"               |-_ '-._\\ - -_   - \\____/_/ /-      \\ \\     __   \\ \\   ::");
        gotoxy(1,24); printf (C_BLACK"         __..--|-      /\\          \====/ /  \\      \\ \\_.-~  \\   \\ \\  ::");
        gotoxy(1,25); printf (C_BLACK" __..--~~.   . |     _.| \\          \\  / /  -     _. \\ \\      \\   \\ \\ ::");
        gotoxy(1,26); printf (C_BLACK" '  .  `   .   |__.-'  |   \\__       \\/ /     _.-    \\_/      /    \\ \\ ::");
        gotoxy(1,27); printf (C_BLACK"  __--~~  . .  |       |____\\ '----___\\/   _.-             _.-      \\ \\::");
        gotoxy(1,28); printf (C_BLACK"________________________________________________________________________________");
}

int antena()
{

gotoxy(1,11); printf (C_BLACK"              (``',");
gotoxy(1,12); printf (C_BLACK"            / `''/");
gotoxy(1,13); printf (C_BLACK"           /    /");
gotoxy(1,14); printf (C_BLACK"        O\/    /");
gotoxy(1,15); printf (C_BLACK"        \,    /");
gotoxy(1,16); printf (C_BLACK"        (    /");
gotoxy(1,17); printf (C_BLACK"       /x`''7/");
gotoxy(1,18); printf (C_BLACK"      (x   //`\\");
gotoxy(1,19); printf (C_BLACK"     / `''7'`\\ \\");
gotoxy(1,20); printf (C_BLACK"    /    /   /()\\");
gotoxy(1,21); printf (C_BLACK"   (    /   `|~~|`");
gotoxy(1,22); printf (C_BLACK"    `'''     |  |");
gotoxy(1,23); printf (C_BLACK"             |  |");
gotoxy(1,24); printf (C_BLACK"             |  |");
gotoxy(1,25); printf (C_BLACK"             |  |");
gotoxy(1,26); printf (C_BLACK"             |  |");
gotoxy(1,27); printf (C_BLACK"           /`    `\\");
gotoxy(1,28); printf (C_BLACK" ,-------'`        `'-------,");
gotoxy(1,29); printf (C_BLACK"`~~~~~~~~~~~~~~~~~~~~~~~~~~~~`");

}

int estrelas()
{
    gotoxy(1,1); printf (BLU" *   .   .'    * ,      .       .  ,     * *   .   .'    * ,      .       .  ,     * *   .   .'    * ,      .       .  ,    ");
    gotoxy(1,2); printf (BLU"   '     .     .  *        *  .'.    '     .     .  *        *  .'.     '     .     .  *        *  .'.   '     .         *  ");
    gotoxy(1,3); printf (BLU"        *       .   *        *          .   *        *       .   *        *     .   *     *       .   *        *          . ");
}


