/*
 #ifndef, define - макросы, благодаря которым исключается ошибка повторного включения
 заголовочного файла. Например, foo1.h включает в себя foo2.h, а foo2.h включает foo1.h. В таком
 случае произойдёт ошибка компиляции, в которой будет написано, что для каждой функции существует
 2 сигнатуры. #ifndef, #define защищают от этого. Однако есть и более новый способ защиты -
 #pragma once. Достаточно написать эту строку вверху заголовочного файла и всё хорошо. Но этот
 способ работает не во всех компиляторах.
 */
#ifndef SORTS_FOO_H
#define SORTS_FOO_H

/*
 Пишем сигнатуру функции в заголовочном файле. Можно также написать сигнатуру
 без названий переменных-аргументов, написав только типы данных:
 int sum(int, int);
 */
int sum(int a, int b);

#endif //SORTS_FOO_H