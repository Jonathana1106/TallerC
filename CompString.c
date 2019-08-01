//
// Created by Jonathan on 06/06/2019.
//

#include <stdio.h>
#include <stdlib.h>

/**
 * Metodo que compara el largo de dos strings.
 * @param s String numero 1.
 * @param p String numero 2.
 * @return Retorna -1, 0, 1, segun sea mas largo o igual uno o otro string.
 */
int strCmp(char *s, char *p) {
    if (*s == '\0' && *p == '\0') {
        return 0;
    } else if (*s != '\0' && *p != '\0') {
        return strCmp((s + 1), (p + 1));
    } else if (*s == '\0') {
        return -1;
    } else {
        return 1;
    }
}