/*
 * utils.h
 *
 *  Created on: Nov 2, 2015
 *      Author: dcosas
 */

#ifndef UTILS_H_
#define UTILS_H_
#include "config.h"

#define HIGH 1
#define LOW 0


void uitoa(uint32_t integerValue, char* asciiValue, int maxCh);
void atoui(uint32_t *integerValue, char* asciiValue);
uint32_t power(uint32_t base, uint32_t exponent);
#ifdef DEBUG
void ConfigureUART0(void);
void LOGprintf(const char *pcString, ...);
#endif

#endif /* UTILS_H_ */
