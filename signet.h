#ifndef SIGNET_H
#define SIGNET_H

#include "types.h"
#define VERSION "0.0.1"

const usize width   = 35;
const usize height  = 17;
const usize size    = width * height;
const usize start   = size / 2;

const usize arg_max = 1;
usize arg_len       = 0;

bool  verbose       = FALSE;
bool  ascii         = FALSE;

/* function prototypes */
void generate_matrix(char *data, char *matrix);
void print_matrix(char *matrix);
void handle_main(void *data, char **pars, const int pars_count);
void handle_bool(void *data, char **pars, const int pars_count);
void version(void *data, char **pars, const int pars_count);
void help(void *data, char **pars, const int pars_count);

#endif