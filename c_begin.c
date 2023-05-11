// установить компилятор с можно с сайта: https://gcc.gnu.org/
// там нужно выбрать сбоку в разделе download Binaries, потом скачать компилятор minGW
// ставим. потом нужно выбрать пакеты. При отметке нужных нам пакетов будут отмечаться и другие пакеты автоматом
// список компонентов:
// minGW32-gcc-bin  - это основной компонент для С
// minGW32-gcc-g++-bin - отсюда берется линкер
// minGW32-make-bin
// minGW32-gdb-bin - это для дебагинга
// потом жмем installation, apply changes, aply
// потом в переменных среды нужно прописать путь к компилятору в системной переменной path

#include <stdio.h>

int main(void)
{
    printf("Hello, world!\n");
    return 0;
}
// ctrl + ~ это вызов терминала
// если компилировать через командную строку, то будет создаваться файл exe, но можно сделать так чтобы в vscode работала компиляция автоматом
// установили расширение c/c++ intellisense
// установили расширение code runner
// ctrl + alt + n это запуск С кода с
// теперь нужно настроить компилятор под стандарт С99
// gcc -std=c99 - outputfilesourcefile.c
// -std=c99 это нужно прописать для компилятора gcc в json файле tasks в папке .vscode в строке "args": после квадратных скобок
// и потом нужно нажать file preferences, setting, в поиске набрать code runner run in terminal и поставить галочки в code runner in terminal. И появится json файл settings с кодом     "code-runner.runInTerminal": true
// потом в поиске пишем run code configuration и ищем code runner executor map и нажимаем edit in settings json. Там нужно найти строку с языком С и прописать стандарт -std=c99 после "c": "cd $dir && gcc. Также в строке "code-runner.runInTerminal": true, можно вместо true написать false.
